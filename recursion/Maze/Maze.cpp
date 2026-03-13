#pragma once

#include <ctime>
#include <stack>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

// ----------------- 迷宮結構 -----------------
#define possible_direction 8
#define Max_size 20

int h, w;
int i, j, height, width;

struct offset { int dx, dy; };
struct position { int x, y, direction_dir; };

// Directions enum
enum directions { N, NE, E, SE, S, SW, W, NW };
offset move[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1},
    {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};

void movemouse(position& pos, directions dir) {
    pos.x += move[dir].dx;
    pos.y += move[dir].dy;
}

// ----------------- GUI 主程式 -----------------
namespace MazeProject {

    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::IO;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    private:
        array<array<int>^>^ maze;
        int h, w;

        // GUI 元件
        System::Windows::Forms::ListBox^ listBox1;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::DataGridView^ dataGridView2;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Button^ button4;
        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
        System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components) delete components;
        }

    private:
        System::ComponentModel::Container ^components;

        void InitializeComponent(void)
        {
            // 初始化 GUI 元件（略，原本程式碼的 InitializeComponent）
        }

    // ----------------- 事件處理 -----------------

    // 生成迷宮
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            h = Int32::Parse(textBox1->Text);
            w = Int32::Parse(textBox2->Text);
            int grid_size = Int32::Parse(textBox3->Text);

            // 初始化迷宮陣列
            maze = gcnew array<array<int>^>(w + 2);
            for (int i = 0; i < w + 2; i++)
                maze[i] = gcnew array<int>(h + 2);

            srand(time(NULL));

            for (int i = 0; i < (h + 2); i++) {
                for (int j = 0; j < (w + 2); j++) {
                    if ((i == 1 && j == 1) || (i == 0 && j == 1) || (i == (h + 1) && j == w) || (i == h && j == w))
                        maze[i][j] = 0;
                    else if ((i == 0 || j == 0 || i == (h + 1) || j == (w + 1)))
                        maze[i][j] = 2;
                    else
                        maze[i][j] = rand() % 2;
                }
            }

            // 顯示迷宮
            listBox1->Items->Clear();
            for (int i = 0; i < (h + 2); i++) {
                String^ s = "";
                for (int j = 0; j < (w + 2); j++) {
                    s += maze[j][i].ToString() + "\t";
                }
                listBox1->Items->Add(s);
            }

            // DataGridView 顯示
            dataGridView1->RowCount = h + 2; dataGridView1->ColumnCount = w + 2;
            dataGridView2->RowCount = h + 2; dataGridView2->ColumnCount = w + 2;

            for (int i = 0; i < h + 2; i++)
                for (int j = 0; j < w + 2; j++) {
                    dataGridView1->Rows[i]->Cells[j]->Value = maze[j][i].ToString();
                    dataGridView2->Rows[i]->Cells[j]->Value = maze[j][i].ToString();
                }

            listBox1->Items->Add("Maze generated successfully.\n");
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message);
        }
    }

    // 儲存迷宮
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                String^ fileName = saveFileDialog1->FileName;
                IntPtr ptr = Marshal::StringToHGlobalAnsi(fileName);
                const char* nativeFile = static_cast<const char*>(ptr.ToPointer());
                FILE* fp = fopen(nativeFile, "w");
                if (fp) {
                    fprintf(fp, "%d %d\n", h, w);
                    for (int i = 0; i < (h + 2); i++) {
                        for (int j = 0; j < (w + 2); j++) {
                            fprintf(fp, "%d ", maze[i][j]);
                        }
                        fprintf(fp, "\n");
                    }
                    fclose(fp);
                }
                Marshal::FreeHGlobal(ptr);
                listBox1->Items->Add("Maze saved successfully.\n");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving maze: " + ex->Message);
        }
    }

    // 載入迷宮
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
                String^ firstLine = sr->ReadLine()->Trim();
                array<String^>^ dims = firstLine->Split(' ');
                int m = Int32::Parse(dims[0]);
                int p = Int32::Parse(dims[1]);

                maze = gcnew array<array<int>^>(m);
                for (int i = 0; i < m; i++) {
                    String^ line = sr->ReadLine()->Trim();
                    array<String^>^ vals = line->Split(' ');
                    maze[i] = gcnew array<int>(p);
                    for (int j = 0; j < p; j++) maze[i][j] = Int32::Parse(vals[j]);
                }
                sr->Close();
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading maze: " + ex->Message);
        }
    }

    // 尋路
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            int rows = dataGridView1->RowCount;
            int cols = dataGridView1->ColumnCount;

            if (maze == nullptr) {
                maze = gcnew array<array<int>^>(cols);
                for (int i = 0; i < cols; i++) maze[i] = gcnew array<int>(rows);
            }

            position* path = new position[cols * rows];
            int m = 1, n = 1, step = 0;

            array<array<int>^>^ path_traced = gcnew array<array<int>^>(cols);
            for (int i = 0; i < cols; i++) { path_traced[i] = gcnew array<int>(rows); }

            path_traced[m][n] = 1;
            int destX = cols - 2, destY = rows - 2;

            do {
                int p = m, q = n, d = 0, flag = 0;
                while (d < 8) {
                    p = m + move[d].dx; q = n + move[d].dy;
                    if (p >= 0 && p < cols && q >= 0 && q < rows &&
                        path_traced[p][q] == 0 && maze[p][q] == 0) {
                        path_traced[p][q] = 1;
                        path[step].x = p; path[step].y = q; path[step].direction_dir = d;
                        m = p; n = q; step++; flag = 1; break;
                    }
                    d++;
                }
                if (flag == 0) {
                    step--;
                    if (step == -1) { listBox1->Items->Add("No Way Out...\n"); break; }
                    m = path[step].x; n = path[step].y;
                }
            } while (!(m == destX && n == destY));

            for (int i = 0; i < cols; i++)
                for (int j = 0; j < rows; j++)
                    if (path_traced[i][j] == 1) maze[i][j] = 4;

            for (int i = 0; i < step; i++) maze[path[i].x][path[i].y] = 3;
            maze[1][1] = 3; maze[destX][destY] = 3;
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error finding path: " + ex->Message);
        }
    }

    }; // end MyForm
} // end namespace MazeProject

// ----------------- main.cpp -----------------
[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MazeProject::MyForm form;
    Application::Run(%form);
    return 0;
}
