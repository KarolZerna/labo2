#include "Product.h"

Product::Product() {
	this->availability = 0;
}

void Product::FillInfo() {
	cout << "Id: ";
	cin >> id;
	cout << "# Available: ";
	cin >> availability;
	cout << "Price: ";
	cin >> price;
}

void Product::Display() {
	cout << "Id: " << id << endl;
	cout << "Number of available: " << availability << endl;
	cout << "Price: " << price << endl;
}
void Product::Sell() {
	availability -= 1;
}
int Product::GetId() {
	return id;
}

Product::~Product() {

}


