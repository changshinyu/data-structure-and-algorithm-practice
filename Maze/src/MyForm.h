#pragma once

#include <ctime>
#include <stack>
#include <vector>
#include<stdlib.h>
# include <stdio.h>
#include <iostream>
using namespace System::Runtime::InteropServices;


using namespace System::Runtime::InteropServices;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Text;
#define possible_direction 8
#define Max_size 20
int h, w, maze[Max_size][Max_size], i, j,height,width;

struct offset
{
	int dx, dy;
};
struct position
{
	int x, y, direction_dir;
};

// Directions enum
enum directions { N, NE, E, SE, S, SW, W, NW };
offset move[] =
{
	{0, -1}, // N
	{1, -1}, // NE
	{1, 0},  // E
	{1, 1},  // SE
	{0, 1},  // S
	{-1, 1}, // SW
	{-1, 0}, // W
	{-1, -1} // NW
};

void movemouse(position& pos, directions dir) {
	pos.x += move[dir].dx;
	pos.y += move[dir].dy;
}
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	// Direction offsets
	
	
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		// Use managed arrays instead of standard arrays
		array<array<int>^>^ maze;
		int h, w; // maze dimensions
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::Button^ button3;




		// Move the offset array outside the class
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			
				

				// Initialize the maze array
			

			
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

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage2;

	private:
		

		
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"10";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(263, 36);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"10";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"generate maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"height";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"width";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(25, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(392, 358);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"size";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 280);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"grid size";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 277);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 36);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"20";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(715, 155);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(851, 717);
			this->tabControl1->TabIndex = 8;
			this->tabControl1->Tag = L"";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(843, 676);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"normal";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(24, 36);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(782, 604);
			this->listBox1->TabIndex = 7;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(843, 676);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"datagrid 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 38;
			this->dataGridView1->Size = System::Drawing::Size(770, 606);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 37);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(843, 676);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"datagrid 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView2->Location = System::Drawing::Point(48, 44);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->RowTemplate->Height = 38;
			this->dataGridView2->Size = System::Drawing::Size(748, 575);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellPainting += gcnew System::Windows::Forms::DataGridViewCellPaintingEventHandler(this, &MyForm::dataGridView2_CellPainting);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 52);
			this->button2->TabIndex = 9;
			this->button2->Text = L"save maze";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 612);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(270, 53);
			this->button3->TabIndex = 10;
			this->button3->Text = L"load maze";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 702);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(270, 56);
			this->button4->TabIndex = 11;
			this->button4->Text = L"find path";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1720, 1085);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	void movePosition(position% pos, directions dir) {
		pos.x += move[dir].dx;
		pos.y += move[dir].dy;
	}
	
	//generate maze
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int grid_size;
		try {
			h = Int32::Parse(textBox1->Text);
			w = Int32::Parse(textBox2->Text);
			grid_size = Int32::Parse(textBox3->Text);

			// Initialize random seed
			// Initialize maze array with the correct dimensions
			maze = gcnew array<array<int>^>(w + 2);
			for (int i = 0; i < w + 2; i++) {
				maze[i] = gcnew array<int>(h + 2);
			}

			// Initialize random seed
			srand(time(NULL));

			// Generate maze (with walls)
			for (int i = 0; i < (h + 2); i++)
			{
				for (int j = 0; j < (w + 2); j++)
				{
					if ((i == 1 && j == 1) || (i == 0 && j == 1) || (i == (h + 1) && j == w) || (i == h && j == w))
					{
						maze[i][j] = 0;
					}
					else if ((i == 0 || j == 0 || i == (h + 1) || j == (w + 1)))
					{
						maze[i][j] = 2;// 圍牆
					}
					else
					{
						maze[i][j] = rand() % 2;// 隨機牆或通道
					}

				}
			}

			position mouse = { 1, 1, N }; // Mouse starting position

			listBox1->Items->Add("(h,w)=" + h.ToString() + ", " + w.ToString() + "\n");

			// Display maze as text in listBox1
			for (int i = 0; i < (h + 2); i++) 
			{
				String^ s = "";
				for (int j = 0; j < (w + 2); j++) 
				{
					s += maze[j][i].ToString() + "\t";
				}
				listBox1->Items->Add(s + "\n");
			}

			// Setup dataGridView1
			dataGridView1->RowCount = h + 2;
			dataGridView1->ColumnCount = w + 2;

			// Set cell sizes
			for (int i = 0; i < h + 2; i++) 
			{
				dataGridView1->Rows[i]->Height = grid_size;
			}

			for (int j = 0; j < w + 2; j++) 
			{
				dataGridView1->Columns[j]->Width = grid_size;
			}

			// Display maze in dataGridView1
			for (int i = 0; i < h + 2; i++) 
			{
				for (int j = 0; j < w + 2; j++) 
				{
					dataGridView1->Rows[i]->Cells[j]->Value = maze[j][i].ToString();
				}
			}

			// Setup dataGridView2
			dataGridView2->RowCount = h + 2;
			dataGridView2->ColumnCount = w + 2;

			for (int i = 0; i < h + 2; i++) 
			{
				dataGridView2->Rows[i]->Height = grid_size;
			}

			for (int j = 0; j < w + 2; j++) 
			{
				dataGridView2->Columns[j]->Width = grid_size;
			}

			// Display maze in dataGridView2
			for (int i = 0; i < h + 2; i++)
			{
				for (int j = 0; j < w + 2; j++)
				{
					dataGridView2->Rows[i]->Cells[j]->Value = maze[j][i].ToString();
				}
			}

			listBox1->Items->Add("Maze generated successfully.\n");
		}
		catch (Exception^ ex) 
		{
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

//save maze
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// 創建並配置 SaveFileDialog
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog1->Title = "Save Maze";

		// 顯示對話框並檢查結果
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// 取得選擇的檔案名稱
			String^ fileName = saveFileDialog1->FileName;

			// 使用 C++ 風格的檔案操作
			// 轉換 System::String^ 為標準 C 字串
			IntPtr ptrToNativeString = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fileName);
			const char* nativeFileName = static_cast<const char*>(ptrToNativeString.ToPointer());

			FILE* fp = fopen(nativeFileName, "w");

			if (fp) {
				// 寫入迷宮尺寸
				fprintf(fp, "%d %d", h, w);
				putc('\n', fp);

				// 寫入迷宮數據
				for (int i = 0; i < (h + 2); i++) {
					for (int j = 0; j < (w + 2); j++) {
						fprintf(fp, "%d ", maze[i][j]);
					}
					putc('\n', fp);
				}

				// 關閉檔案
				fclose(fp);

				// 釋放轉換的字串記憶體
				System::Runtime::InteropServices::Marshal::FreeHGlobal(ptrToNativeString);

				// 顯示成功訊息
				listBox1->Items->Add("Maze saved successfully.\n");
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error saving maze: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


	

//load maze
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = openFileDialog1->FileName;
		try {
			// 使用StreamReader代替C風格文件操作
			StreamReader^ sr = gcnew StreamReader(fileName);

			// 讀取第一行獲取尺寸並清除任何空白
			String^ firstLine = sr->ReadLine()->Trim();
			array<String^>^ dimensions = firstLine->Split(' ');

			// 驗證我們至少有2個值
			if (dimensions->Length < 2) {
				MessageBox::Show("無效的文件格式：找不到尺寸", "錯誤");
				sr->Close();
				return;
			}

			// 嘗試解析並驗證
			int m, p;
			if (!Int32::TryParse(dimensions[0], m) || !Int32::TryParse(dimensions[1], p)) {
				MessageBox::Show("無效的尺寸格式", "錯誤");
				sr->Close();
				return;
			}

			listBox1->Items->Add("m=" + m + " p=" + p);
			listBox1->Items->Add("輸入文件: " + fileName);

			// 正確初始化迷宮數組
			array<array<int>^>^ maze = gcnew array<array<int>^>(m);

			// 跳過第一行之後的空行
			String^ line = sr->ReadLine();
			while (line != nullptr && line->Trim()->Length == 0) {
				line = sr->ReadLine();
			}

			// 讀取每一行的迷宮數據
			for (int i = 0; i < m; i++) {
				// 如果當前行是空的，嘗試讀取下一行
				if (line == nullptr || line->Trim()->Length == 0) {
					line = sr->ReadLine();
					if (line == nullptr) {
						MessageBox::Show("文件行數少於指定的行數", "錯誤");
						sr->Close();
						return;
					}
				}

				// 分割並修剪行
				array<String^>^ values = line->Trim()->Split(' ');
				maze[i] = gcnew array<int>(p);

				// 解析每個值並驗證
				for (int j = 0; j < p; j++) {
					if (j < values->Length) {
						int value;
						if (Int32::TryParse(values[j], value)) {
							maze[i][j] = value;
						}
						else {
							maze[i][j] = 0; // 對於無效值默認使用0
							listBox1->Items->Add("警告：位置 [" + i + "," + j + "] 的值無效，使用0代替");
						}
					}
					else {
						maze[i][j] = 0; // 如果行中的值不夠，則使用默認值
					}
				}

				// 獲取下一行用於下次迭代
				line = sr->ReadLine();
			}

			sr->Close();

			// 設置DataGridView1
			dataGridView1->RowCount = m;
			dataGridView1->ColumnCount = p;

			// 設置DataGridView2
			dataGridView2->RowCount = m;
			dataGridView2->ColumnCount = p;

			// 在DataGridViews和ListBox中顯示
			for (int i = 0; i < m; i++) {
				String^ rowData = "";
				for (int j = 0; j < p; j++) {
					// 添加到字符串用於ListBox
					rowData += maze[i][j].ToString() + " ";

					// 對於DataGridView1
					dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j].ToString();
					

					// 對於DataGridView2
					dataGridView2->Rows[i]->Cells[j]->Value = maze[i][j].ToString();
					dataGridView2->Rows[i]->Cells[j]->Style->BackColor = dataGridView1->Rows[i]->Cells[j]->Style->BackColor;
				}

				// 將行數據添加到ListBox
				listBox1->Items->Add(rowData);
			}

			// 調整DataGridView的大小，使所有單元格大小一致
			ResizeDataGridViews();
		}
		catch (Exception^ ex) {
			MessageBox::Show("錯誤: " + ex->Message, "錯誤", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: void ResizeDataGridViews() {
	// 確保兩個DataGridView的單元格大小一致
	int cellSize = 20; // 設置一個合適的單元格大小

	// 設置DataGridView1的列寬和行高
	for (int i = 0; i < dataGridView1->ColumnCount; i++) {
		dataGridView1->Columns[i]->Width = cellSize;
	}
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		dataGridView1->Rows[i]->Height = cellSize;
	}

	// 設置DataGridView2的列寬和行高
	for (int i = 0; i < dataGridView2->ColumnCount; i++) {
		dataGridView2->Columns[i]->Width = cellSize;
	}
	for (int i = 0; i < dataGridView2->RowCount; i++) {
		dataGridView2->Rows[i]->Height = cellSize;
	}
}

//find path
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*try {
		// Create an array to store path positions
		struct position path[Max_size * Max_size];

		int m = 1, n = 1; // Starting position (x=1, y=1)
		int step = 0;

		// Initialize path_traced array
		array<array<int>^>^ path_traced = gcnew array<array<int>^>(w + 2);
		for (int i = 0; i < w + 2; i++) {
			path_traced[i] = gcnew array<int>(h + 2);
			for (int j = 0; j < h + 2; j++) {
				path_traced[i][j] = 0;
			}
		}

		// Mark starting position
		path_traced[m][n] = 1;

		do {
			int p = m;
			int q = n;
			int d = 0; // Initial direction
			int flag = 0;

			while (d < 8) { // Check all 8 directions
				p = m + move[d].dx;
				q = n + move[d].dy;

				// Check if the new position is valid and not a wall
				if (p >= 0 && p < w + 2 && q >= 0 && q < h + 2 &&
					path_traced[p][q] == 0 && maze[p][q] == 0) {
					// Record path
					path_traced[p][q] = 1;
					path[step].x = p;
					path[step].y = q;
					path[step].direction_dir = d;
					m = p;
					n = q;
					step++;
					flag = 1;
					break;
				}
				d++;
			}

			if (flag == 0) { // No way to go, backtrack
				step--;
				if (step == -1) {
					listBox1->Items->Add("No Way Out...\n");
					break;
				}
				m = path[step].x;  // Use the stored coordinates directly
				n = path[step].y;
			}

			// Check if we've reached the end (h,w)
		} while (!(m == w && n == h));

		// Mark visited cells
		for (int i = 0; i < w + 2; i++) {
			for (int j = 0; j < h + 2; j++) {
				if (path_traced[i][j] == 1) {
					maze[i][j] = 4; // Visited path
				}
			}
		}

		// Mark final path
		for (int i = 0; i < step; i++) {
			maze[path[i].x][path[i].y] = 3; // Final path
		}

		maze[1][1] = 3; // Mark start
		maze[w][h] = 3; // Mark end

		// Display path in listBox1
		listBox1->Items->Add("=====Path(" + h.ToString() + "," + w.ToString() + ")=====\n");
		for (int j = 0; j < (h + 2); j++) {
			String^ s = "";
			for (int i = 0; i < (w + 2); i++) {
				s += "\t" + maze[i][j].ToString();
			}
			listBox1->Items->Add(s + "\n");
		}

		// Update dataGridView1
		for (int j = 0; j < (h + 2); j++) {
			for (int i = 0; i < (w + 2); i++) {
				dataGridView1->Rows[j]->Cells[i]->Value = maze[i][j].ToString();
			}
		}

		// Update dataGridView2
		for (int j = 0; j < (h + 2); j++) {
			for (int i = 0; i < (w + 2); i++) {
				dataGridView2->Rows[j]->Cells[i]->Value = maze[i][j].ToString();
			}
		}

		listBox1->Items->Add("Path finding completed.\n");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error finding path: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}*/

try {
	// Get dimensions from dataGridView
	int rows = dataGridView1->RowCount;
	int cols = dataGridView1->ColumnCount;

	// Make sure maze array is properly initialized
	if (maze == nullptr) {
		// Create the maze array based on dataGridView
		maze = gcnew array<array<int>^>(cols);
		for (int i = 0; i < cols; i++) {
			maze[i] = gcnew array<int>(rows);
			for (int j = 0; j < rows; j++) {
				String^ cellValue = safe_cast<String^>(dataGridView1->Rows[j]->Cells[i]->Value);
				if (cellValue != nullptr) {
					maze[i][j] = Int32::Parse(cellValue);
				}
				else {
					maze[i][j] = 0;
				}
			}
		}
	}

	// Create an array to store path positions
	position* path = new position[cols * rows];

	int m = 1, n = 1; // Starting position (x=1, y=1)
	int step = 0;

	// Initialize path_traced array
	array<array<int>^>^ path_traced = gcnew array<array<int>^>(cols);
	for (int i = 0; i < cols; i++) {
		path_traced[i] = gcnew array<int>(rows);
		for (int j = 0; j < rows; j++) {
			path_traced[i][j] = 0;
		}
	}

	// Mark starting position
	path_traced[m][n] = 1;

	// Set destination
	int destX = cols - 2; // Destination X
	int destY = rows - 2; // Destination Y

	do {
		int p = m;
		int q = n;
		int d = 0; // Initial direction
		int flag = 0;

		while (d < 8) { // Check all 8 directions
			p = m + move[d].dx;
			q = n + move[d].dy;

			// Check if the new position is valid and not a wall
			if (p >= 0 && p < cols && q >= 0 && q < rows &&
				path_traced[p][q] == 0 && maze[p][q] == 0) {
				// Record path
				path_traced[p][q] = 1;
				path[step].x = p;
				path[step].y = q;
				path[step].direction_dir = d;
				m = p;
				n = q;
				step++;
				flag = 1;
				break;
			}
			d++;
		}

		if (flag == 0) { // No way to go, backtrack
			step--;
			if (step == -1) {
				listBox1->Items->Add("No Way Out...\n");
				break;
			}
			m = path[step].x;  // Use the stored coordinates directly
			n = path[step].y;
		}

		// Check if we've reached the end
	} while (!(m == destX && n == destY));

	// Mark visited cells
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if (path_traced[i][j] == 1) {
				maze[i][j] = 4; // Visited path
			}
		}
	}

	// Mark final path
	for (int i = 0; i < step; i++) {
		maze[path[i].x][path[i].y] = 3; // Final path
	}

	maze[1][1] = 3; // Mark start
	maze[destX][destY] = 3; // Mark end

	// Display path in listBox1
	listBox1->Items->Add("=====Path=====\n");
	for (int j = 0; j < rows; j++) {
		String^ s = "";
		for (int i = 0; i < cols; i++) {
			s += "\t" + maze[i][j].ToString();
		}
		listBox1->Items->Add(s + "\n");
	}

	// Update dataGridViews
	for (int j = 0; j < rows; j++) {
		for (int i = 0; i < cols; i++) {
			dataGridView1->Rows[j]->Cells[i]->Value = maze[i][j].ToString();
			dataGridView2->Rows[j]->Cells[i]->Value = maze[i][j].ToString();
		}
	}

	listBox1->Items->Add("Path finding completed.\n");
}
catch (Exception^ ex) {
	MessageBox::Show("Error finding path: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		int col = e->ColumnIndex;
		int row = e->RowIndex;

		if (col >= 0 && row >= 0) {
			DataGridViewCellStyle^ cellStyle = dataGridView1->Rows[row]->Cells[col]->Style;

			int cellWidth = dataGridView1->Columns[col]->Width;
			int cellHeight = dataGridView1->Rows[row]->Height;

			
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		int col = e->ColumnIndex;
		int row = e->RowIndex;

		if (col >= 0 && row >= 0) {
			DataGridViewCellStyle^ cellStyle = dataGridView2->Rows[row]->Cells[col]->Style;

			int cellWidth = dataGridView2->Columns[col]->Width;
			int cellHeight = dataGridView2->Rows[row]->Height;

			
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellPainting(System::Object^ sender, System::Windows::Forms::DataGridViewCellPaintingEventArgs^ e) {
	try {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			e->Handled = true;
			e->PaintBackground(e->CellBounds, true);

			String^ cellValue = safe_cast<String^>(dataGridView2->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value);

			if (cellValue == "0") {
				e->Graphics->FillRectangle(gcnew SolidBrush(Color::FromArgb(218, 247, 166)), e->CellBounds);
			}
			else if (cellValue == "2") {
				e->Graphics->FillRectangle(gcnew SolidBrush(Color::FromArgb(88, 24, 69)), e->CellBounds);
			}
			else if (cellValue == "3") {
				e->Graphics->FillRectangle(gcnew SolidBrush(Color::FromArgb(31, 97, 141)), e->CellBounds);
			}
			else if (cellValue == "4") {
				e->Graphics->FillRectangle(gcnew SolidBrush(Color::FromArgb(255, 195, 0)), e->CellBounds);
			}
			else {
				e->Graphics->FillRectangle(gcnew SolidBrush(Color::FromArgb(17, 122, 101)), e->CellBounds);
			}
		}
	}
	catch (Exception^ ex) {
		// Silent handling to prevent painting errors
	}

}
	   [STAThread]
	   int main(array<System::String^>^ args)
	   {
		   Application::EnableVisualStyles();
		   Application::SetCompatibleTextRenderingDefault(false);

		   Project3::MyForm form;
		   Application::Run(% form);
		   return 0;
	   }
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
};
}
