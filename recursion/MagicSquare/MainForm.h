#include "MagicSquare.h"

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
        else if (n % 2 == 0 && n != 4) {
            listBox1->Items->Add("輸入的數值為偶數，無法生成魔術方陣。");
            return;
        }

        // Reset the square
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                square[i][j] = 0;
            }
        }

        if (n == 4) {
            magic4x4(n);
        }
        else {
            // Set starting position based on radio button selection
            int s = 0;
            if (radioButton1->Checked) s = 0;
            else if (radioButton2->Checked) s = 1;
            else if (radioButton3->Checked) s = 2;
            else if (radioButton4->Checked) s = 3;

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
            if (radioButton5->Checked) upper_left(n);
            else if (radioButton6->Checked) upper_right(n);
            else if (radioButton7->Checked) lower_left(n);
            else if (radioButton8->Checked) lower_right(n);
        }

        listBox1->Items->Add(n + "*" + n + "的魔術方陣");
        PrintSquare(n);
        grid(n);
    }
    catch (FormatException^) {
        listBox1->Items->Add("請輸入有效的數字。");
    }
}
