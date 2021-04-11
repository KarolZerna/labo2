#include "IPhone.h"

IPhone::IPhone() {

}

void IPhone::FillInfo() {
	cout << "Fill out iPhone's info: " << endl;
	Product::FillInfo();
	cout << "Model: ";
	cin >> model;
	cout << "Capacity: ";
	cin >> capacity;
	cout << "Color: ";
	cin >> color;
}

void IPhone::Display() {
	cout << "----- IPHONE -----" << endl;
	Product::Display();
	cout << "Model: " << model << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Color: " << color << endl;
}

IPhone::~IPhone() {

}