#pragma once
#include <iostream>
#include <math.h>
using namespace std;

void degree() {

	float number1;
	float degree;
	

	cout << "������� �����, ������� ����� ��������� � ������ ������� " << "<<=" << endl;
	cin >> number1;

	cout << "������� �������" << endl;
	cin >> degree;

	cout << number1 << "^"  << degree <<" = "  << pow(number1, degree);

}
#pragma once
