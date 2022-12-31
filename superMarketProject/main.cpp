/*
שם 1: אורי יוסף, תז:31884051 

שם 2: תומר מזרחי, תז: 209008960
*/

#include "Store.h"

int main()
{
	//product
	int serialnum;
	char positionRow;
	int positionShelf, quantity, productType, area;
	//product

	//milk product
	int milkproductType;
	string name;
	int numOfcolors;
	float fats;
	int numOfchesseExtras;//cheese
	string firstNonMilkItem;//other milk
	//milk product

	//farming product
	int farmingProducttype,goodSeasons,suppliersNum;
	int sugar;//fruit
	int numOfVitamins;//vegetable
	//farming product

	//package
	string FirstProduct;
	//package




	cout << "----------------------------------------------start-----------------------------------------------------------------" << endl;
	//implementing each product type
	Store* superShop = new Store("SuperStore",3);	
	Product* cheese = new Cheese(34321,'R',3,90,2,3,3,"proCheese",3,20,4);	
	Product* otherMilk  = new Other_milk(54231, 'C', 4, 70, 2, 1, 4, "protein shake", 6, 0, "banana");
	Product* vegetable = new Vegetable(65879, 'T',2, 40, 1, 3, 1, "Cucumber", 2, 4, 8);
	Product* fruit = new Fruit(98647, 'P', 4, 70, 1, 3, 2, "Strawberry", 3, 6, 5);
	Product* package = new Package(65324, 'Y', 2, 4, 3, 2, "milk", 5);
	//implementing each product type
	
	//inserting products to the array
	superShop->addProduct(cheese);
	superShop->addProduct(otherMilk);
	superShop->addProduct(vegetable);
	superShop->addProduct(fruit);
	superShop->addProduct(package);
	//inserting products to the array

	cout << "-----------------------------------cheaking the Cheese functions--------------------------------------" << endl;
	//implementing the product
	cout << "enter serial number:" << endl;
	cin >> serialnum;
	cout << "enter position Row (char):" << endl;
	cin >> positionRow;
	cout << "enter position shlef (int):" << endl;
	cin >> positionShelf;
	cout << "enter quantity:" << endl;
	cin >> quantity;
	cout << "enter product type" << endl;
	cin >> productType;
	cout << "enter area" << endl;
	cin >> area;
	cout << "enter milk product type" << endl;
	cin >> milkproductType;
	cout << "enter product name" << endl;
	cin >> name;
	cout << "enter num of colors" << endl;
	cin >> numOfcolors;
	cout << "enter fats quantity" << endl;
	cin >> fats;
	cout << "enter cheese extras ammount" << endl;
	cin >> numOfchesseExtras;
	//implementing the product

	Cheese* cheese2 = new Cheese(serialnum, positionRow, positionShelf, quantity, productType, area, milkproductType, name, numOfcolors,
		fats,numOfchesseExtras);
	cout << "the cheese printing method: ";
	cheese2->print();
	cout << endl;
	cout << "our cheese price is: " << cheese2->calcPrice(superShop->getFactor()) << endl;
	cout << endl;
	delete(cheese2);

	cout << "-----------------------------------cheaking the Other milk product functions--------------------------------------" << endl;
	//implementing the product
	cout << "enter serial number:" << endl;
	cin >> serialnum;
	cout << "enter position Row (char):" << endl;
	cin >> positionRow;
	cout << "enter position shlef (int):" << endl;
	cin >> positionShelf;
	cout << "enter quantity:" << endl;
	cin >> quantity;
	cout << "enter product type" << endl;
	cin >> productType;
	cout << "enter area" << endl;
	cin >> area;
	cout << "enter milk product type" << endl;
	cin >> milkproductType;
	cout << "enter product name" << endl;
	cin >> name;
	cout << "enter num of colors" << endl;
	cin >> numOfcolors;
	cout << "enter fats quantity" << endl;
	cin >> fats;
	cout << "enter first non milk item name (string)" << endl;
	cin >> firstNonMilkItem;
	//implementing the product

	Other_milk* otherMilk2 = new Other_milk(serialnum, positionRow, positionShelf, quantity, productType, area, milkproductType, name, numOfcolors,
		fats, firstNonMilkItem);
	cout << "the price of our other milk product before we added new names: " << otherMilk2->calcPrice(superShop->getFactor()) << endl;
	cout << "now we will insert new names to the array of names of non milk items" << endl;
	otherMilk2->addNonMilkProduct("apple");
	otherMilk2->addNonMilkProduct("orange");
	cout << "the price of our other milk product after we added new names: " << otherMilk2->calcPrice(superShop->getFactor()) << endl;
	cout << "now we will see the array of the non milk items at the end of the printing method" << endl;
	otherMilk2->print();
	delete(otherMilk2);
	cout << endl;
	cout << endl;

	cout << "-----------------------------------cheaking the Package product functions--------------------------------------" << endl;
	cout << "enter serial number:" << endl;
	cin >> serialnum;
	cout << "enter position Row (char):" << endl;
	cin >> positionRow;
	cout << "enter position shlef (int):" << endl;
	cin >> positionShelf;
	cout << "enter quantity:" << endl;
	cin >> quantity;
	cout << "enter product type" << endl;
	cin >> productType;
	cout << "enter area" << endl;
	cin >> area;
	cout << "enter first item name in the names array (string)" << endl;
	cin >> FirstProduct;
	cout << "enter the number of colors" << endl;
	cin >> numOfcolors;
	Package* package2 = new Package(serialnum, positionRow, positionShelf, quantity, productType, area, FirstProduct, numOfcolors);		
	cout << "the price of our package before we added new names: " << package2->calcPrice(superShop->getFactor()) << endl;
	package2->addName("yogort");
	package2->addName("yople");
	cout << "now after we added some new names, we will print the package details" << endl;
	package2->print();
	cout << endl;
	cout << "the price of our package after we added new names: " << package2->calcPrice(superShop->getFactor()) << endl;
	delete(package2);
	cout << endl;
	cout << endl;

	cout << "-----------------------------------cheaking the Fruit product functions--------------------------------------" << endl;
	cout << "enter serial number:" << endl;
	cin >> serialnum;
	cout << "enter position Row (char):" << endl;
	cin >> positionRow;
	cout << "enter position shlef (int):" << endl;
	cin >> positionShelf;
	cout << "enter quantity:" << endl;
	cin >> quantity;
	cout << "enter product type" << endl;
	cin >> productType;
	cout << "enter area" << endl;
	cin >> area;
	cout << "enter farming product type" << endl;
	cin >> farmingProducttype;
	cout << "enter the name of the product" << endl;
	cin >> name;
	cout << "enter the good seasons number" << endl;
	cin >> goodSeasons;
	cout << "enter the number of suppliers" << endl;
	cin >> suppliersNum;
	cout << "enter the sugar ammount" << endl;
	cin >> sugar;
	Fruit* fruit2 = new Fruit(serialnum, positionRow, positionShelf, quantity, productType, area, farmingProducttype, name,
		goodSeasons, suppliersNum, sugar);
	cout << "the price of our fruit is: " << fruit2->calcPrice(superShop->getFactor()) << endl;
	cout << "fruit printing method: " << endl;
	fruit2->print();
	delete(fruit2);
	cout << endl;
	cout << endl;

	cout << "-----------------------------------cheaking the Vegetable product functions--------------------------------------" << endl;
	cout << "enter serial number:" << endl;
	cin >> serialnum;
	cout << "enter position Row (char):" << endl;
	cin >> positionRow;
	cout << "enter position shlef (int):" << endl;
	cin >> positionShelf;
	cout << "enter quantity:" << endl;
	cin >> quantity;
	cout << "enter product type" << endl;
	cin >> productType;
	cout << "enter area" << endl;
	cin >> area;
	cout << "enter farming product type" << endl;
	cin >> farmingProducttype;
	cout << "enter the name of the product" << endl;
	cin >> name;
	cout << "enter the good seasons number" << endl;
	cin >> goodSeasons;
	cout << "enter the number of suppliers" << endl;
	cin >> suppliersNum;
	cout << "enter the vitamins ammount" << endl;
	cin >> numOfVitamins;
	Vegetable* vegetable2 = new Vegetable(serialnum, positionRow, positionShelf, quantity, productType, area, farmingProducttype, name,
		goodSeasons, suppliersNum, numOfVitamins);
	cout << "the price of our  vegetable is: " << vegetable2->calcPrice(superShop->getFactor()) << endl;
	cout << "vegetable printing method: " << endl;
	vegetable2->print();
	delete(vegetable2);
	cout << endl;
	cout << endl;


	cout << "-----------------------------------------the sum of all the prices---------------------------------------"<<endl;
	cout << "The total sum of prices in the store is: " << superShop->calcPrices() << endl;
	cout << endl;

	cout << "-----------------------------------------cheaking that each product is unique---------------------------------------" << endl;
	cout << "now we will expect that each product is unique" << endl;
	cout << "checking: " << superShop->isEachProductUnique() << endl;
	Vegetable* vegetable3 = new Vegetable(65879, 'T', 2, 40, 1, 3, 1, "Cucumber", 2, 4, 8);
	superShop->addProduct(vegetable3);
	cout << "now, after inserting a simillar product, we will expect that each product isn't unique" << endl;
	cout << "checking: " << superShop->isEachProductUnique() << endl;
	superShop->removeLastProduct();
	delete(vegetable3);
	cout << endl;

	cout << "------------------------------------print store method----------------------------------------" << endl;
	superShop->printStore();
	cout << endl;
	cout << "----------------------------------------------end-----------------------------------------------------------------" << endl;



	delete(cheese);
	delete(otherMilk);
	delete(vegetable);
	delete(fruit);
	delete(package);
	delete(superShop);
	return 0;

}