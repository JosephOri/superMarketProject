#pragma once
#include "Milk_product.h"
class Cheese:public Milk_product
{
protected:
	int _numCheeseExtras;

public:

	Cheese() :Milk_product(), _numCheeseExtras{ 0 }{}//empty constructor
	Cheese(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int milkProductType, string name, int numOfColors, float fats, int numCheeseExtras) :
		Milk_product(serialnumber, positionrow, positionshelf, quantity, producttype, area,
			milkProductType, name, numOfColors, fats)
	{
		_numCheeseExtras = numCheeseExtras;
	}//constructor vith values
	
	int getCheeseExtras() const { return _numCheeseExtras; }//get

	void setCheeseExtras(int extras);//set

	virtual void print() const;

	virtual float calcPrice(int factor)  const;

	virtual void Pure() { cout << "pure was called" << endl; }
};

