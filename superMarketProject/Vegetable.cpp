#include "Vegetable.h"
 
 float Vegetable::calcPrice(int factor) const
{
	float x = Farming_product::calcPrice(factor);
	if (x == 0)
		return 0;
	return x + (_numVitamins * 2);
}
 void Vegetable::print() const
{
	Farming_product::print();
	cout << " (" << _numVitamins << ")";
}