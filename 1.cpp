#include <iostream>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, "Russian");

	cout << "Введите длину основания: ";
	cin >> n;
	cout << endl;
	while (n % 2 == 0)
	{
		cout << "Ошибка. Введите нечетное число: ";
		cin >> n;
		cout << endl;
	}
	for (int i = 1; i <= n / 2 + 1; i++)
	{
		for (int j = 1; j <= (n + 1) / 2 - i; j++)
		{
			cout << ' ';
		}
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}
