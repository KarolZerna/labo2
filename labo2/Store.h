#pragma once
#include "HeadPhones.h"
#include "IPhone.h"
#include "IWatch.h"
#include "Laptop.h"
#include "Product.h"

#define TAM_MAX 100

class Store {
private:
	int numberOfDevices;
	Product* productList[TAM_MAX];
public:
	Store();
	int GetPos(int id);
	void AddProduct();
	void DisplayProduct();
	void SellProduct();
	~Store();
};

