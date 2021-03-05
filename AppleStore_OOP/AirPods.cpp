#include "AirPods.h"
#include <string>
#include <iostream>

using namespace std;

void AirPods::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "sensor: Двойные оптические сенсоры" << endl;
	cout << endl << "chip: H1" << endl;
	cout << endl << "battery: До 5 часов в режиме прослушивания ауди \t Более 24 часов в режиме прослушивания аудио" << endl;
	cout << endl << "Bluetooth: 5.0" << endl;
	cout << endl << "price " << price << endl;
	Price = price;
	Name = name;
}