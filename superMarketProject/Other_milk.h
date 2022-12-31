#pragma once
#include "Milk_product.h"
class Other_milk:public Milk_product
{
protected:
	int _numOfNonMilkItems;
	vector<string> _nonMilkNames;

public:
	Other_milk() :Milk_product(), _numOfNonMilkItems{ 0 }{}//empty constructor
	Other_milk(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int milkProductType, string name, int numOfColors, float fats, string firstNonMilkName) ://
		Milk_product(serialnumber, positionrow, positionshelf, quantity, producttype, area,
			milkProductType, name, numOfColors, fats)
	{//constructor that gets the name of the first non milk item
		_numOfNonMilkItems = 1;
		_nonMilkNames.push_back(firstNonMilkName);//inserting the first item of the vector
	}

	//set
	void addNonMilkProduct(string nonMilk);//insert a name to the vector
	
	//get methods
	 int getNumOfNonMilkItems() const { return _numOfNonMilkItems; }
	 string getNameFromNamesArray(int index)const;//in cpp
	
	
	virtual void print() const;

	virtual float calcPrice(int factor) const;

	virtual void Pure() { cout << "pure was called" << endl; }
};

