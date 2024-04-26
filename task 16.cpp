#include<iostream>
using namespace std;
int main() {

	int val, small,larg;
	int m=0;
	cout << "Enter a value:" << endl;
	cin >> val;
	small = val;
	larg = val;
	m = val;
	while (val != -1) {

			if ( val> larg)
			{
				larg = val;
			}
			if (val< small)
			{
				small = val;
			}
			cout << "Enter a value:" << endl;
			cin >> val;
		
		
		
	}
	cout << "Largest number is" << larg;
	cout << "Smallest number is" << small;
	return 0;
}