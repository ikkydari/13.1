//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "x_p = ";
    cin >> x_p;
    cout << "x_k = ";
    cin >> x_k;
    cout << "dx = ";
    cin >> dx;
    cout << "e = ";
    cin >> e;
    cout << endl;
    x = x_p;
    if (x <= 0)
    {
        cout << x << "<" << 0 << endl;
        return 1;
    }
    while (x <= x_k)
    {
        sum(); // виклик процедури обчислення суми
        cout << x << " "
            << s << " "
            << log(x) << " "
            << n << endl; // тут слід використовувати форматний вивід
        x += dx;
    }
    cin.get();
    return 0;
}