#pragma once
#include "AppleStore.h"
#include <string>
#include <iostream>

class iPhone : public AppleStore {
public:
	std::string Name;
	double Price;
	void specification(std::string name, double price) override;
};

