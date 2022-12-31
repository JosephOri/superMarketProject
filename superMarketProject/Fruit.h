#pragma once
#include "Farming_product.h"
class Fruit:public Farming_product
{
protected:
	int _sugar;

public:
	Fruit() :Farming_product(), _sugar{ 0 }{}//empty constructor
	Fruit(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int FarmingProductType, string name, int goodseasons, int suplliersNum, int sugar) :Farming_product(serialnumber, positionrow, positionshelf, quantity, producttype, area,
			FarmingProductType, name, goodseasons, suplliersNum), _sugar{ sugar }{}//constructor with values

	void setSugar(int sugar) { _sugar = sugar; }//set

	int getSugar() const{ return _sugar; }//get

	virtual float calcPrice(int factor) const;

	virtual void print() const;

	virtual void Pure() { cout << "pure was called" << endl; }
};

