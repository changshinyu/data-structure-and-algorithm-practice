#pragma once
#include <Windows.h>
#define maxsize 21

int square[maxsize][maxsize];
int i, j, k, l, data, n, x, y;

void upper_left(int n);
void upper_right(int n);
void lower_left(int n);
void lower_right(int n);
void magic4x4(int n);
void grid(int n);
void PrintSquare(int n);
