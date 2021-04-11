#pragma once
#include "Product.h"

class IPhone : public virtual Product {
private:
	string model;
	string color;
	int capacity;
public:
	IPhone();
	void FillInfo();
	void Display();
	~IPhone();
};

