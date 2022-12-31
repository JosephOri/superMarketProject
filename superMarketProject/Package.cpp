#include "Package.h"

 float Package::calcPrice(int factor) const
{
	float x = Product::calcPrice(factor);
	return x * 2 * _numOfItems + (_numOfColors / 3);
}

 void Package::print() const
{
	Product::print();
	int i;
	for (i = 0; i < _numOfItems; i++)
	{
		cout << _productNames[i] << " ";
		if (i != _numOfItems - 1)
			cout << ",";
	}
	cout << "(" << _numOfColors << "," << _numOfItems << ")";
}
string Package:: getNameFromNamesArray(int index) const
{
	return _productNames[index];
}