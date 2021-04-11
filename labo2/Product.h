#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
	int id;
	int availability;
	int price;
public:
	Product();
	virtual void FillInfo();
	virtual void Display();
	void Sell();
	int GetId();
	~Product();
};

