#pragma once
#include <iostream>
using namespace std;

void division() {

	float number1;
	float number2;
	cout << "Введите первую переменную " << "<<=" << endl;
	cin >> number1;
	cout << "Введите вторую переменную " << "<<=" << endl;
	cin >> number2;

	if (number2 == 0)
	{
		cout << "Деление на 0 невозможно";
	}
	else {
		cout << "Результат деления = " << number1 / number2;
	}
	
	
}
#pragma once
