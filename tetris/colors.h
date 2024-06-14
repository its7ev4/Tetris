#pragma once
#include <raylib.h>
#include <vector>
// для удобства и правилности, будем хранить цвета отдельно
extern const Color darkGray;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;
extern const Color lightBlue;
extern const Color darkBlue;

std::vector<Color> GetCellColors();