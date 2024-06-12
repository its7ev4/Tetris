#include <iostream>
#include "game.h"

int main() {
	Color darkBlue = { 50, 50, 100, 200 };  // цвет фона
	InitWindow(300, 600, "SEVA-Tetris");  // размеры окна и название шапки
	SetTargetFPS(60);  

	Game game = Game();
	
	while (!WindowShouldClose()) 
	{
		game.HandleInput();
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}
	CloseWindow();
}