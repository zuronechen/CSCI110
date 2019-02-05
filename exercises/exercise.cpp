// #include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>


double f(double x) { return g(x) + sqrt(h(x)); }
double g(double x) { return 4 * h(x); }
double h(double x) { return x * x + k(x) - 1; }
double k(double x) { return 2 * (x + 1); }

using namespace std;

int main()
{
double x1 = f(2);
double x2 = g(h(2));
double x3 = k(g(2) + h(2));
double x4 = f(0) + f(1) + f(2);
double x5 = f(-1) + g(-1) + h(-1) + k(-1);

cout << x1 << x2 << x3 << x4 << x5 << endl;

    // system("pause");
    return 0;
}


