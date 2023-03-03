#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float j1, j2, j3, a1, a2, a3;


	cout << "x, y и радиус окружности A\n";
	cin >> j1 >> j2 >> j3;
	A.set_circle(j1, j2, j3);

	cout << "x, y и радиус окружности B\n";
	cin >> j1 >> j2 >> j3;
	B.set_circle(j1, j2, j3);

	cout << "x, y и радиус окружности C\n";
	cin >> j1 >> j2 >> j3;
	C.set_circle(j1, j2, j3);

	cout << "\n";

	cout << "Площадь окружности A - " << A.square() << "\n";
	cout << "Площадь окружности B - " << B.square() << "\n";
	cout << "Площадь окружности C - " << C.square() << "\n";



	float a, b, c;
	float  r, x_cntr, y_cntr;

	cout << "Введите треугольник abc\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "Окружность A можно  описать в треугольнике\n";
	else cout << "Окружность A нельзя вписать треугольник\n";

	if (B.triangle_around(a, b, c)) cout << "Окружность B можно  описать в треугольнике\n";
	else cout << "Окружность B нельзя вписать треугольник\n";

	if (C.triangle_around(a, b, c)) cout << "Окружность C можно  описать в треугольнике\n";
	else cout << "Окружность C нельзя вписать треугольник\n";

	if (A.triangle_in(a, b, c)) cout << "Окружность A можно вписать в   треугольник\n";
	else cout << "Окружность A нельзя вписать треугольник\n";

	if (B.triangle_in(a, b, c)) cout << "Окружность B можно вписать в   треугольник\n";
	else cout << "Окружность B нельзя вписать треугольник\n";

	if (C.triangle_in(a, b, c)) cout << "Окружность C можно вписать в   треугольник\n";
	else cout << "Окружность C нельзя вписать треугольник\n";
	cout << "\n";
	cout << "\n";

	cout << "Проверка пересечения окружностей - радиус,центры по X и Y \n";
	cin >> a1 >> a2 >> a3;
	if (A.check_circle(a1, a2, a3)) cout << "окружность A пересекается с данной окружностью \n";
	else cout << "A непересекается\n";

	if (B.check_circle(a1, a2, a3)) cout << "окружность B пересекается с данной окружностью\n";
	else cout << "B непересекается\n";

	if (C.check_circle(a1, a2, a3)) cout << "окружность C пересекается с данной окружностью\n";
	else cout << "C непересекается\n";


	return 0;
}