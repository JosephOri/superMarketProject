#include "Farming_product.h"

float Farming_product:: calcPrice(int factor) const
{
	float x = Product::calcPrice(factor);
	if (x == 0)
		return 0;
	return x * 3 * (5 - _goodSeasons) + (5 * _suplliersNum) + (_productType);
}

 void Farming_product::print() const
{
	Product::print();
	cout << " " << _name << "(" << _productType << "," << _suplliersNum << "," << _productType << ")";
}
void Farming_product::setFarmingProductType(int type)
{
	_farmingProductType = type;
}

void Farming_product::setGoodSeasons(int good)
{
	_goodSeasons = good;
}
void Farming_product::setSuplliersNum(int num)
{
	_suplliersNum = num;
}