#include "std.h"
#include <locale>
#include <iostream>
#include <Windows.h>
using namespace std;
// комментарий
int main() {
	int a, b;
	cout << "Введите два числа" << endl;
	cin >> a;
	cin >> b;
	int c = a + b;
    cout << "Сумма чисел:" << c;
	cout << "Разница двух чисел" << a - b;
	cout << "Умножение двух чисел" << a * b;
	//123
	return 0;
}