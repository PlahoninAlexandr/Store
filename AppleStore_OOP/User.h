#pragma once
#include "AppleStore.h"
#include <string>
#include <vector>

using namespace std;

class User {
private:
	int Age, devNumber, buy;
	string Name, name;
	vector<string> basket;
	double Balance, balance;
public:
	User();
	User(string name, double balance);
	int Run();
private:
	void specification(AppleStore* device, string name, double price);
	void changeBalance(double Price, std::string nm);
};




