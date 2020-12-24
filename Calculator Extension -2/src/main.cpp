/*
We extend the calculator extension-1 project to perform exception handling
We take care of division by zero
no changes to the main.cpp file
*/
#include<iostream>
using namespace std;
#include "calc.h"
#include "calc.cpp"



int main()
{
	cout<<"Performing Calculations on Double Data Type:"<<endl;
	Calc <double> obj1(2);
	obj1.calculate();

	cout<<"Performing Calculations on Integer Data Type:"<<endl;
	Calc <int> obj2(2);
	obj2.calculate();
}
