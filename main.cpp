#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Start() {
	cout << "정수 3개 입력 : ";
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << "num1 + num2 : " << num1 + num2 << endl;
	cout << "num1 - num2 : " << num1 - num2 << endl;
	cout << "num1 * num2 : " << num1 * num2 << endl;
	cout << "num1 / num2 : " << num1 / num2 << endl;
	cout << "num1 % num2 : " << num1 % num2 << endl;

	cout << "(num1 + num2) * (num3 + num1) % num1 : " << (num1 + num2) * (num3 + num1) % num1 << endl;
	cout << "(num3 % num2) + (num1 * 2) : " << (num3 % num2) + (num1 * 2) << endl;
	cout << "(num1 + num2 + num3) % (num3 + 1)  : " << (num1 + num2 + num3) % (num3 + 1) << endl;

	cout << "정수 2개 입력 : ";
	int n1, n2;
	cin >> n1 >> n2;

	cout << "몫 : " << n1 / n2 << ", 나머지 : " << n1 % n2 << endl;

	cout << "정수 2개 입력 : ";
	int a, b;
	cin >> a >> b;

	int quotient = a / b;
	int remainder = a % b;

	int restoredA = quotient * b + remainder;
	cout << "몫: " << quotient << '\n';
	cout << "나머지: " << remainder << '\n';
	cout << "원래 숫자 a: " << a << '\n';
	cout << "수식으로 계산된 값: " << restoredA << '\n';

	int size = 5;
	for (int i = 1; i <= size; i++) {
		for (int j = 0; j < size - i; j++)
		{
			cout << "  ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "* ";
		}
		cout << '\n';
	}
	for (int i = size - 1; i >= 1; i--)
	{
		for (int j = 0; j < size - i; j++)
		{
			cout << "  ";
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "* ";
		}

		cout << '\n';
	}
}

int main() {
	Start();
	return 0;
}

