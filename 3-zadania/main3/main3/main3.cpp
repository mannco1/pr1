#include <iostream>
#include "figure.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;
	figure A(0, 0, 0, 0, 0, 0, 0, 0);
	figure B(0, 0, 0, 0, 0, 0, 0, 0);
	figure C(0, 0, 0, 0, 0, 0, 0, 0);

	cout << " A (x 1-4),(y 1-4)\n";
	cin >> X1 >> X2 >> X3 >> X4 >> Y1 >> Y2 >> Y3 >> Y4;
	A.set_fig(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << " B (x 1-4),(y 1-4)\n";;
	cin >> X1 >> X2 >> X3 >> X4 >> Y1 >> Y2 >> Y3 >> Y4;
	B.set_fig(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << " C (x 1-4),(y 1-4)\n";
	cin >> X1 >> X2 >> X3 >> X4 >> Y1 >> Y2 >> Y3 >> Y4;
	C.set_fig(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "A: "; A.show();
	cout << "B: "; B.show();
	cout << "C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "A\n";
	if (B.is_prug()) cout << "A\n";
	if (C.is_prug()) cout << "A\n";

	cout << "\n";

	if (A.is_square()) cout << " A \n";
	if (B.is_square()) cout << " B \n";
	if (C.is_square()) cout << " C \n";

	cout << "\n";

	if (A.is_romb()) cout << " A \n";
	if (B.is_romb()) cout << " B \n";
	if (C.is_romb()) cout << " C \n";

	cout << "\n";

	if (A.is_in_circle()) cout << "A\n";
	if (B.is_in_circle()) cout << "B\n";
	if (C.is_in_circle()) cout << "C\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "A\n";
	if (B.is_out_circle()) cout << "A\n";
	if (C.is_out_circle()) cout << "C\n";
}