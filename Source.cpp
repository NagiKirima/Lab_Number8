#include <iostream>
#include <cmath>
using namespace std;
int GetCorrectNumber() // checking input numbers
{
	int size;
	while (!(cin >> size) || (cin.peek() != '\n') || size < 1)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Enter the correct number:\t";
	}
	return size;
}

unsigned long long int recur(int n, int m) // recur(n-1)^m
{
	if (n == 1) return m;
	unsigned long long int res = pow(recur(n - 1, m), m);
	return res;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "Enter the number of numbers in the sequence: \t";
	n = GetCorrectNumber();
	cout << "Enter the sequence number:\t";
	m = GetCorrectNumber();
	cout << recur(n, m);
}