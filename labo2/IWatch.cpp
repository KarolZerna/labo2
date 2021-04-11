#include "IWatch.h"

IWatch::IWatch() {

}

void IWatch::FillInfo() {
	string connectivity;
	cout << "Fill out iWatch's info: " << endl;
	IPhone::FillInfo();
	cout << "Material: ";
	cin >> material;
	cout << "Connectivity: ";
	cin >> connectivity;
	HeadPhones::SetConnectivity(connectivity);
}

void IWatch::Display() {
	cout << "----- IWATCH -----" << endl;
	IPhone::Display();
	cout << "Material: " << material << endl;
	cout << "Connectivity: " << HeadPhones::GetConnectivity() << endl;
}

IWatch::~IWatch() {

}
