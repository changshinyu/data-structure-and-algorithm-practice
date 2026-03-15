#pragma once
#include <cstdlib>
#include <string>
#include <queue>
#include <stack>
#include <time.h>

using namespace System::Drawing;
using namespace std;

struct BSTreeNode
{
	struct BSTreeNode* leftchild;
	int data;
	struct BSTreeNode* rightchild;
};

struct BSTreeNode* root;



struct BSTreeNode* newNode(int x)
{
	struct BSTreeNode* node = new struct BSTreeNode;
	node->data = x;
	node->leftchild = NULL;
	node->rightchild = NULL;
	return node;
}

struct BSTreeNode* insertBSTree(struct BSTreeNode* node, int x)
{
	if (node == NULL)
		return newNode(x);
	if (x < node->data)
		node->leftchild = insertBSTree(node->leftchild, x);
	else
		node->rightchild = insertBSTree(node->rightchild, x);
	return node;
}

namespace Project6 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Splitter^ splitter1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"insert into BST";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"10";
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1241, 837);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(14, 44);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Element:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->trackBar2);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(691, 890);
			this->panel1->TabIndex = 4;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(19, 718);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(238, 42);
			this->button13->TabIndex = 31;
			this->button13->Text = L"Add random #s to BST";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(18, 794);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(193, 50);
			this->button12->TabIndex = 30;
			this->button12->Text = L"draw BST";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(4, 643);
			this->trackBar2->Margin = System::Windows::Forms::Padding(5);
			this->trackBar2->Maximum = 10000;
			this->trackBar2->Minimum = 10;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(291, 90);
			this->trackBar2->TabIndex = 29;
			this->trackBar2->TickFrequency = 100;
			this->trackBar2->Value = 10;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(305, 643);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 36);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(44, 610);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(230, 28);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Range (10 to 10000)";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(4, 526);
			this->trackBar1->Margin = System::Windows::Forms::Padding(5);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 5;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(291, 90);
			this->trackBar1->TabIndex = 25;
			this->trackBar1->TickFrequency = 10;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(19, 493);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 28);
			this->label5->TabIndex = 24;
			this->label5->Text = L"# of integers (5 to 100)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(305, 525);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 36);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(245, 794);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(189, 49);
			this->button11->TabIndex = 14;
			this->button11->Text = L"clear BST";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(470, 407);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(197, 50);
			this->button10->TabIndex = 13;
			this->button10->Text = L"postfix";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(244, 407);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(191, 50);
			this->button9->TabIndex = 12;
			this->button9->Text = L"prefix";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(18, 407);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(184, 50);
			this->button8->TabIndex = 11;
			this->button8->Text = L"infix";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(216, 345);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 28);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nonrecursive trasversal";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(19, 269);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(183, 47);
			this->button7->TabIndex = 9;
			this->button7->Text = L"levelorder";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(428, 194);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"postfix_recursive";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(221, 194);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 50);
			this->button5->TabIndex = 7;
			this->button5->Text = L"prefix_recursive";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(19, 194);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"infix_recursive";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(413, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 52);
			this->button3->TabIndex = 5;
			this->button3->Text = L"search from BST";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(199, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 52);
			this->button2->TabIndex = 4;
			this->button2->Text = L"delete from BST";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(691, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1263, 890);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1247, 843);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"BST";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1208, 823);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"draw BST";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::AliceBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1202, 817);
			this->panel2->TabIndex = 0;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(691, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(10, 890);
			this->splitter1->TabIndex = 6;
			this->splitter1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1954, 890);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	System::String^ tree;

	void printBSTree(struct BSTreeNode* node)
	{
		if (node != NULL)
		{
			printBSTree(node->leftchild);
			tree += node->data.ToString() + "_";
			printBSTree(node->rightchild);
		}
	}

	BSTreeNode* findMin(BSTreeNode* node) 
	{
		while (node->leftchild != NULL)
			node = node->leftchild;
		return node;
	}

	BSTreeNode* deleteBSTree(BSTreeNode* node, int key, bool% isDeleted) {
		if (node == NULL)
			return NULL;

		if (key < node->data)
			node->leftchild = deleteBSTree(node->leftchild, key, isDeleted);
		else if (key > node->data)
			node->rightchild = deleteBSTree(node->rightchild, key, isDeleted);
		else {
			// 找到了要刪的節點
			isDeleted = true;

			if (node->leftchild == NULL) {
				BSTreeNode* temp = node->rightchild;
				delete node;
				return temp;
			}
			else if (node->rightchild == NULL) {
				BSTreeNode* temp = node->leftchild;
				delete node;
				return temp;
			}

			// 兩個子節點：找中序後繼
			BSTreeNode* temp = findMin(node->rightchild);
			node->data = temp->data;
			node->rightchild = deleteBSTree(node->rightchild, temp->data, isDeleted);
		}
		return node;
	}


	BSTreeNode* searchTarget(BSTreeNode* node, int key) {
		if (node == NULL || node->data == key)
			return node;
		if (key < node->data)
			return searchTarget(node->leftchild, key);
		else
			return searchTarget(node->rightchild, key);
	}


	//------------------------------------------------------------
	//recursive

	void inorderTraversal(BSTreeNode* node) {
		if (node != NULL) {
			inorderTraversal(node->leftchild);
			tree += node->data.ToString() + " ";
			inorderTraversal(node->rightchild);
		}
	}

	void preorderTraversal(BSTreeNode* node) {
		if (node != NULL) {
			tree += node->data.ToString() + " ";
			preorderTraversal(node->leftchild);
			preorderTraversal(node->rightchild);
		}
	}

	void postorderTraversal(BSTreeNode* node) {
		if (node != NULL) {
			postorderTraversal(node->leftchild);
			postorderTraversal(node->rightchild);
			tree += node->data.ToString() + " ";
		}
	}

	void levelorderTraversal(BSTreeNode* root) {
		if (root == NULL) return;

		std::queue<BSTreeNode*> q;
		q.push(root);

		while (!q.empty()) {
			BSTreeNode* current = q.front();
			q.pop();

			tree += current->data.ToString() + " ";

			if (current->leftchild != NULL)
				q.push(current->leftchild);
			if (current->rightchild != NULL)
				q.push(current->rightchild);
		}
	}



	//----------------------------------------------------------
	//nonrecursive

	void inorderIterative(BSTreeNode* root) {
		tree = "";
		std::stack<BSTreeNode*> s;
		BSTreeNode* current = root;

		while (current != NULL || !s.empty()) {
			while (current != NULL) {
				s.push(current);
				current = current->leftchild;
			}

			current = s.top();
			s.pop();
			tree += current->data.ToString() + " ";
			current = current->rightchild;
		}
	}

	void preorderIterative(BSTreeNode* root) {
		tree = "";
		if (root == NULL) return;

		std::stack<BSTreeNode*> s;
		s.push(root);

		while (!s.empty()) {
			BSTreeNode* node = s.top();
			s.pop();
			tree += node->data.ToString() + " ";

			if (node->rightchild != NULL)
				s.push(node->rightchild);
			if (node->leftchild != NULL)
				s.push(node->leftchild);
		}
	}

	void postorderIterative(BSTreeNode* root) {
		tree = "";
		if (root == NULL) return;

		std::stack<BSTreeNode*> s1, s2;
		s1.push(root);

		while (!s1.empty()) {
			BSTreeNode* node = s1.top();
			s1.pop();
			s2.push(node);

			if (node->leftchild != NULL)
				s1.push(node->leftchild);
			if (node->rightchild != NULL)
				s1.push(node->rightchild);
		}

		while (!s2.empty()) {
			tree += s2.top()->data.ToString() + " ";
			s2.pop();
		}
	}

	void clearBST(BSTreeNode* node) {
		if (node != NULL) {
			clearBST(node->leftchild);
			clearBST(node->rightchild);
			delete node;
		}
	}


	void drawBST(Graphics^ g, BSTreeNode* node, int x, int y, int offsetX, int level) {
		if (node == nullptr) return;

		int radius = 20;
		int nextY = y + 60;

		// 畫左子節點連線與遞迴
		if (node->leftchild != nullptr) {
			g->DrawLine(Pens::Black, x, y, x - offsetX, nextY);
			drawBST(g, node->leftchild, x - offsetX, nextY, offsetX / 2, level + 1);
		}

		// 畫右子節點連線與遞迴
		if (node->rightchild != nullptr) {
			g->DrawLine(Pens::Black, x, y, x + offsetX, nextY);
			drawBST(g, node->rightchild, x + offsetX, nextY, offsetX / 2, level + 1);
		}

		// 畫圓圈
		Rectangle nodeCircle(x - radius, y - radius, 2 * radius, 2 * radius);
		g->FillEllipse(Brushes::LightBlue, nodeCircle);
		g->DrawEllipse(Pens::Black, nodeCircle);

		// 字體設定
		System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);

		String^ value = node->data.ToString();

		// 計算文字寬度與高度
		SizeF textSize = g->MeasureString(value, font);
		PointF textPos(
			x - textSize.Width / 2,
			y - textSize.Height / 2
		);

		// 畫數字（剛好置中）
		g->DrawString(value, font, Brushes::Black, textPos);
	}



	//--------------------------------------------------------------

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int data = Int32::Parse(textBox1->Text);
		root = insertBSTree(root, data);
		tree = "";
		printBSTree(root);
		listBox1->Items->Add(tree);
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = System::Convert::ToInt32(textBox1->Text);
	bool deleted = false;
	root = deleteBSTree(root, target, deleted);
	tree = "";
	printBSTree(root);
	if (deleted)
		listBox1->Items->Add(target.ToString() + " has been deleted.");
	else
		listBox1->Items->Add(target.ToString() + " has not been found.");
	listBox1->Items->Add(tree);
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int target = System::Convert::ToInt32(textBox1->Text);
	BSTreeNode* x = searchTarget(root, target);
	if (x)
		listBox1->Items->Add(x->data.ToString() + " has been found.");
	else
		listBox1->Items->Add(target.ToString() + " has not been found.");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	tree = ""; 
	inorderTraversal(root);
	listBox1->Items->Add("Inorder: " + tree);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	tree = ""; 
	preorderTraversal(root);
	listBox1->Items->Add("Preorder: " + tree);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	tree = ""; 
	postorderTraversal(root);
	listBox1->Items->Add("Postorder: " + tree);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	tree = ""; // clear previous result
	levelorderTraversal(root);
	listBox1->Items->Add("Levelorder: " + tree);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	inorderIterative(root);
	listBox1->Items->Add("Inorder (non-rec): " + tree);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	preorderIterative(root);
	listBox1->Items->Add("Inorder (non-rec): " + tree);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	postorderIterative(root);
	listBox1->Items->Add("Inorder (non-rec): " + tree);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	clearBST(root);   
	root = NULL;   
	listBox1->Items->Add("BST has been cleared.");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Refresh(); 
	Graphics^ g = panel2->CreateGraphics();
	int startX = panel2->Width / 2;
	int startY = 40;
	drawBST(g, root, startX, startY, 100, 0);
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = trackBar1->Value.ToString();
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = trackBar2->Value.ToString();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	int maxRange = 0;

	for (int i = 0; i < count; ++i) {
		int value = rand() % maxRange + 1;
		root = insertBSTree(root, value);
		listBox1->Items->Add("Inserted: " + value.ToString());
	}
	listBox1->Items->Add(tree);
	panel2->Refresh();
	Graphics^ g = panel2->CreateGraphics();
	drawBST(g, root, panel2->Width / 2, 40, 100, 0);
}
};
}
