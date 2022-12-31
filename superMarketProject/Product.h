#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Product
{
protected:
	int _serialNumber;
	char _positionRow;
	int _positionShelf;
	int _quantity;
	int _productType;
	int _area;
public:
	Product() :_serialNumber{ 0 }, _positionRow{ '0' }, _positionShelf{ 0 }, _quantity{ 0 }, _productType{ 0 }, _area{ 0 }{}//defult consructor
	Product(int serialnumber, char positionrow, int positionshelf , int quantity , int producttype , int area );//counstructor with values
	

	//get methods
	 int getSerialNum()const { return _serialNumber; }
	 char getRow()const { return _positionRow; }
	 int getShelf()const { return _positionShelf; }
	 int getQuantity() const { return _quantity; }
	 int getType()const { return _productType; }
	 int getArea()const { return _area; }
	
	//set methods, the implements are in Product.cpp
	void setRow(char positionrow);
	void setShelf(int positionshelf);
	void setQuantity(int quantity);
	void setType(int producttype);
	void setArea(int area);
	

	virtual float calcPrice(int factor) const;

	virtual  void print() const;// print method

	virtual void Pure() = 0;//product is an abstract class

};

