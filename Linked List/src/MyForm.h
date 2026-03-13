#pragma once

#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct dnode
{
	int data;
	struct dnode* prev;
	struct dnode* next;
};

struct dnode* NewDNode(int element)
{
	struct dnode* p;
	p = (struct dnode*)malloc(sizeof(struct dnode));
	p->data = element;
	p->prev = NULL;
	p->next = NULL;
	return p;
}

struct qnode
{
	int data;
	struct qnode* next;
};




struct qnode* front, * rear;

struct qnode* NewQNode(int element)
{
	struct qnode* p;
	p = (struct qnode*)malloc(sizeof(struct qnode));
	p->data = element;
	p->next = NULL;
	return p;
}

struct node* first, * last;
struct node* top;

namespace Project5 {

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
			first = NewNode(0);
			first->next = first;
			last = first;
			top = NewNode(0);
			top->next = top;
			initDoublyList();
			initQueue();
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
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::ListBox^ listBox3;



	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;









	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;










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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl2);
			this->splitContainer1->Size = System::Drawing::Size(1592, 1045);
			this->splitContainer1->SplitterDistance = 442;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1592, 442);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1576, 395);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"singly linked list";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1223, 302);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(253, 54);
			this->button14->TabIndex = 16;
			this->button14->Text = L"reverse singly circular list";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(919, 304);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(242, 52);
			this->button8->TabIndex = 15;
			this->button8->Text = L"clear list";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(625, 304);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(249, 53);
			this->button7->TabIndex = 14;
			this->button7->Text = L"insert n random numbers";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(311, 307);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"range :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(73, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"n :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(404, 304);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 36);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"1000";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 304);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 36);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"10";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1211, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(206, 59);
			this->button6->TabIndex = 9;
			this->button6->Text = L"search delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(919, 177);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(243, 61);
			this->button5->TabIndex = 8;
			this->button5->Text = L"search and insert before";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(625, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 62);
			this->button4->TabIndex = 7;
			this->button4->Text = L"search and insert after";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"target :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 193);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 36);
			this->textBox2->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(330, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(248, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"search target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(625, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(249, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"insert last";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"element :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 36);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(330, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"insert first";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1576, 395);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"linked stack";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 24);
			this->label6->TabIndex = 4;
			this->label6->Text = L"pop result :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(157, 97);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 36);
			this->textBox5->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"element :";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(666, 84);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(244, 77);
			this->button10->TabIndex = 1;
			this->button10->Text = L"pop";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(361, 84);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(244, 77);
			this->button9->TabIndex = 0;
			this->button9->Text = L"push";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Location = System::Drawing::Point(8, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1576, 395);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"linked queue";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(639, 122);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(234, 66);
			this->button13->TabIndex = 3;
			this->button13->Text = L"delete queue";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(138, 138);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(161, 36);
			this->textBox7->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 24);
			this->label8->TabIndex = 1;
			this->label8->Text = L"element :";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(330, 122);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(250, 67);
			this->button12->TabIndex = 0;
			this->button12->Text = L"linked queue";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button15);
			this->tabPage7->Controls->Add(this->label10);
			this->tabPage7->Controls->Add(this->label9);
			this->tabPage7->Controls->Add(this->textBox6);
			this->tabPage7->Controls->Add(this->label7);
			this->tabPage7->Controls->Add(this->button11);
			this->tabPage7->Location = System::Drawing::Point(8, 39);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1576, 395);
			this->tabPage7->TabIndex = 3;
			this->tabPage7->Text = L"doubly linked list";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(715, 103);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(262, 74);
			this->button15->TabIndex = 9;
			this->button15->Text = L"reverse doubly list";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 24);
			this->label10->TabIndex = 8;
			this->label10->Text = L"element :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 137);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 24);
			this->label9->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(130, 125);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 36);
			this->textBox6->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 1;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(349, 103);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(274, 75);
			this->button11->TabIndex = 0;
			this->button11->Text = L"doubly linked list";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1592, 599);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl2_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Location = System::Drawing::Point(8, 39);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1576, 552);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"linked list output";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1570, 546);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Location = System::Drawing::Point(8, 39);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1576, 552);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"linked stack output";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 24;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(1570, 546);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->listBox4);
			this->tabPage6->Location = System::Drawing::Point(8, 39);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1576, 552);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"linked queue output";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// listBox4
			// 
			this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 24;
			this->listBox4->Location = System::Drawing::Point(3, 3);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(1570, 546);
			this->listBox4->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->listBox3);
			this->tabPage8->Location = System::Drawing::Point(8, 39);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1576, 552);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"doubly linked output";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 24;
			this->listBox3->Location = System::Drawing::Point(3, 3);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(1570, 546);
			this->listBox3->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1592, 1045);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

struct node* NewNode(int element)
{
	struct node* p;
	p = (struct node*) malloc (sizeof(struct node));
	p->data = element;
	p->next = NULL;
	return p;
}

void insertFirst(int element)
{
	struct node* p = NewNode(element);
	p->next = first->next;
	first->next = p;
	if (last == first) last = p;
}

