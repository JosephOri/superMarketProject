#pragma once
#include "Product.h"
class Farming_product:public Product
{
protected:
	int _farmingProductType;
	string _name;
	int _goodSeasons;
	int _suplliersNum;
public:
	Farming_product() :Product(), _name{ "NA" }, _farmingProductType{ 0 }, _goodSeasons{ 0 }, _suplliersNum{ 0 }{}//defult constructor
	Farming_product(int serialnumber, char positionrow, int positionshelf, int quantity, int producttype, int area,
		int FarmingProductType,string name,int goodseasons,int suplliersNum):
		Product( serialnumber, positionrow, positionshelf, quantity, producttype, area)
		{
		
		_name = name;
		_suplliersNum = suplliersNum;
		_goodSeasons = goodseasons;
		_farmingProductType = FarmingProductType;
	
		}//constructor with values


	

	//get methods
	int getFarmingProductType() const{ return _farmingProductType; }
	string getName() const { return _name; }
	int getGoodseasons() const { return _goodSeasons; }
	int getSuplliersNum() const { return _suplliersNum; }

	//set methods
	void setFarmingProductType(int type); 
	void setName(string name) { _name = name; }
	void setGoodSeasons(int good); 
	void setSuplliersNum(int num); 

	virtual float calcPrice(int factor) const;

	virtual void print() const;

	virtual void Pure() = 0;


	
};

