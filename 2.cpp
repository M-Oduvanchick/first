#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

const double E = 1e-6;
double f(double x) 
{
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

double f1(double x) 
{
	return -0.4*((x)/(sqrt(1-0.4*pow(x, 2)))) - (1/(sqrt(1- pow(x, 2)))) ;
}


double f2(double x)
{
	return -0.4 * ((sqrt(1 - 0.4 * pow(x, 2)) + 0.4 * (pow(x, 2) / sqrt(1 - 0.4 * pow(x, 2)))) / (1 - 0.4 * pow(x, 2))) - (x / pow((1 - pow(x, 2)), 1.5));
}

int main() {
	setlocale(LC_ALL, "Rus");
	double a;
	double b;
	double x;

	cout << "¬ведите а: ";
	cin >> a;

	cout << "¬ведите b: ";
	cin >> b;

	x = (a + b) / 2;

	if (f(a) * f2(a) > 0)
		a = x;
	else
		b = x;

	while (abs(f(x)) >= E) 
	{
		x = x - (f(x) / f1(x));

	}
	cout << "x равен: " << x<< endl;
	return 0;
}
