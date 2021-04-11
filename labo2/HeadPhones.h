#pragma once
#include "Product.h"

class HeadPhones : public virtual Product {
private:
	string manufacturer;
	string connectivity;
	int weight;
public:
	HeadPhones();
	string GetConnectivity();
	void SetConnectivity(string connect);
	void FillInfo();
	void Display();
	~HeadPhones();
};

