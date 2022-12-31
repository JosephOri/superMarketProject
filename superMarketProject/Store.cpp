#include "Store.h"

Store::Store(string name, int factor)
{
	_name = name;
	_factor = factor;
}

Store::Store(string name, int factor, Product* firstproduct)
{
	_name = name;
	_numOfProducts = 1;
	_productsArr.push_back(firstproduct);
}
Product* Store::getProductByIndex(int index) const
{
	return _productsArr[index];
}
void Store::setFactor(int factor)
{
	_factor = factor;
}
void Store::addProduct(Product* p)
{
	_numOfProducts++;
	_productsArr.push_back(p);//I'm pushing p
}
 float Store:: calcPrices()const
{
	int i;
	float sum = 0;
	for (i = 0; i < _numOfProducts; i++)
		sum += _productsArr[i]->calcPrice(_factor);
	return sum;	
}
void Store::printStore()const
{
	cout << "store information:" << endl;
	cout << "name: " << _name << endl;
	cout << "fame factor: " << _factor << endl;
	cout << "number of products:  " << _numOfProducts << endl;
	cout << "products information: " << endl;
	int i;
	for (i = 0; i < _numOfProducts; i++)
	{
		cout <<"the " << i + 1 << " product: ";
		_productsArr[i]->print();
		cout << endl;
	}

}

bool Store::isEachProductUnique()const
{
	map <int, string> help;
	int i;
	for (i = 0; i < _numOfProducts; i++)
	{
		if (help[_productsArr[i]->getSerialNum()] == "open")//if the serial number is the key to the word "open"
			return false;
		help[_productsArr[i]->getSerialNum()] = "open";//for example, help[345324]="open"; means that 345324 is the key to the word "open"
	}
	return true;
}
void Store::removeLastProduct()
{
	_productsArr.pop_back();
	_numOfProducts--;
}