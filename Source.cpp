#include <iostream>
#include <cmath>
using namespace std;
int GetCorrectNumber() // проверка чисел, вводимых пользователем на натуральность
{
	int size;
	while (!(cin >> size) || (cin.peek() != '\n') || size < 1)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "¬ведите корректное число:\t";
	}
	return size;
}

unsigned long long int recur(int n, int m) // возведение предыдущего вызова в степень m r(n-1)^m
{
	if (n == 1) return m;
	unsigned long long int res = pow(recur(n - 1, m), m);
	return res;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "¬ведите количество чисел в последовательности:\t";
	n = GetCorrectNumber();
	cout << "¬ведите число последовательности:\t";
	m = GetCorrectNumber();
	cout << recur(n, m);
}