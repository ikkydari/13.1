//////////////////////////////////////////////////////////////////////////////
// dod.cpp
// файл реалізації функції
#include <cmath>
#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod() {
	int next = n * 2 + 1;
	a = pow(x - 1, next) / (next * pow(x + 1, next));
} // коефіцієнт рекурентності