void insertLast(int element)
{
	struct node* p = NewNode(element);
	p->next = last->next;
	last->next = p;
	last = p;
}

void printList(struct node* first)
{
	struct node* p;
	String^ list = "";
	for (p = first->next;p != first;p = p->next)
		list += p->data + "==>";
	listBox1->Items->Add(list + "<");
}

struct node* searchTarget(int target)
{
	struct node* p;
	for (p = first->next;(p != first && p->data != target); p = p->next);
	if (p == first) return NULL;
	return p;
}

struct node* searchTargetBefore(int target)
{
	struct node* p, * q;
	for (q = first, p = first->next;(p != first && p->data != target); q = p, p = p->next);
	if (p == first) return NULL;
	return q;
}

void insertAfter(int element, struct node* x)
{
	struct node* p = NewNode(element);
	p->next = x->next;
	x->next = p;
}

void deleteAfter(struct node* x)
{
	struct node* p = x->next;
	x->next = p->next;
	if (p == last) last = x;
	free(p);
}

void clearList(struct node* first)
{
	struct node* p;
	for (p = first->next;p != first;p = first->next)
	{
		first->next = p->next;
		free(p);
	}
	last = first;
}


void push(int element)
{
	struct node* p = NewNode(element);
	p->next = top->next;
	top->next = p;
}

void printStack(struct node* first)
{
	struct node* p;
	String^ list = "";
	for (p = first->next;p != first;p = p->next)
		list += p->data + "==>";
	listBox2->Items->Add(list + "<");
}

int pop()
{
	struct node* p = top->next;
	if (p == top) return -1;
	int result = p->data;
	top->next = p->next;
	free(p);
	return result;
}

private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	tabControl2->SelectedIndex = tabControl1->SelectedIndex;
}
private: System::Void tabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	tabControl1->SelectedIndex = tabControl2->SelectedIndex;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int element = int ::Parse(textBox1->Text);
	insertFirst(element);
	printList(first);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int element = int ::Parse(textBox1->Text);
	insertLast(element);
	printList(first);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = int::Parse(textBox2->Text);
	struct node* x;
	x = searchTarget(target);
	if (x) listBox1->Items->Add(x->data + "has been found.");
	else listBox1->Items->Add(target + "not been found.");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = int::Parse(textBox2->Text);
	int element = int::Parse(textBox1->Text);
	struct node* x;
	x = searchTarget(target);
	if (x) insertAfter(element, x);
	else listBox1->Items->Add(target + "not been found.");
	printList(first);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = int::Parse(textBox2->Text);
	int element = int::Parse(textBox1->Text);
	struct node* x;
	x = searchTargetBefore(target);
	if (x) insertAfter(element, x);
	else listBox1->Items->Add(target + "not been found.");
	printList(first);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = int::Parse(textBox2->Text);
	struct node* x;
	x = searchTargetBefore(target);
	if (x) deleteAfter(x);
	else listBox1->Items->Add(target + "not been found.");
	printList(first);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = int::Parse(textBox3->Text);
	int range = int::Parse(textBox4->Text);
	int* data = new int[n];
	String^ line = "";
	for (int i = 0;i < n;i++)
	{
		data[i] = rand() % range + 1;
		line += data[i] + "_";
		insertLast(data[i]);
	}
	listBox1->Items->Add(n + " random numbers:" + line);
	printList(first);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	clearList(first);
	printList(first);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int element = int::Parse(textBox5->Text);
	push(element);
	printStack(top);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int result = pop();
	if (result != -1) printStack(top);
	else listBox2->Items->Add("Stack is empty.");
	label6->Text = "pop result = " + result;
}



	 //doubly linked list
	// --------------------------------------------------------  

	
	   struct dnode* dfirst, * dlast;

	  
	   

	   
	   void initDoublyList()
	   {
		   dfirst = NewDNode(0); 
		   dfirst->next = dfirst;
		   dfirst->prev = dfirst;
		   dlast = dfirst;
	   }

	  
	   void insertFirstD(int element)
	   {
		   struct dnode* p = NewDNode(element);
		   p->next = dfirst->next;
		   p->prev = dfirst;
		   dfirst->next->prev = p;
		   dfirst->next = p;
		   if (dlast == dfirst) dlast = p;
	   }

	   
	   void insertLastD(int element)
	   {
		   struct dnode* p = NewDNode(element);
		   p->next = dfirst;      
		   p->prev = dlast;         
		   dlast->next = p;       
		   dfirst->prev = p;      
		   dlast = p;
	   }

	  
	   void printListD(struct dnode* dfirst)
	   {
		   struct dnode* p;
		   String^ list = "";
		   for (p = dfirst->next; p != dfirst; p = p->next)
			   list += p->data + "<==>";
		   listBox3->Items->Add(list + "<");
	   }

	   
	   void printListDReverse(struct dnode* dfirst)
	   {
		   struct dnode* p;
		   String^ list = "";
		   for (p = dlast; p != dfirst; p = p->prev)
			   list += p->data + "<==>";
		   listBox3->Items->Add("Reverse: " + list + "<");
	   }

	  
	   struct dnode* searchTargetD(int target)
	   {
		   struct dnode* p;
		   for (p = dfirst->next; (p != dfirst && p->data != target); p = p->next);
		   if (p == dfirst) return NULL;
		   return p;
	   }

	  
	   struct dnode* searchTargetBeforeD(int target)
	   {
		   struct dnode* p = searchTargetD(target);
		   if (p == NULL) return NULL;
		   return p->prev;
	   }

	 
	   void insertAfterD(int element, struct dnode* x)
	   {
		   struct dnode* p = NewDNode(element);
		   p->next = x->next;
		   p->prev = x;
		   x->next->prev = p;
		   x->next = p;
		   if (x == dlast) dlast = p;
	   }

	  
	   void deleteAfterD(struct dnode* x)
	   {
		   struct dnode* p = x->next;
		   if (p == dfirst) return; // 不能删除头节点
		   x->next = p->next;
		   p->next->prev = x;
		   if (p == dlast) dlast = x;
		   free(p);
	   }

	  
	   void deleteNodeD(struct dnode* x)
	   {
		   if (x == dfirst) return; // 不能删除头节点
		   x->prev->next = x->next;
		   x->next->prev = x->prev;
		   if (x == dlast) dlast = x->prev;
		   free(x);
	   }

	 
	   void clearListD(struct dnode* dfirst)
	   {
		   struct dnode* p;
		   for (p = dfirst->next; p != dfirst; p = dfirst->next)
		   {
			   dfirst->next = p->next;
			   free(p);
		   }
		   dfirst->next = dfirst;
		   dfirst->prev = dfirst;
		   dlast = dfirst;
	   }

	 
	   void insertRandomD(int n, int range)
	   {
		   String^ line = "";
		   for (int i = 0; i < n; i++)
		   {
			   int value = rand() % range + 1;
			   line += value + "_";
			   insertLastD(value);
		   }
		   listBox3->Items->Add(n + " random numbers: " + line);
		   printListD(dfirst);
	   }
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int element = int::Parse(textBox6->Text);
	insertLastD(element);
	printListD(dfirst);
}




