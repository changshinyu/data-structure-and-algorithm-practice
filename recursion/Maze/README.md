# Maze Project

## Description
This project is a maze generator and pathfinding program built using C++/CLI and Windows Forms.  
The program provides the following features:

- Random maze generation
- Display maze in ListBox and DataGridView
- Save and load maze files
- Automatic pathfinding
- Different colors for walls, path, start, and end points

## How to Use
1. Open Visual Studio.
2. Load the `MazeProject.sln` solution.
3. Build and run the program.
4. Enter the maze width, height, and cell size.
5. Click `Generate Maze` to create a maze.
6. Click `Find Path` to start pathfinding.
7. You can save the maze to a `.txt` file or load a `.txt` file.

## Project Structure
- `MyForm.h` : Main GUI and maze logic
- `Program.cpp` : Program entry point
- `MazeHelpers.h` : Maze structures and direction settings
