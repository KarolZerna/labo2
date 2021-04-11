#include "HeadPhones.h"

HeadPhones::HeadPhones() {

}

string HeadPhones::GetConnectivity() {
	return connectivity;
}

void HeadPhones::SetConnectivity(string connect) {
	this->connectivity = connect;
}

void HeadPhones::FillInfo() {
	cout << "Fill out Headphone's info: " << endl;
	Product::FillInfo();
	cout << "Manufacturer: ";
	cin >> manufacturer;
	cout << "Connectivity: ";
	cin >> connectivity;
	cout << "Weight: ";
	cin >> weight;
}

void HeadPhones::Display() {
	cout << "----- HEADPHONE -----" << endl;
	Product::Display();
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Connectivity: " << connectivity << endl;
	cout << "Weight: " << weight << endl;
}

HeadPhones::~HeadPhones() {

}