#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

const double E = 1e-6;

double g(double x) 
{
	return x + sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

double iterative(double x0, int maxiterations, double E) 
{
	double currentx = x0;

	for (int i = 0; i < maxiterations; i++) 
	{
		double nextx = g(currentx);

		if (abs(nextx - currentx) < E) 
		{
			return nextx;
		}
		currentx = nextx;
	}

	return currentx;
}
int main() 
{
	setlocale(LC_ALL, "Rus");
	
	double a, b;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	
	int maxiterations = 1000;

	double x0 = (a + b) / 2;

	double x = iterative(x0, maxiterations, E);

	cout << "x равен: " << x<< endl;

	return 0;
}
