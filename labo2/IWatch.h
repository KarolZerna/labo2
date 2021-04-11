#pragma once
#include "IPHone.h"
#include "HeadPhones.h"

class IWatch : public IPhone, public HeadPhones {
private:
	string material;
public:
	IWatch();
	void FillInfo();
	void Display();
	~IWatch();
};

