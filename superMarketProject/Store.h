#pragma once
#include "Cheese.h"
#include "Other_milk.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "Package.h"
class Store
{
private:
	string _name;
	int _factor;
	int _numOfProducts;
	vector<Product*> _productsArr;

public:
	Store() :_name{ "Na" }, _factor{ 0 }, _numOfProducts{ 0 } {}//defult constructor
	Store(string name, int factor, Product* firstproduct);//constructor with the first product
	Store(string name, int factor);
	
	//get methods
	string getName()const { return _name; }
	int getFactor()const { return _factor; }
	int getNumOfProducts()const { return _numOfProducts; }
	Product* getProductByIndex(int index) const;//in cpp
	
	//set methods
	void setName(string name) { _name = name; }
	void setFactor(int factor);
	void addProduct(Product* p);
	void removeLastProduct();

	bool isEachProductUnique()const;
    float calcPrices()const;

	void printStore()const;
};

