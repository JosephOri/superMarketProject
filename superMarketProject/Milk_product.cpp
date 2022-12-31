#include "Milk_product.h"

void Milk_product::print() const
{
	Product::print();
	cout << " " << _name<<" ";
	cout << "(" << _fats << "," << _numOfColors << "," << _milkProductType << ") ";
}

 float Milk_product::calcPrice(int factor) const
{
	float x = Product::calcPrice(factor);
	if (x == 0)
		return 0;
	return (x + _numOfColors - _fats) * _milkProductType;
}

void Milk_product::setMilkProductType(int type)
{
	if (type > 4 || type < 1)
	{
		cout << "tried to set invalid type " << endl;
		return;
	}
	_milkProductType = type;
}
void Milk_product::setFats(float fats)
{
	if (fats < 0)
	{
		cout << "negative ammout of fats enterd " << endl;
		return;
	}
	_fats = fats;
}
void Milk_product::setNumOfColors(int num)
{
	if (num < 0)
	{
		cout << "negative ammout of colors enterd " << endl;
		return;
	}
	_numOfColors = num;
}
void Milk_product::setName(string name) { _name = name; }
