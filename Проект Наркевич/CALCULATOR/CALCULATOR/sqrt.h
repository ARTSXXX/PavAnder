#pragma once
#include <iostream>
#include <math.h>
using namespace std;

void sqrt() {

	float number1;
	
	cout << "Введите число, из которого будем извлекать квадратный корень " << "<<=" << endl;
	cin >> number1;
	
	cout << "Корень из " << number1 << " = " << sqrt(number1);

}
