#include "Store.h"

Store::Store() {
	this->numberOfDevices = 0;
}

int menuProducts() {
	int aux;
	system("cls");
	cout << "Add a product: " << endl;
	cout << "1. Laptop" << endl;
	cout << "2. iPhone" << endl;
	cout << "3. HeadPhones" << endl;
	cout << "4. iWatch" << endl;
	cin >> aux;
	return aux;
}

void Store::AddProduct() {
	int aux;
	aux = menuProducts();
	system("cls");
	switch (aux) {
		case 1:
			productList[numberOfDevices] = new Laptop();
			productList[numberOfDevices]->FillInfo();
			system("pause");
			break;
		case 2:
			productList[numberOfDevices] = new IPhone();
			productList[numberOfDevices]->FillInfo();
			system("pause");
			break;
		case 3:
			productList[numberOfDevices] = new HeadPhones();
			productList[numberOfDevices]->FillInfo();
			system("pause");
			break;
		case 4:
			productList[numberOfDevices] = new IWatch();
			productList[numberOfDevices]->FillInfo();
			system("pause");
			break;
	}
	numberOfDevices++;
}

int Store::GetPos(int id) {
	for (int i = 0; i < numberOfDevices; i++)
		if (productList[i]->GetId() == id)
			return i;
	return -1;
}

void Store::SellProduct() {
	int id, pos;
	cout << "Enter id's product: ";
	cin >> id;
	pos = GetPos(id);
	if (pos == -1) cout << "Not Found" << endl;
	else {
		productList[pos]->Sell();
		cout << "Successful Sale" << endl;
		numberOfDevices -= 1;
	}

}

void Store::DisplayProduct() {
	if (numberOfDevices == 0) cout << "Not Found" << endl;
	else {
		for (int i = 0; i < numberOfDevices; i++) {
			productList[i]->Display();
			cout << endl;
		}
	}
}

Store::~Store() {

}