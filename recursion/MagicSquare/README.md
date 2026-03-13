# Magic Square Generator (C++/CLI)

這個專案使用 C++/CLI 與 Windows Forms 製作魔術方陣生成器，可以生成奇數 n、偶數 4 的魔術方陣，並支援不同起始位置和方向。

## 專案內容

- **MagicSquare.h / MagicSquare.cpp** : 魔術方陣邏輯函式
- **MainForm.h** : GUI 視窗介面與控制項
- **Main.cpp** : 程式入口，執行 GUI

## 使用方式

1. 使用 Visual Studio 開啟專案
2. 編譯並執行
3. 在 GUI 上輸入 n，選擇起始位置與方向，按下生成按鈕
4. 結果會顯示在 ListBox 與 DataGridView

## 功能特色

- 支援奇數 n 的魔術方陣
- 支援 n = 4 的魔術方陣
- 可選起始方向 (Upper Left / Upper Right / Lower Left / Lower Right)
- 可在 DataGridView 顯示魔術方陣矩陣
