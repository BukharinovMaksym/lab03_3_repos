// Lab_03_3.cpp
// Бухарінов Максим Сергійович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, R, y; // вхідні дані
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R; cout << endl;

	// розгалуження (повна форма)
	if (x <= -8)
		y = -R;
	else if ((x > -8) && (x <= -R))
		y = (R * R + R * x) / (8 - R);
	else if ((x > -R) && (x <= R))
		y = -sqrt(R * R - pow((x - R), 2));
	else if ((x > R) && (x <= 5))
		y = (2 * x - 2 * R) / (5 - R);
	else y = 3;

	cout << "y = " << y << endl;
	return 0;
}