#include <iostream>
#include "fun1.h"
#include "fun_umn.h"
#include "sqrt.h"
#include "degree"
#include "fun_raz"
#include "devision"
using namespace std;
void state_calc() {
	int choise;
	cout << "�������, ��� ����� ��������� � �����������:" << endl << "1.����������" << endl << "2.��������" << endl << "3.��������" << endl << "4.������" << endl << "5.���������� ������" << endl << "6.���������� � �������" << endl;
	cin >> choise;
	switch (choise)

	{

	case 1: {

		sum();
		break;

	}
	case 2: {
		raz();
		break;
	}
	case 3: {
		mult();
		break;
	}
	case 4: {
		division();
		break;
	}
	case 5: {
		sqrt();
		break;
	}
	case 6: {
		degree();
		break;
	}
	default:
		cout << "����������� ���� � ������ �� ����� � ������";
		break;
	}

}
#pragma once
