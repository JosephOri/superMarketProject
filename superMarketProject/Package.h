#pragma once
#include "Product.h"
class Package: public Product
{
protected:
	int _numOfItems;
	vector<string> _productNames;
	int _numOfColors;

public:
	Package() :Product(), _numOfItems{ 0 }, _numOfColors{ 0 }{}//empty constructor
	Package(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		string firstProduct, int numOfColors) :Product(serialnumber, positionrow, positionshelf, quantity, producttype, area)
	{//constructor with the name of the first product and the numOfcolors
		
		_numOfItems = 1;
		_numOfColors = numOfColors;
		_productNames.push_back(firstProduct);
	}
	
 
	//set methods
	void addName(string name) { _productNames.push_back(name); _numOfItems++; }
	void setNumOfcolors(int num) { _numOfColors = num; }

	//get methods
	int getNumOfItems() const{ return _numOfItems; }
	int getNumOfColors() const { return _numOfColors; }
	string getNameFromNamesArray(int index)const;//in cpp
	

	virtual void print() const;

	virtual void Pure() { cout << "pure was called" << endl; }

	virtual float calcPrice(int factor) const;
};
//
