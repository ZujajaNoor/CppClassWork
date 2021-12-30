#include <iostream>
using namespace std;

int main()
/*Exersice 2:
Write down a program which takes the temperature in Celsius C from user and displays the output in
Fahrenheit F
F =(C*9/5)+32*/
{
	float F;
	float C;
	cout<<"Enter the value of temprature in celcius (C):";
	cin>> C;
	cout<<"The value of fahrenheit F=(C*9/5)+32:"<<endl;
	F=(C*9/5)+32;
	cout<<"F="<<F;
	return 0;
	
}
