#pragma once
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <vector>
#include <queue>
#include <climits>

namespace Project7 {

	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Runtime::InteropServices;
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

	protected:
































	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridView^ dataGridView5;






















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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(31, 883);
			this->button5->Margin = System::Windows::Forms::Padding(5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(392, 45);
			this->button5->TabIndex = 82;
			this->button5->Text = L"Transitive Closure";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(31, 817);
			this->button4->Margin = System::Windows::Forms::Padding(5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(392, 45);
			this->button4->TabIndex = 81;
			this->button4->Text = L"All pairs";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(25, 650);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(286, 35);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Shortest Path Solver ";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(248, 563);
			this->checkBox2->Margin = System::Windows::Forms::Padding(5);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(183, 34);
			this->checkBox2->TabIndex = 79;
			this->checkBox2->Text = L"Echo Print G";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(42, 563);
			this->checkBox1->Margin = System::Windows::Forms::Padding(5);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(196, 34);
			this->checkBox1->TabIndex = 78;
			this->checkBox1->Text = L"Undirected G";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(31, 745);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(392, 45);
			this->button3->TabIndex = 77;
			this->button3->Text = L"Single Source All Destinations";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(262, 420);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(126, 36);
			this->textBox5->TabIndex = 76;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(37, 426);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 30);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Souce no. = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(262, 370);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 36);
			this->textBox4->TabIndex = 74;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(262, 314);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 36);
			this->textBox3->TabIndex = 73;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(262, 251);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(126, 36);
			this->textBox2->TabIndex = 72;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(262, 195);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 36);
			this->textBox1->TabIndex = 71;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(37, 376);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 30);
			this->label6->TabIndex = 70;
			this->label6->Text = L"w(e) = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(37, 320);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 30);
			this->label5->TabIndex = 69;
			this->label5->Text = L"if w(e) >";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(37, 257);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 30);
			this->label4->TabIndex = 68;
			this->label4->Text = L"range(w(e)) = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(37, 195);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 30);
			this->label3->TabIndex = 67;
			this->label3->Text = L"n = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(37, 142);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 30);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Randomly Generated";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(36, 24);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 35);
			this->label1->TabIndex = 65;
			this->label1->Text = L"G=(V, E)";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(42, 483);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 70);
			this->button2->TabIndex = 64;
			this->button2->Text = L"Generate G";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(175, 63);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 57);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Read G";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->Location = System::Drawing::Point(31, 701);
			this->checkBox3->Margin = System::Windows::Forms::Padding(5);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(179, 34);
			this->checkBox3->TabIndex = 83;
			this->checkBox3->Text = L"Print results";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(447, 988);
			this->panel1->TabIndex = 84;
			
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(447, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(17, 988);
			this->splitter1->TabIndex = 85;
			this->splitter1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabControl1->Location = System::Drawing::Point(464, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1187, 988);
			this->tabControl1->TabIndex = 86;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(8, 44);
			this->tabPage1->Margin = System::Windows::Forms::Padding(5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(5);
			this->tabPage1->Size = System::Drawing::Size(1171, 936);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"G\'s adjacent matrix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(5, 5);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(5);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1161, 926);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(8, 44);
			this->tabPage2->Margin = System::Windows::Forms::Padding(5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(5);
			this->tabPage2->Size = System::Drawing::Size(1171, 936);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Graph in adjacent matrix ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(5, 5);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1161, 926);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(8, 44);
			this->tabPage3->Margin = System::Windows::Forms::Padding(5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(5);
			this->tabPage3->Size = System::Drawing::Size(1171, 936);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SSAD tables";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(5, 5);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(1161, 926);
			this->dataGridView2->TabIndex = 3;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Location = System::Drawing::Point(8, 44);
			this->tabPage4->Margin = System::Windows::Forms::Padding(5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(5);
			this->tabPage4->Size = System::Drawing::Size(1171, 936);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"All pairs";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->Location = System::Drawing::Point(5, 5);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 27;
			this->dataGridView3->Size = System::Drawing::Size(1161, 926);
			this->dataGridView3->TabIndex = 4;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Location = System::Drawing::Point(8, 44);
			this->tabPage5->Margin = System::Windows::Forms::Padding(5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(5);
			this->tabPage5->Size = System::Drawing::Size(1171, 936);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Allpairs table";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView4->Location = System::Drawing::Point(5, 5);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 27;
			this->dataGridView4->Size = System::Drawing::Size(1161, 926);
			this->dataGridView4->TabIndex = 4;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Location = System::Drawing::Point(8, 44);
			this->tabPage6->Margin = System::Windows::Forms::Padding(5);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(5);
			this->tabPage6->Size = System::Drawing::Size(1171, 936);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"TransitiveClosure";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView5->Location = System::Drawing::Point(5, 5);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 27;
			this->dataGridView5->Size = System::Drawing::Size(1161, 926);
			this->dataGridView5->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1651, 988);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


int** G;
void Singlesourse(int** graph, int start, std::vector<int>& shortestDistances)
{
	int n = shortestDistances.size();
	std::vector<bool> visited(n, false);
	for (int i = 0; i < n; ++i)
		shortestDistances[i] = INT_MAX;
	shortestDistances[start] = 0;
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
	pq.push({ 0, start });
	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		if (visited[u])
			continue;
		visited[u] = true;
		for (int v = 0; v < n; ++v)
		{
			if (graph[u][v] != 0 && shortestDistances[u] != INT_MAX && shortestDistances[u] + graph[u][v] < shortestDistances[v])
			{
				shortestDistances[v] = shortestDistances[u] + graph[u][v];
				pq.push({ shortestDistances[v], v });
			}
		}
	}
}
void Allpairs(int** graph, int n, std::vector<std::vector<int>>& dist, std::vector<std::vector<int>>& next) {
	dist.resize(n, std::vector<int>(n, INT_MAX));
	next.resize(n, std::vector<int>(n, -1));

	for (int i = 0; i < n; ++i) {
		dist[i][i] = 0;
		next[i][i] = i;
	}

	for (int u = 0; u < n; ++u) {
		for (int v = 0; v < n; ++v) {
			if (graph[u][v] < INT_MAX) {
				dist[u][v] = graph[u][v];
				next[u][v] = v;
			}
		}
	}

	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
					dist[i][k] + dist[k][j] < dist[i][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
					next[i][j] = next[i][k];
				}
			}
		}
	}
}


