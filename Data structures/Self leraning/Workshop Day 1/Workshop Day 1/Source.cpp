#include<iostream>

using namespace std;

int main ()
{
	int X;
	string pass;
	cout <<  "What is your marks:";
	cin >> X;
	
	if (X > 75)
	{
		pass = "A";
	}
	else if (X > 65)
	{
		pass = "B";
	}
	else if (X > 55)
	{
		pass = "C";
	}
	else 
	{
		pass = "FAIL";
	}
	cout << "Your result is :" << pass << endl;
	
	return 0;
}