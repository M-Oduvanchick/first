#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

const double E = 1e-6;

int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, x;
	double fb;
	double fx;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;

	while (abs(b - a) >= E)
	{
		x = (a + b) / 2;

		fb = sqrt(1 - 0.4 * pow(b, 2)) - asin(b);
		fx = sqrt(1 - 0.4 * pow(x, 2)) - asin(x);

		if (fb * fx < 0)
			a = x;
		else
			b = x;
	}
	cout << "x равен:" << b<< endl;
	return 0;
}
