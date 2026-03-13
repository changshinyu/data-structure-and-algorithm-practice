# MazeProject

## 專案簡介
這是一個使用 C++/CLI 和 Windows Forms 製作的迷宮生成與尋路程式。  
程式功能包括：
- 隨機生成迷宮
- 顯示迷宮於 ListBox 與 DataGridView
- 儲存與讀取迷宮
- 自動尋路並顯示路徑
- 使用不同顏色區分牆、路徑、起點與終點

## 使用方法
1. 開啟 Visual Studio。
2. 載入 `MazeProject.sln` 專案。
3. 編譯並執行。
4. 輸入迷宮長、寬及格子大小。
5. 點擊 `Generate Maze` 生成迷宮。
6. 點擊 `Find Path` 開始尋路。
7. 可以儲存迷宮至 `.txt` 或載入 `.txt` 檔。

## 專案結構
- `MyForm.h`：主要 GUI 與迷宮邏輯
- `Program.cpp`：程式進入點
- `MazeHelpers.h`：迷宮相關結構與方向設定
