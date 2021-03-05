#pragma once
#include "AppleStore.h"
#include <string>
#include <iostream>

class Mac : public AppleStore {
public:
	std::string Name;
	double Price;
	void specification(std::string name, double price) override;
};

