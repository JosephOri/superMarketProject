#include "Fruit.h"

 float Fruit::calcPrice(int factor) const
{
	float x = Farming_product::calcPrice(factor);
	if (x == 0)
		return 0;
	return x + (_sugar / 2);
}
 void Fruit::print() const
{
	Farming_product::print();
	cout << " (" << _sugar << ") ";
}