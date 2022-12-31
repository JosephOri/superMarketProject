#include "Other_milk.h"
 string Other_milk:: getNameFromNamesArray(int index)const
{
	if (index < 0 || index >= _numOfNonMilkItems)
	{
		cout << "invalid index enterd" << endl;
		return "NA";
	}
	return _nonMilkNames[index];
}
void Other_milk::addNonMilkProduct(string nonMilk)//insert a name to the vector
{
	_numOfNonMilkItems++;
	_nonMilkNames.push_back(nonMilk);
}
 float Other_milk::calcPrice(int factor) const
{
	float x = Milk_product::calcPrice(factor);
	if (x == 0)
		return 0;
	return x + (_numOfNonMilkItems * 5);
}
 void Other_milk::print() const
{
	Milk_product::print();
	int i;
	for (i = 0; i < _numOfNonMilkItems; i++)
	{
		cout << _nonMilkNames[i] << " ";
		if (i != _numOfNonMilkItems - 1)
			cout << ",";
	}
	cout << "(" << _numOfNonMilkItems << ")";
}