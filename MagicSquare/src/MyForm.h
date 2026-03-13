#pragma once
#include <Windows.h>
#include <string>
#define maxsize 21
int square[maxsize][maxsize];


namespace HW2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO:  在此加入建構函式程式碼
            //
        }

    protected:
        /// <summary>
        /// 清除任何使用中的資源。
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:








    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::ListBox^ listBox1;








    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::RadioButton^ radioButton1;
    private: System::Windows::Forms::RadioButton^ radioButton2;
    private: System::Windows::Forms::RadioButton^ radioButton4;
    private: System::Windows::Forms::RadioButton^ radioButton3;
    private: System::Windows::Forms::RadioButton^ radioButton5;
    private: System::Windows::Forms::RadioButton^ radioButton6;
    private: System::Windows::Forms::RadioButton^ radioButton7;
    private: System::Windows::Forms::RadioButton^ radioButton8;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabControl^ normal;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::ListBox^ listBox2;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Label^ label2;

    private:
        /// <summary>
        /// 設計工具所需的變數。
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
        /// 這個方法的內容。
        /// </summary>
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->normal = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->listBox2 = (gcnew System::Windows::Forms::ListBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->normal->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(55, 113);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(167, 104);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Magic Square";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(76, 41);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(94, 22);
            this->textBox1->TabIndex = 9;
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 12;
            this->listBox1->Location = System::Drawing::Point(6, 7);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(530, 292);
            this->listBox1->TabIndex = 10;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->radioButton4);
            this->groupBox1->Controls->Add(this->radioButton3);
            this->groupBox1->Controls->Add(this->radioButton2);
            this->groupBox1->Controls->Add(this->radioButton1);
            this->groupBox1->Location = System::Drawing::Point(250, 41);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(126, 151);
            this->groupBox1->TabIndex = 19;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"起始位置";
            // 
            // radioButton4
            // 
            this->radioButton4->AutoSize = true;
            this->radioButton4->Location = System::Drawing::Point(12, 127);
            this->radioButton4->Name = L"radioButton4";
            this->radioButton4->Size = System::Drawing::Size(35, 16);
            this->radioButton4->TabIndex = 3;
            this->radioButton4->TabStop = true;
            this->radioButton4->Text = L"右";
            this->radioButton4->UseVisualStyleBackColor = true;
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->Location = System::Drawing::Point(12, 87);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(35, 16);
            this->radioButton3->TabIndex = 2;
            this->radioButton3->TabStop = true;
            this->radioButton3->Text = L"左";
            this->radioButton3->UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Location = System::Drawing::Point(12, 54);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(35, 16);
            this->radioButton2->TabIndex = 1;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"下";
            this->radioButton2->UseVisualStyleBackColor = true;
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Location = System::Drawing::Point(12, 21);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(35, 16);
            this->radioButton1->TabIndex = 0;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"上";
            this->radioButton1->UseVisualStyleBackColor = true;
            // 
            // radioButton5
            // 
            this->radioButton5->AutoSize = true;
            this->radioButton5->Location = System::Drawing::Point(15, 31);
            this->radioButton5->Name = L"radioButton5";
            this->radioButton5->Size = System::Drawing::Size(47, 16);
            this->radioButton5->TabIndex = 20;
            this->radioButton5->TabStop = true;
            this->radioButton5->Text = L"左上";
            this->radioButton5->UseVisualStyleBackColor = true;
            // 
            // radioButton6
            // 
            this->radioButton6->AutoSize = true;
            this->radioButton6->Location = System::Drawing::Point(116, 31);
            this->radioButton6->Name = L"radioButton6";
            this->radioButton6->Size = System::Drawing::Size(47, 16);
            this->radioButton6->TabIndex = 21;
            this->radioButton6->TabStop = true;
            this->radioButton6->Text = L"右上";
            this->radioButton6->UseVisualStyleBackColor = true;
            // 
            // radioButton7
            // 
            this->radioButton7->AutoSize = true;
            this->radioButton7->Location = System::Drawing::Point(15, 113);
            this->radioButton7->Name = L"radioButton7";
            this->radioButton7->Size = System::Drawing::Size(47, 16);
            this->radioButton7->TabIndex = 22;
            this->radioButton7->TabStop = true;
            this->radioButton7->Text = L"左下";
            this->radioButton7->UseVisualStyleBackColor = true;
            // 
            // radioButton8
            // 
            this->radioButton8->AutoSize = true;
            this->radioButton8->Location = System::Drawing::Point(116, 113);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(47, 16);
            this->radioButton8->TabIndex = 23;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"右下";
            this->radioButton8->UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->radioButton7);
            this->groupBox2->Controls->Add(this->radioButton6);
            this->groupBox2->Controls->Add(this->radioButton8);
            this->groupBox2->Controls->Add(this->radioButton5);
            this->groupBox2->Location = System::Drawing::Point(402, 44);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(193, 148);
            this->groupBox2->TabIndex = 24;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"移動方向";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(53, 41);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(17, 12);
            this->label1->TabIndex = 25;
            this->label1->Text = L"n=";
            // 
            // normal
            // 
            this->normal->Controls->Add(this->tabPage1);
            this->normal->Controls->Add(this->tabPage2);
            this->normal->Location = System::Drawing::Point(55, 233);
            this->normal->Name = L"normal";
            this->normal->SelectedIndex = 0;
            this->normal->Size = System::Drawing::Size(549, 331);
            this->normal->TabIndex = 26;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->listBox1);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(541, 305);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"tabPage1";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->dataGridView1);
            this->tabPage2->Controls->Add(this->listBox2);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(541, 305);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(17, 32);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(489, 255);
            this->dataGridView1->TabIndex = 1;
            // 
            // listBox2
            // 
            this->listBox2->FormattingEnabled = true;
            this->listBox2->ItemHeight = 12;
            this->listBox2->Location = System::Drawing::Point(6, 7);
            this->listBox2->Name = L"listBox2";
            this->listBox2->Size = System::Drawing::Size(529, 292);
            this->listBox2->TabIndex = 0;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(74, 75);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(70, 12);
            this->label2->TabIndex = 27;
            this->label2->Text = L"4<= size <=21";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1344, 921);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->normal);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->normal->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

       
        int i, j, k, l, data, n, x, y;

        void upper_left(int n) {
            listBox1->Items->Add("Upper_Left magic square:");
            square[i][j] = 1;
            data = 2;

            while (data <= n * n) {
                if ((i - 1) < 0)
                    x = n - 1;
                else
                    x = i - 1;
                if ((j - 1) < 0)
                    y = n - 1;
                else
                    y = j - 1;

                if ((square[x][y]) != 0) {
                    x = (i + 1) % n;
                    y = j;
                }
                square[x][y] = data++;
                i = x;
                j = y;
            }
        }

        void upper_right(int n) {
            listBox1->Items->Add("Upper_Right magic square:");
            square[i][j] = 1;
            data = 2;
            while (data <= n * n) {
                if ((i - 1) < 0)
                    x = n - 1;
                else
                    x = i - 1;
                if ((j + 1) > (n - 1))
                    y = 0;
                else
                    y = j + 1;

                if (square[x][y] != 0) {
                    x = (i + 1) % n;
                    y = j;
                }
                square[x][y] = data++;
                i = x;
                j = y;
            }
        }

        void lower_left(int n) {
            listBox1->Items->Add("Lower_Left magic square:");
            square[i][j] = 1;
            data = 2;
            while (data <= n * n) {
                if ((i + 1) > (n - 1))
                    x = 0;
                else
                    x = i + 1;
                if ((j - 1) < 0)
                    y = n - 1;
                else
                    y = j - 1;

                if ((square[x][y]) != 0) {
                    x = (i - 1 + n) % n; // Fixed potential issue with negative modulo
                    y = j;
                }
                square[x][y] = data++;
                i = x;
                j = y;
            }
        }

        void lower_right(int n) {
            listBox1->Items->Add("Lower_Right magic square:");
            square[i][j] = 1;
            data = 2;
            while (data <= n * n) {
                if ((i + 1) > (n - 1))
                    x = 0;
                else
                    x = i + 1;
                if ((j + 1) > (n - 1))
                    y = 0;
                else
                    y = j + 1;

                if ((square[x][y]) != 0) {
                    x = (i - 1 + n) % n; // Fixed potential issue with negative modulo
                    y = j;
                }
                square[x][y] = data++;
                i = x;
                j = y;
            }
        }

        void magic4x4(int n) {
            int base[4][4] = {
                { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 },
                { 13, 14, 15, 16 }
            };

            // 將初始值填入陣列
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    square[i][j] = base[i][j];
                }
            }

            // 交換非對角線的數字
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if ((i == j) || (i + j == 3)) {
                        // 保持對角線不變
                    }
                    else {
                        // 交換對應位置
                        square[i][j] = 17 - base[i][j];
                    }
                }
            }
        }

        void grid(int n) {
            String^ row;
            dataGridView1->Columns->Clear();
            dataGridView1->Rows->Clear();

            // 設定 DataGridView 欄數 (Columns)
            dataGridView1->ColumnCount = n;
            for (int col = 0; col < n; col++) {
                dataGridView1->Columns[col]->Width = 50; // 設定每一欄的寬度
                dataGridView1->Columns[col]->HeaderText = "C" + (col + 1); // 設定欄標題
            }

            // 設定 DataGridView 列數 (Rows)
            dataGridView1->RowCount = n;
            for (int r = 0; r < n; r++) {
            
                dataGridView1->Rows[r]->HeaderCell->Value = "R" + (r + 1); // 設定列標題
            }
            // 設定 DataGridView 列數


            listBox2->Items->Clear();
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    dataGridView1->Rows[i]->Cells[j]->Value = square[i][j]; // 填入數值
                }
              
            }
        }

        void PrintSquare(int n) {
            int i, j, k;
            String^ row;
            int len = (n * n).ToString()->Length + 2;

            for (i = 0; i < n; i++) {
                row = "";
                for (j = 0; j < n; j++) {
                    int space = len - square[i][j].ToString()->Length;
                    for (k = 0; k < space; k++) row += " ";
                    row += square[i][j].ToString();
                }
                listBox1->Items->Add(row);
            }
        }

        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
            // Initialize UI state
            radioButton1->Checked = true; // Default to first position
            radioButton5->Checked = true; // Default to first direction
        }

       
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            listBox1->Items->Clear();
            n = Int32::Parse(textBox1->Text);

            if (n > maxsize) {
                listBox1->Items->Add("輸入的數值過大，無法生成魔術方陣。");
                return;
            }
            else if (n < 3) {
                listBox1->Items->Add("輸入的數值過小，無法生成魔術方陣。");
                return;
            }
            else if (n % 2 == 0 && n!= 4 ) {
                listBox1->Items->Add("輸入的數值為偶數，無法生成魔術方陣。");
                return;
            }
            else {
                // Reset the square

                for (i = 0; i < n; i++) {

                    for (j = 0; j < n; j++) {
                        square[i][j] = 0;
                    }
                }

                if (n == 4)
                    magic4x4(n);
                else {

                    // Set starting position based on radio button selection
                    int s = 0;
                    if (radioButton1->Checked) s = 0;
                    else if (radioButton2->Checked) s = 1;
                    else if (radioButton3->Checked) s = 2;
                    else if (radioButton4->Checked) s = 3;

                    // Set starting position based on selection
                    if (s == 0) { // Top
                        i = 0;
                        j = (n - 1) / 2;
                    }
                    else if (s == 1) { // Bottom
                        i = n - 1;
                        j = (n - 1) / 2;
                    }
                    else if (s == 2) { // Left
                        i = (n - 1) / 2;
                        j = 0;
                    }
                    else if (s == 3) { // Right
                        i = (n - 1) / 2;
                        j = n - 1;
                    }

                    // Generate the magic square based on direction selection
                    if (radioButton5->Checked) { // Upper Left
                        upper_left(n);
                    }
                    else if (radioButton6->Checked) { // Upper Right
                        upper_right(n);
                    }
                    else if (radioButton7->Checked) { // Lower Left
                        lower_left(n);
                    }
                    else if (radioButton8->Checked) { // Lower Right
                        lower_right(n);
                    }
                }
                listBox1->Items->Add(n + "*" + n + "的魔術方陣");
                PrintSquare(n);
                grid(n);
            }
        }
        catch (FormatException^) {
            listBox1->Items->Add("請輸入有效的數字。");
        }
    }
};
}