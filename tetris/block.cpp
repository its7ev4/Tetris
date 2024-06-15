#include "block.h"

Block::Block() :
	cellSize(30),
	rotationState(0),
	colors(GetCellColors()),
	rowOffset(0),
	columnOffset(0)
{}

// метод, реализующий рисование фигур
// он вызывается от каждой фигуры
void Block::Draw(int offsetX, int offsetY) {
	// вектор координат, которому по умолчанию, 
	// присвоена мапа по ключу 
	std::vector<Position> tiles = GetCellPositions();
	for (Position item : tiles) {
		DrawRectangle(item.column * cellSize + offsetX, item.row * cellSize + offsetY
			, cellSize - 1, cellSize - 1, colors[id]);
	}
}

void Block::Move(int rows, int columns) {
	rowOffset += rows;
	columnOffset += columns;
}

std::vector<Position> Block::GetCellPositions(){
	std::vector<Position> tiles = cells[rotationState];
	std::vector<Position> movedTiles;
	for (Position item : tiles) {
		Position newPos = Position(item.row + rowOffset,
			item.column + columnOffset);
		movedTiles.push_back(newPos);
	}
	return movedTiles;
}

void Block::Rotate()
{
	rotationState++;
	if (rotationState == (int)cells.size()) {
		rotationState = 0;
	}
}

void Block::UndoRotation()
{
	rotationState--;
	if (rotationState == -1) {
		rotationState = cells.size() - 1;
	}
}
