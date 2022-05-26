#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void map(int x, int map_array[][23]);
void gotoxy(int x, int y);
void moving(int difficulty, int map[][23], int* x, int* y);
void item_location(int world_item[][21], int difficulty);
void item_get(int x);
