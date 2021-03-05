#include "Mac.h"
#include <string>
#include <iostream>

using namespace std;

void Mac::specification(string name, double price) {
	cout << endl << "device " << name << endl;
	cout << endl << "cpu: Apple M1" << endl;
	cout << endl << "ram: 8 ГБ" << endl;
	cout << endl << "capacity: 512 ГБ" << endl;
	cout << endl << "diagonal: 13,3 Retina" << endl;
	cout << endl << "resolution: 1680×1050" << endl;
	cout << endl << "camera: FaceTime HD 720p" << endl;
	cout << endl << "audio: Стереодинамики" << endl; 
	cout << endl << "OC: macOS" << endl;
	cout << endl << "price " << price << endl;
	Price = price;
	Name = name;
}