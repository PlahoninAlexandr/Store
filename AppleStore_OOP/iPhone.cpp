#include "iPhone.h"
#include <string>
#include <iostream>

using namespace std;

void iPhone::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "cpu: A14 Bionic" << endl;
	cout << endl << "capacity: 256 ��" << endl;
	cout << endl << "diagonal: 6.1" << endl;
	cout << endl << "resolution: 2532x1170" << endl;
	cout << endl << "camera: 12 ��" << endl;
	cout << endl << "price " << price << endl;
	Price = price;
	Name = name;
}