//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = 0;
	s = a;
	do {
		dod(); // ������ ��������� ���������� �������
		s += 2 * a;
		n++;
	} while (fabs(a) > e);
}