#include "std.h"
#include <locale>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	int a, b;
	cout << "Введите два числа" << endl;
	cin >> a;
	cin >> b;
	int c = a + b;
    cout << "Сумма чисел:" << c;
	cout << "Разница двух чисел" << a - b;
	return 0;
}