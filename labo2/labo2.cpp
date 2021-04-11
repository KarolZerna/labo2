#include <iostream>
#include "Store.h"

using namespace std;

int menu() {
	int res;
	system("cls");
	cout << "\n Tech Store" << endl;
	cout << "--------------------------" << endl;
	cout << "1- Add Product" << endl;
	cout << "2- Sell Product" << endl;
	cout << "3- Display Products" << endl;
	cout << "0- Salir" << endl;
	cout << "Choose: ";
	cin >> res;
	return res;
}

int main()
{
	Store store = Store();
	int option;
	do {
		option = menu();
		system("cls");
		switch (option) {
		case 1:
			store.AddProduct();
			system("pause");
			break;
		case 2:
			store.SellProduct();
			system("pause");
			break;
		case 3:
			store.DisplayProduct();
			system("pause");
			break;
		}
	} while (option != 0);
	return 0;
}