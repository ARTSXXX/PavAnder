#pragma once
#include <iostream>
using namespace std;

void division() {

	float number1;
	float number2;
	cout << "������� ������ ���������� " << "<<=" << endl;
	cin >> number1;
	cout << "������� ������ ���������� " << "<<=" << endl;
	cin >> number2;

	if (number2 == 0)
	{
		cout << "������� �� 0 ����������";
	}
	else {
		cout << "��������� ������� = " << number1 / number2;
	}
	
	
}
#pragma once
