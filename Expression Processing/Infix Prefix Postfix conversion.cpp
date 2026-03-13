#include <stack>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

namespace ExpressionConverter {

public ref class MyForm : public Form {
private:
    TextBox^ textBoxInfix;
    TextBox^ textBoxResult;
    RichTextBox^ richTextBox;
    Button^ btnInfix2Postfix;
    Button^ btnInfix2Prefix;
    // ... 可以加其他控件

    // Stack for conversion
    cli::array<String^>^ Stack = gcnew cli::array<String^>(100);
    cli::array<String^>^ Stack2 = gcnew cli::array<String^>(100);
    int top = -1, top2 = -1;

public:
    MyForm(void) {
        InitializeComponent();
    }

    // ... 初始化控件函式

    bool IsOperand(String^ s) {
        // 判斷是否為操作數
        return !(s == "+" || s == "-" || s == "*" || s == "/" || s == "(" || s == ")" || s == "^" || s == "&" || s == "|" || s == "#");
    }

    // 優先權函式
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

    // 中序 → 後序
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

    // 中序 → 前序
    String^ Infix2Prefix(String^ infix) { /*...*/ return ""; }

    // 前序 → 中序
    String^ Prefix2Infix(String^ prefix)
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

    // 前序 → 後序
    String^ Prefix2Postfix(String^ prefix)
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

    // 後序 → 中序
    String^ Postfix2Infix(String^ postfix)
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

private:
    void buttonInfix2Postfix_Click(Object^ sender, EventArgs^ e) {
        String^ infix = textBoxInfix->Text;
        String^ postfix = Infix2Postfix(infix);
        richTextBox->Text = infix + " => " + postfix;
    }

    void buttonInfix2Prefix_Click(Object^ sender, EventArgs^ e) {
        String^ infix = textBoxInfix->Text;
        String^ prefix = Infix2Prefix(infix);
        richTextBox->Text = infix + " => " + prefix;
    }
};

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ExpressionConverter::MyForm form;
    Application::Run(%form);
    return 0;
}
