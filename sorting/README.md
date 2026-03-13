# Sorting and Searching Algorithms (C++/CLI)

## Description
This project implements several classic sorting and searching algorithms using C++.  
The program is designed for algorithm practice and performance testing, and can be integrated with a GUI or console program.

Implemented algorithms include multiple sorting methods and binary search.

## Features

- Multiple sorting algorithms
- Binary search implementation
- Utility functions for swap and sorted check
- Easy to extend with new algorithms
- Suitable for algorithm experiments and homework

## Project Structure

### Sorting
- `SelectionSort.cpp`
- `BubbleSort.cpp`
- `QuickSort.cpp`
- `InsertionSort.cpp`
- `SortingUtils.h`  
  Common helper functions such as element swap (`Swap`) and checking correctness (`isSorted`)

### Search
- `BinarySearch.cpp`  
  Binary search implementation

## How to Use

1. Open the project in Visual Studio.
2. Build the project.
3. Call the sorting or searching functions in your main program or GUI.
4. You can generate random arrays to test performance.
5. Use `isSorted()` to verify correctness after sorting.

## Example Usage

```cpp
int arr[] = {5, 3, 8, 1, 2};

QuickSort(arr, 0, 4);

if (isSorted(arr, 5))
{
    printf("Sorted correctly");
}

int pos = BinarySearch(arr, 5, 3);
