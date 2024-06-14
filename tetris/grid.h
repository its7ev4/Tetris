#pragma once

#include <vector>
#include <raylib.h>

class Grid {
public:
	Grid();
	void Initialize();
	void Draw();
	void Print();
	bool isCellOutsize(int row, int col);
	bool IsCellEmpty(int row, int column);
	int grid[20][10];  // размер сетки
private:
	int numRows;
	int numCols;
	int cellSize;  // размер в px 1 ячейки
	std::vector<Color> colors;
};