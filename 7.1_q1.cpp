#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter value of A : ";
	cin >> a;
	cout << "Enter value of B : ";
	cin >> b;
	
	try
	{
		if(b == 0)
		{
			throw b;
		}
		
		c = a / b;
		cout << "Result : " << c;
		
	}
	
	catch(...)
	{
		cout << "Can not divided by Zero";
	}
	
	return 0;
}
