#include <iostream>
#include "fun1.h"
#include "fun_umn.h"
#include "sqrt.h"
#include "degree.h"
#include "fun_raz.h"
#include "devision.h"
using namespace std;
void state_calc() {
	int choise;
	cout << "Ââåäèòå, ÷òî áóäåì âûïîëíÿòü ñ ïåðåìåííûìè:" << endl << "1.Ñêëàäûâàòü" << endl << "2.Âû÷èòàòü" << endl << "3.Óìíîæàòü" << endl << "4.Äåëèòü" << endl << "5.Êâàäðàòíûé êîðåíü" << endl << "6.Âîçâåäåíèå â ñòåïåíü" << endl;
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
		cout << "Êàëüêóëÿòîð ïîêà ê òàêîìó íå ãîòîâ ê òàêîìó";
		break;
	}

}
#pragma once
