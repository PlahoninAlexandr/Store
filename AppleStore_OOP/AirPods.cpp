#include "AirPods.h"
#include <string>
#include <iostream>

using namespace std;

void AirPods::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "sensor: ������� ���������� �������" << endl;
	cout << endl << "chip: H1" << endl;
	cout << endl << "battery: �� 5 ����� � ������ ������������� ���� \t ����� 24 ����� � ������ ������������� �����" << endl;
	cout << endl << "Bluetooth: 5.0" << endl;
	cout << endl << "price " << price << endl;
	Price = price;
	Name = name;
}