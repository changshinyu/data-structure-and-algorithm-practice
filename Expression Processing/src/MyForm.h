#pragma once
#include <string>
#include <stack>
# define max_size 100
using namespace std;
namespace Project4 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	protected:

	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(55, 65);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1381, 821);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1365, 774);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"infix ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(431, 3);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(497, 27);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Only binary operators in {+,-,*,/,&,|} are considered.";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 404);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1348, 364);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(299, 66);
			this->button2->TabIndex = 5;
			this->button2->Text = L"infix to prefix";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(449, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 67);
			this->button1->TabIndex = 4;
			this->button1->Text = L"infix to postfix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(105, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 36);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(105, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 36);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"n =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please input an infix :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1365, 774);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"postfix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(424, 3);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(497, 27);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Only binary operators in {+,-,*,/,&,|} are considered.";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(6, 404);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1348, 364);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(429, 207);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 61);
			this->button4->TabIndex = 6;
			this->button4->Text = L"postfix to prefix";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(429, 106);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(253, 62);
			this->button3->TabIndex = 5;
			this->button3->Text = L"postfix to infix";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(240, 36);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(241, 36);
			this->textBox3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"n =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Please input an infix :";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->richTextBox3);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(8, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1365, 774);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"prefix";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(403, 15);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(497, 27);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Only binary operators in {+,-,*,/,&,|} are considered.";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(6, 404);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(1348, 364);
			this->richTextBox3->TabIndex = 8;
			this->richTextBox3->Text = L"";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(437, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 53);
			this->button6->TabIndex = 7;
			this->button6->Text = L"prefix to postfix";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(437, 99);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(249, 58);
			this->button5->TabIndex = 6;
			this->button5->Text = L"prefix to infix";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(93, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(241, 36);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(94, 113);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(241, 36);
			this->textBox5->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 24);
			this->label6->TabIndex = 3;
			this->label6->Text = L"n =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(206, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Please input an infix :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1490, 950);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static cli::array<System::String^>^ Stack = gcnew cli::array<System::String^>(100);
		static cli::array<System::String^>^ Stack_another = gcnew cli::array<System::String^>(100);
		static int top = -1;
		static int top_another = -1;
		String^ printInfix(String^ infix)
		{
			return infix;
		}

		int q(String^ op)
		{
			if ((op == "+") || (op == "-"))
				return 3;
			if ((op == "*") || (op == "/"))
				return 4;
			if ((op == "^") || (op == "&") || (op == "|"))
				return 5;
			if ((op == "("))
				return 1;
			if ((op == "#"))
				return 0;
			return -99;
		}
		int p(String^ op)
		{
			if ((op == "+") || (op == "-"))
				return 3;
			if ((op == "*") || (op == "/"))
				return 4;
			if ((op == "^") || (op == "&") || (op == "|"))
				return 5;
			if ((op == "("))
				return 1;
			if ((op == "#"))
				return 0;
			return -99;
		}

		void push(int flag, String^ data)
		{
			switch (flag)
			{
			case (1):
				if (top == max_size - 1)
					richTextBox1->Text += "Full\n";
				else
					Stack[++top] = data;
				break;
			case (2):

				if (top_another == max_size - 1)
					richTextBox1->Text += "Full\n";
				else
					Stack_another[++top_another] = data;
				break;
			}
		}

		String^ pop(int flag)
		{
			switch (flag)
			{
			case (1):
				if (top == -1) {
					richTextBox1->Text += "Empty\n";
					return "";
				}
				else
					return Stack[top--];
				break;
			case (2):
				if (top_another == -1) {
					richTextBox1->Text += "Empty\n";
					return "";
				}
				else
					return Stack_another[top_another--];
				break;
			}
			return "";
		}

		bool IsOperand(String^ s)
		{
			MessageBox::Show("s=" + s);
			if ((s != "+") && (s != "-") && (s != "*") && (s != "/") && (s != "(") && (s != ")") && (s != "&") && (s != "|") && (s != "^") && (s != "#"))
				return true;
			
			MessageBox::Show("is no an operand");
			return false;
		}

		String^ Infix2Postfix(String^ infix)
		{
			String^ postfix = "";
			String^ s, ^ x, ^ y;
			// Reset stacks before starting
			top = -1;
			top_another = -1;

			push(2, "#");
			for (int i = 0; i < infix->Length; i++)
			{
				s = infix[i].ToString(); // Remove leading space

				if (IsOperand(s)) // If it IS an operand
					postfix += s;
				else if (s == ")")
				{
					while ((x = pop(2)) != "(")
						postfix += x;
				}
				else
				{
					while (p(s) <= q(y = pop(2)))
						postfix += y;
					push(2, y);
					push(2, s);
				}
			}

			// Empty the stack
			s = pop(2);
			while (s != "#")
			{
				postfix += s;
				s = pop(2);
			}
			return postfix;
		}

		String^ prefixtopostfix(String^ prefix)
		{
			int n = prefix->Length;
			// Reset stacks
			top = -1;
			top_another = -1;
    
			String^ s, ^ y, ^ x;
			push(1, "#");
    
			for (int i = 0; i < n; i++) // Corrected boundary
			{
			   s = prefix[i].ToString();
			   if (IsOperand(s))
			   {
			        while (top > 0 && IsOperand(Stack[top]))
			        {
						y = pop(1);
						x = pop(1);
						s = y + s + x;
					}
					push(1, s);
				}
				else 
					push(1, s);
			}
    
			s = pop(1);
			// Only pop again if there's something to pop
			if (top >= 0)
			   x = pop(1);
    
			return s;
		}

		void get_fix(String^ x, int flag)
		{
			String^ a = pop(2);
			a = (flag == 1) ? x + pop(2) + a : pop(2) + a + x;
			push(2, a);
		}

		String^ InfixPrefix(String^ infix, int flag)
		{
			int n = infix->Length;
			int i;
			String^ s, ^ x;
			push(1, "#");
			for (i = 0; i < n; i++)
			{
				s = infix[i].ToString();
				if (IsOperand(s))
					push(2, s);
				else if (s == ")")
					while ((x = pop(1)) != "(")
						get_fix(x, flag);
				else
				{
					while (p(s) <= q(Stack[top]))
					{
						x = pop(1);
						get_fix(x, flag);
					}
					push(1, s);
				}
			}
			while (Stack[top] != "#")
			{
				x = pop(1);
				get_fix(x, flag);
			}
			pop(1);
			return pop(2);
		}

		String^ prefixtoinfix(String^ prefix)
		{
			int n = prefix->Length;
			String^ ch, ^ op1, ^ op2, ^ expr;

			// 初始化 stack (flag = 1)
			top = -1;

			for (int i = n - 1; i >= 0; i--)
			{
				ch = prefix[i].ToString();

				if (Char::IsLetterOrDigit(ch[0]))  // 運算元
				{
					push(1, ch);
				}
				else  // 運算子
				{
					op1 = pop(1);
					op2 = pop(1);
					expr = "(" + op1 + ch + op2 + ")";
					push(1, expr);
				}
			}

			return pop(1);
		}

		String^ postfixtoinfix(String^ postfix)
		{
			int n = postfix->Length;
			String^ s, ^ s1, ^ s2, ^ x, ^ y;
			for (int i = 1;i < n;i++)
			{
				s = postfix[i].ToString();
				if (IsOperand(s))
				{
					push(2, s);
					push(1, "#");
				}
				else
				{
					s1 = pop(1);
					s2 = pop(1);
					x = pop(2);
					y = pop(2);
					if (p(s) > p(s1) && x->Length > 1) x = "(" + x + ")";
					if (p(s) > p(s2) && y->Length > 1) y = "(" + y + ")";
					push(2, y + s + x);
					push(1, s);
				}
			}
			while (top != -1) s = pop(1);
			return pop(2);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ infix = textBox1->Text;
		String^ postfix;
		int n;
		textBox2->Text = infix;
		richTextBox1->Text = infix;
		for (int i = 0;i < infix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
		{
			MessageBox::Show("infix[" + i + "]=" + infix[i]);
		}
		postfix = Infix2Postfix(infix);
		richTextBox1->Text = infix + "=====>" + postfix;
	}
	

	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ infix = textBox1->Text;
	String^ prefix;
	int n;
	textBox2->Text = infix;
	richTextBox1->Text = infix;
	for (int i = 0;i < infix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
	{
		MessageBox::Show("infix[" + i + "]=" + infix[i]);
	}
	prefix = InfixPrefix(infix, 1);
	richTextBox1->Text = infix + "=====>" + prefix;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ postfix = textBox3->Text;
	String^ infix;
	int n;
	textBox4->Text = postfix;
	richTextBox2->Text = postfix;
	for (int i = 0;i < postfix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
	{
		MessageBox::Show("postfix[" + i + "]=" + postfix[i]);
	}
	infix = postfixtoinfix(postfix);
	richTextBox2->Text = postfix + "=====>" + infix;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ postfix = textBox3->Text;
	String^ prefix;
	int n;
	textBox4->Text = postfix;
	richTextBox2->Text = postfix;
	for (int i = 0;i < postfix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
	{
		MessageBox::Show("postfix[" + i + "]=" + postfix[i]);
	}
	prefix = postfixtoinfix(postfix);
	richTextBox2->Text = postfix + "=====>" + prefix;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ prefix = textBox5->Text;
	String^ infix;
	int n;
	textBox6->Text = prefix;
	richTextBox3->Text = prefix;
	for (int i = 0;i < prefix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
	{
		MessageBox::Show("prefix[" + i + "]=" + prefix[i]);
	}
	infix = prefixtoinfix(prefix);
	richTextBox3->Text = prefix + "=====>" + infix;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ prefix = textBox5->Text;
	String^ postfix;
	int n;
	textBox6->Text = prefix;
	richTextBox3->Text = prefix;
	for (int i = 0;i < prefix->Length;i++) //利用messagebox檢視輸入字串中的各種字元
	{
		MessageBox::Show("prefix[" + i + "]=" + prefix[i]);
	}
	postfix = prefixtopostfix(prefix);
	richTextBox3->Text = prefix + "=====>" + postfix;
}
};
}
