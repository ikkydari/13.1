//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// файл реалізації функції
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = 0;
	s = a;
	do {
		dod(); // виклик процедури обчислення доданку
		s += 2 * a;
		n++;
	} while (fabs(a) > e);
}