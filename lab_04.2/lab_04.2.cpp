#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double xp, xk, dx, x, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed << setprecision(6);
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |" << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;

	for (; x <= xk; x += dx) {
		y = (x * x) / (2.1 + sin(abs(x)));

		if (x <= -5) {
			y += 1.0 / tan(exp(x));
		}
		if (-5 < x < 0) {
			y += 2 - (x * x * x) / (abs(x) + 1);
		}
		if (x >= 0) {
			y += log(sqrt(abs(x) - (x * x) / 2));
		}
		cout << setw(8) << x << "|" << setw(8) << y << "|" << endl;
	}
	cout << "---------------------------" << endl;

	system("pause");
}