#pragma once

#include <vector>
#include <raylib.h>

class Grid {
public:
	Grid();
	void Initialize();
	int grid[20][10];  // размер сетки
	void Draw();
	void Print();
	bool isCellOutsize(int row, int col);
private:
	int numRows;
	int numCols;
	int cellSize;  // размер в px 1 ячейки
	std::vector<Color> colors;
};