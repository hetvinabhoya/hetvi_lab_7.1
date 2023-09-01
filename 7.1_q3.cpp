#include<iostream>
using namesoace std;

bool upper(const string & pass)
{
	char C;
	
	for(C : pass)
	{
		if(C>='A' && C<='Z')
		{
			return true;
		}
	}
	return false;
	
}

int main()
{
	string pass;
	
	cout << "Enter Password : ";
	cin >> pass;
	
	if(upper(pass))
	{
		cout << "Valid Password" << endl;
	}
	else
	{
		cout << "Password doesn't contains uppercase letter" << endl;
	}
	
	return 0;
	
}
