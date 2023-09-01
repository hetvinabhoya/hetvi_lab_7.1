#include<iostream>
using namespace std;

int main()
{
	int a1,a2;
	
	cout << "Enter Age : ";
	cin >> a1;
	
	try
	{
		if(a1 < 18)
		{
			throw a1;
		}
		
		cout << "Able to Vote...";
	}
	
	catch(...)
	{
		cout << "Not able to Vote...";
	}
	
	return 0;
	
}
