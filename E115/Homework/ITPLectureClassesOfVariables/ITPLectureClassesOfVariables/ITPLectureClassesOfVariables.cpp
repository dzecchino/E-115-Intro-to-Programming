
#include "pch.h"
#include <iostream>

using namespace std;

//new class of variables called vending machine
class vendingMachine{
	public:
	//Three questions you must have an answer to
	//1. Attributes: What is the physical look and feel of this actor?
	int cansOfCoke;
	float priceForCoke;

	//2. Constructor: What does a brand new variable of this type look like?
	vendingMachine() {
		cansOfCoke = 10;
		priceForCoke = 1.75;
	}
	//3. Functions: What function is this actor allowed to preform?
	void getMeCoke(float cash) {
		float change;
		if (cash >= priceForCoke && cansOfCoke > 0) {
			cout << "Great! Here's your can of coke.." << endl;
			change = cash - priceForCoke;
			cout << "Here's your change: " << change << endl;
			cansOfCoke--; //decrement by one
		}
		else {
			if (cansOfCoke == 0) {
				cout << "Sorry, out pf coke. Here's your refund" << endl;
			}
			cout << "Stingy you! The price is $1.75\n";

		}
	}



};

int main(){
  
	int x;
	vendingMachine var, var1, var2;
	float moneyy;

	while (true) {
		cout << "Give me money\n";
		cin >> moneyy;
		var.getMeCoke(moneyy);
	}
	//var1.priceForCoke(1);
	/*var.priceForCoke = 1;
	var.getMeCoke(3);
	var.priceForCoke = 0.25;
	var.getMeCoke(2);
	*/
	//This is for the change of the price of a can 
	//of coke and then then program adjusts for the new price of coke


	system("pause");
	return 0;
}


