#include "Watch.h"
#include <string>
#include <iostream>

using namespace std;

void Watch::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "cpu: Apple W3" << endl;
	cout << endl << "capacity: 32 ГБ" << endl;
	cout << endl << "diagonal: 44x38x10,7 Мм" << endl;
	cout << endl << "display: OLED LTPO" << endl;
	cout << endl << "connection: Wi‑Fi, Bluetooth 5.0" << endl;
	cout << endl << "detector: GPS, compass, HRS, Gyroscope etc..." << endl;
	cout << endl << "price " << price << endl; 
	Price = price;
	Name = name;
}