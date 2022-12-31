#pragma once
#include "Farming_product.h"
class Vegetable: public Farming_product
{
protected:
	int _numVitamins;
public:
	Vegetable() :Farming_product() , _numVitamins{ 0 } {}//empty constructor
	Vegetable(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int FarmingProductType, string name, int goodseasons, int suplliersNum,int numVitamins) :
		Farming_product( serialnumber, positionrow, positionshelf, quantity, producttype, area,
			FarmingProductType, name, goodseasons, suplliersNum), _numVitamins{ numVitamins }{}//constructor with values

	int getNumVitamins() const { return _numVitamins; }//get method

	void setNumVitamins(int num) { _numVitamins = num; }//set method

	virtual float calcPrice(int factor) const;

	virtual void print() const;

	virtual void Pure() { cout << "pure was called" << endl; }
};