void TransitiveClosure(int** graph, std::vector<std::vector<int>>& transitiveClosure)
{
	int n = transitiveClosure.size();
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			transitiveClosure[i][j] = graph[i][j];
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				transitiveClosure[i][j] = (transitiveClosure[i][j] || (transitiveClosure[i][k] && transitiveClosure[k][j]));
}

void AllpairsTable(System::Windows::Forms::DataGridView^ dgv, const std::vector<std::vector<int>>& next) {
	int n = next.size();
	dgv->RowCount = n;
	dgv->ColumnCount = n;
	dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;

	for (int i = 0; i < n; ++i) {
		dgv->Rows[i]->HeaderCell->Value = i.ToString();
		dgv->Columns[i]->HeaderCell->Value = i.ToString();
		for (int j = 0; j < n; ++j) {
			if (next[i][j] == -1)
				dgv->Rows[i]->Cells[j]->Value = "∞";
			else
				dgv->Rows[i]->Cells[j]->Value = next[i][j].ToString();
		}
	}
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectTab(1);
	String^ line;
	int i, j;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			line = reader->ReadLine();
			cli::array<String^>^ dimensions = line->Split('\t');
			int n = dimensions->Length;
			textBox1->Text = n.ToString();
			G = new int* [n];
			for (i = 0; i < n; i++)
				G[i] = new int[n];
			i = 0;
			do
			{
				cli::array<String^>^ values = line->Split('\t');
				for (j = 0; j < n; j++)
					G[i][j] = int::Parse(values[j]);
				i++;
			} while ((line = reader->ReadLine()) != nullptr);
			reader->Close();

			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = n;
			dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			for (i = 0; i < n; i++)
			{
				dataGridView1->Rows[i]->HeaderCell->Value = i.ToString();
				dataGridView1->Columns[i]->HeaderCell->Value = i.ToString();
				for (j = 0; j < n; j++)
					dataGridView1->Rows[i]->Cells[j]->Value = G[i][j];
			}
		}
		catch (IOException^ ex)
		{
			MessageBox::Show("Error reading the file: " + ex->Message, "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (FormatException^ ex)
		{
			MessageBox::Show("Error parsing the file content: " + ex->Message, "Format Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectTab(1);
	int n = int::Parse(textBox1->Text);
	int range = int::Parse(textBox2->Text);
	int maxRange = int::Parse(textBox3->Text);
	int largeInt = int::Parse(textBox4->Text);
	srand(time(NULL));
	if (G != NULL) {
		for (int i = 0; i < n; i++) {
			delete G[i];
		}
		delete G;
	}
	G = new int* [n];
	for (int i = 0; i < n; i++) {
		G[i] = new int[n];

	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			G[i][j] = rand() % range + 1;
			if (G[i][j] > maxRange) {
				G[i][j] = largeInt;
				if (checkBox1->Checked)
					G[j][i] = G[i][j];
			}
			G[j][i] = G[i][j];
		}
		G[i][i] = largeInt;
	}

	if (checkBox2->Checked)
	{
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				dataGridView1->Rows[i]->Cells[j]->Value = G[i][j];
	}

	dataGridView1->RowCount = n;
	dataGridView1->ColumnCount = n;
	dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

	for (int i = 0; i < n; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
		dataGridView1->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.

		for (int j = 0; j < n; j++) {
			dataGridView1->Rows[i]->Cells[j]->Value = G[i][j];
		}
	}

	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
				sb->AppendFormat("The shortest distance from {0} to {1} is {2} with path {0}--[{2}]-->{1}\r\n", i, j, G[i][j]);
		}
		sb->Append("----------\r\n");
	}
	richTextBox1->Text = sb->ToString();
	tabControl1->SelectTab(tabPage2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectTab(2);
	int n = int::Parse(textBox1->Text);
	if (G == NULL)
	{
		MessageBox::Show("Please generate graph first!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int startNode = 0;
	std::vector<int> shortestDistances(n, INT_MAX);
	Singlesourse(G, startNode, shortestDistances);
	dataGridView2->RowCount = n;
	dataGridView2->ColumnCount = n;
	dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
	for (int i = 0; i < n; i++) {
		dataGridView2->Rows[i]->HeaderCell->Value = i.ToString();
		dataGridView2->Columns[i]->HeaderCell->Value = i.ToString();
		for (int j = 0; j < n; j++) {
			dataGridView2->Rows[i]->Cells[j]->Value = shortestDistances[j];
		}
	}
	if (checkBox3->Checked) {
		textBox5->AppendText("=== Dijkstra Results ===\r\n");
		for (int i = 0; i < n; i++) {
			if (shortestDistances[i] == INT_MAX)
				textBox5->AppendText("From source to node " + i + ": INF\r\n");
			else
				textBox5->AppendText("From source to node " + i + ": " + shortestDistances[i] + "\r\n");
		}
		textBox5->AppendText("\r\n");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectTab(3);
	int n = int::Parse(textBox1->Text);

	if (G == nullptr) {
		MessageBox::Show("Please generate graph first!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 呼叫 Allpairs
	std::vector<std::vector<int>> shortestDistances(n, std::vector<int>(n, INT_MAX));
	std::vector<std::vector<int>> next(n, std::vector<int>(n, -1));
	Allpairs(G, n, shortestDistances, next);

	// 顯示最短距離在 dataGridView3
	dataGridView3->RowCount = n;
	dataGridView3->ColumnCount = n;
	dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
	for (int i = 0; i < n; i++) {
		dataGridView3->Rows[i]->HeaderCell->Value = i.ToString();
		dataGridView3->Columns[i]->HeaderCell->Value = i.ToString();
		for (int j = 0; j < n; j++) {
			if (shortestDistances[i][j] == INT_MAX)
				dataGridView3->Rows[i]->Cells[j]->Value = "∞";
			else
				dataGridView3->Rows[i]->Cells[j]->Value = shortestDistances[i][j];
		}
	}

	// 顯示 next 表格在 dataGridView4（使用 AllpairsTable）
	dataGridView4->RowCount = n;
	dataGridView4->ColumnCount = n;
	dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
	AllpairsTable(dataGridView4, next);

	// 顯示 Floyd-Warshall 結果到 textBox5（可選）
	if (checkBox3->Checked) {
		textBox5->AppendText("=== Floyd-Warshall Results ===\r\n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (shortestDistances[i][j] == INT_MAX)
					textBox5->AppendText("INF\t");
				else
					textBox5->AppendText(shortestDistances[i][j] + "\t");
			}
			textBox5->AppendText("\r\n");
		}
		textBox5->AppendText("\r\n");

		textBox5->AppendText("=== Floyd-Warshall All Pairs Table (next[][]) ===\r\n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (next[i][j] == -1)
					textBox5->AppendText("∞\t");
				else
					textBox5->AppendText(next[i][j] + "\t");
			}
			textBox5->AppendText("\r\n");
		}
		textBox5->AppendText("\r\n");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectTab(5);
	int n = int::Parse(textBox1->Text);
	if (G == NULL)
	{
		MessageBox::Show("Please generate graph first!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	std::vector<std::vector<int>> transitiveClosure(n, std::vector<int>(n, 0));
	TransitiveClosure(G, transitiveClosure);
	dataGridView5->RowCount = n;
	dataGridView5->ColumnCount = n;
	dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
	for (int i = 0; i < n; i++) {
		dataGridView5->Rows[i]->HeaderCell->Value = i.ToString();
		dataGridView5->Columns[i]->HeaderCell->Value = i.ToString();
		for (int j = 0; j < n; j++) {
			dataGridView5->Rows[i]->Cells[j]->Value = transitiveClosure[i][j];
		}
	}
	if (checkBox3->Checked) {
		textBox5->AppendText("=== Transitive Closure ===\r\n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				textBox5->AppendText(transitiveClosure[i][j] + "\t");
			}
			textBox5->AppendText("\r\n");
		}
		textBox5->AppendText("\r\n");
	}
}

};
}
