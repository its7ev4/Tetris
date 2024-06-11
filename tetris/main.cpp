#include <iostream>
#include <raylib.h>
#include "grid.h"

int main() {
	Color darkBlue = { 50, 50, 100, 200 };  // цвет фона
	InitWindow(300, 600, "SEVA-Tetris");  // размеры окна и название шапки
	SetTargetFPS(60);  

	Grid grid = Grid();
	grid.Print();

	while (!WindowShouldClose()) 
	{
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.Draw();
		EndDrawing();
	}
	CloseWindow();

}