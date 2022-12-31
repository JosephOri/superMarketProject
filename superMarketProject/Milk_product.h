#pragma once
#include "Product.h"
class Milk_product:public Product
{
protected:
	int _milkProductType;
	string _name;
	int _numOfColors;
	float _fats;


public:
	Milk_product() :Product(), _milkProductType{ 0 }, _name{ "NA" }, _numOfColors{ 0 }, _fats{ 0 }{}//empty constructor
	Milk_product(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int milkProductType, string name, int numOfColors, float fats) :
		Product(serialnumber, positionrow, positionshelf, quantity, producttype, area)
	{
		_milkProductType= milkProductType ;
		_name= name ;
		_numOfColors= numOfColors;
		_fats= fats ;
	}//constructor with values

	//set methods
	void setMilkProductType(int type);
	void setName(string name);
	void setNumOfColors(int num);
	void setFats(float fats);
	
	//get methods
	 int getMilkProductType() const { return _milkProductType; }
	 string getName() const { return _name; }
	 int getNumOfColors() const { return _numOfColors; }
	 float getFats() const { return _fats; }

	virtual float calcPrice(int factor) const;

	virtual void print() const;

	virtual void Pure() = 0;


};

