#pragma once

// класс, отвечающий за координаты ячейки
class Position {
public:
	Position(int row, int column);
	int row;
	int column;
};