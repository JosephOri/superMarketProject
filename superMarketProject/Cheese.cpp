#include "Cheese.h"

void Cheese:: setCheeseExtras(int extras)
{
	_numCheeseExtras = extras;
}
 float Cheese::calcPrice(int factor)  const
{
	float x = Milk_product::calcPrice(factor);
	if (x == 0)
		return 0;
	return x + _numCheeseExtras;
}
 void Cheese::print() const
{
	Milk_product::print();
	cout << " (" << _numCheeseExtras << ")";	
}