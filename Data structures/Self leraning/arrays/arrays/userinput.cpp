#include <iostream>

using namespace std;

int main()
{
	int A[6];

	cout << "Enter 6 numbers:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];

	}

	cout << "\nYou entered:\n"; 
	
	for (int i = 0; i < 5; i++) { cout << A[i] << " "; } 
	
	return 0;

}