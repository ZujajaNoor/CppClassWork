#include <iostream>
using namespace std;

int main()
/*Exercise 1:
Write down a program which takes the values of variable ‘a’ and ‘b’ as input and evaluate the following
equation:
x = a*a+2*a*b+b*b 
Display the result of ‘x’*/
{
	int a;
	int b;
	int x;
	
	cout<<"Enter the value of a:";
	cin>> a;
	cout<<"Enter the value of b:";
	cin>> b;
	cout<<"The value of x=a*a+2*a*b+b*b:"<<endl;
	x= a*a+2*a*b+b*b;
	cout<<"x="<<x;
	
	return 0;
}
