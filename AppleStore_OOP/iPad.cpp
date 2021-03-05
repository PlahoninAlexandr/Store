#include "iPad.h"
#include <string>
#include <iostream>

using namespace std;

void iPad::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "cpu: A14 Bionic" << endl;
	cout << endl << "capacity: 256 ГБ" << endl;
	cout << endl << "diagonal: 10,9" << endl;
	cout << endl << "resolution: 2360×1640" << endl;
	cout << endl << "camera: 12 Мп" << endl;
	cout << endl << "price " << price << endl;
	Price = price;
	Name = name;
}