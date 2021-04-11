#include "Laptop.h"

Laptop::Laptop() {

}

void Laptop::FillInfo() {
	cout << "Fill out laptop's info: " << endl;
	Product::FillInfo();
	cout << "Brand: ";
	cin >> brand;
	cout << "Hard Disk Capacity: ";
	cin >> hardDisk;
}

void Laptop::Display() {
	cout << "----- LAPTOP -----" << endl;
	Product::Display();
	cout << "Brand: " << brand << endl;
	cout << "Hard Disk Capacity: " << hardDisk << endl;
}

Laptop::~Laptop() {

}
