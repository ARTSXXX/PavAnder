#pragma once
#include <iostream>
#include <math.h>
using namespace std;

void degree() {

	float number1;
	float degree;
	

	cout << "¬ведите число, которое будем возводить в данную степень " << "<<=" << endl;
	cin >> number1;

	cout << "¬ведите степень" << endl;
	cin >> degree;

	cout << number1 << "^"  << degree <<" = "  << pow(number1, degree);

}
#pragma once
