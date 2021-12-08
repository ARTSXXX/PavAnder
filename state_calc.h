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
	cout << "Введите, что будем выполнять с переменными:" << endl << "1.Складывать" << endl << "2.Вычитать" << endl << "3.Умножать" << endl << "4.Делить" << endl << "5.Квадратный корень" << endl << "6.Возведение в степень" << endl;
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
		cout << "Калькулятор пока к такому не готов к такому";
		break;
	}

}
#pragma once
