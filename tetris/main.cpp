#include <iostream>
#include "game.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval) {
	double currentTime = GetTime();
	if (currentTime - lastUpdateTime >=interval) {
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}

int main() {
	Color darkBlue = { 50, 50, 100, 200 };  // цвет фона
	InitWindow(300, 600, "SEVA-Tetris");  // размеры окна и название шапки
	SetTargetFPS(60);  

	Game game = Game();
	
	while (WindowShouldClose() == false) 
	{
		game.HandleInput();
		if (EventTriggered(0.02)) {
			game.MoveBlockDown();
		}
		
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}
	CloseWindow();
}