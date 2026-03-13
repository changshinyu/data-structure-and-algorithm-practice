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
    int p(String^ op) { /*...*/ return 0; }
    int q(String^ op) { /*...*/ return 0; }

    void push(int flag, String^ data) { /*...*/ }
    String^ pop(int flag) { /*...*/ }

    // 中序 → 後序
    String^ Infix2Postfix(String^ infix) { /*...*/ return ""; }

    // 中序 → 前序
    String^ Infix2Prefix(String^ infix) { /*...*/ return ""; }

    // 前序 → 中序
    String^ Prefix2Infix(String^ prefix) { /*...*/ return ""; }

    // 前序 → 後序
    String^ Prefix2Postfix(String^ prefix) { /*...*/ return ""; }

    // 後序 → 中序
    String^ Postfix2Infix(String^ postfix) { /*...*/ return ""; }

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
