#pragma once
#include "Product.h"

class Laptop : public Product {
private:
	string brand;
	int hardDisk;
public:
	Laptop();
	void FillInfo();
	void Display();
	~Laptop();
};