// link queue
//--------------------------------------------------
	   void initQueue()
	   {
		  
		   front = NewQNode(0);
		   front->next = NULL;
		   rear = front;  
	   }


	   void enqueue(int element)
	   {
		   struct qnode* p = NewQNode(element);
		   rear->next = p;  
		   rear = p;        
	   }

	 
	   int dequeue()
	   {
		   if (front == rear) return -1;  

		   struct qnode* p = front->next;
		   int result = p->data;

		   front->next = p->next;
		   if (p == rear) rear = front;
		   free(p);
		   return result;
	   }

	 
	   bool isQueueEmpty()
	   {
		   return front == rear;
	   }

	  
	   void printQueue()
	   {
		   struct qnode* p;
		   String^ list = "";

		   for (p = front->next; p != NULL; p = p->next)
			   list += p->data + "-->";

		   listBox4->Items->Add(list + "NULL");
	   }

	  
	   void clearQueue()
	   {
		   struct qnode* p;
		   while (front->next != NULL)
		   {
			   p = front->next;
			   front->next = p->next;
			   free(p);
		   }
		   rear = front;
	   }


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int element = int::Parse(textBox7->Text);
	enqueue(element);
	printQueue();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	int result = dequeue();
	if (result != -1) {
		listBox4->Items->Add("Dequeued: " + result);
		printQueue();
	}
	else {
		listBox4->Items->Add("Queue is empty.");
	}
}



//reverse
//-------------------------------------------------------

// Add these functions to reverse the singly circular list
	   void reverseSinglyList(struct node* header)
	   {
		   if (header->next == header || header->next->next == header) {
			   // Empty list or list with only one element - nothing to reverse
			   return;
		   }

		   struct node* prev = header;
		   struct node* current = header->next;
		   struct node* next = NULL;
		   struct node* firstNode = current;  // Save the first node to update last pointer later

		   // Reverse the pointers of all nodes
		   while (current != header) {
			   next = current->next;
			   current->next = prev;
			   prev = current;
			   current = next;
		   }

		   // Update header and last pointers
		   header->next = prev;
		   firstNode->next = header;
		   last = firstNode;
	   }

	   // Add this function to reverse doubly linked list
	   void reverseDoublyList(struct dnode* header)
	   {
		   if (header->next == header) {
			   // Empty list - nothing to reverse
			   return;
		   }

		   struct dnode* current = header;
		   struct dnode* temp = NULL;

		   // Swap next and prev pointers for all nodes including header
		   do {
			   temp = current->next;
			   current->next = current->prev;
			   current->prev = temp;
			   current = temp;
		   } while (current != header);

		   // Update dlast pointer to the new last node (which was the first node before reversal)
		   dlast = header->next;
	   }


private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	reverseSinglyList(first);
	printList(first);
	listBox1->Items->Add("Singly circular list reversed");
}
private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	reverseDoublyList(dfirst);
	printListD(dfirst);
	printListDReverse(dfirst);
	listBox3->Items->Add("Doubly linked list reversed");
}
};
}
