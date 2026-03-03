#include<iostream>

using namespace std;
int factorial(int n) {

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
		int main(){
			while (1) {
				int n;
				cout << "ENTER VALUE N:";
				cin >> n;
				int fac = factorial(n);
				
				cout << fac;
				cout << endl;
			}
			return 0;
		};