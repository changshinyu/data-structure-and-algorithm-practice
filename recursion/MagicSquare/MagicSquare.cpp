#include "MagicSquare.h"
#include <string>
using namespace System;

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
