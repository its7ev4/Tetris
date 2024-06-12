#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
public:
	Block();
	void Draw();
	void Move(int rows, int columns);
	std::vector<Position> GetCellPositions();
	int id;
	std::map<int, std::vector<Position>> cells;

private:
	int cellSize;  // размер ячейки
	int rotationState;  // состаяние ячейки
	std::vector<Color> colors;  // цвета фигур
	int rowOffset;
	int columnOffset;
};