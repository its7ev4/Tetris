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
	int CLearFullRows();
	int grid[20][10];  // размер сетки
private:
	void ClearRow(int row);
	bool IsRowFull(int row);
	void MoveRowDown(int row, int numRows);
	int numRows;
	int numCols;
	int cellSize;  // размер в px 1 ячейки
	std::vector<Color> colors;
};