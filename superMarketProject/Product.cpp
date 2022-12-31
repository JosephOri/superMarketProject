/*
שם 1: אורי יוסף, תז:31884051

שם 2: תומר מזרחי, תז: 209008960
*/

#include "Product.h"

Product::Product(int serialnumber , char positionrow, int positionshelf , int quantity , int producttype , int area )
{
	
	_productType = producttype;
	_area = area;
	_quantity = quantity;
	_positionShelf = positionshelf;
	_positionRow = positionrow;
	_serialNumber = serialnumber;

}
 float Product::calcPrice(int factor) const
{
	return factor * _quantity * _area;
}
//set methods
void Product::setArea(int area)
{
	_area = area;
}
void Product::setQuantity(int quantity)
{
	_quantity = quantity;
}
void Product::setType(int producttype)
{
	_productType = producttype;
}
void Product::setRow(char positionrow)
{
	_positionRow = positionrow;
}
void Product::setShelf(int positionshelf)
{
	_positionShelf = positionshelf;
}

 void Product::print() const
{
	cout << _serialNumber << " " << _positionRow << " " << _positionShelf << " " << "(" << _quantity << "," << _productType << "," << _area << ") ";
}