#include<iostream>
#include<string>
using namespace std;
bool PalindromeString(char arr[], int size);
int main()
{





}
bool PalindromeString(char arr[], int size)
{
	string str;
			int k,flag;
		cout << "Enter the string to be reversed";
		getline(cin, str);
		k = str.length();
		int i = 0;
		for (i = 0; i < k; i++) {
			if (str[i] != str[k - i - 1]) {
				
				return true;
			}
			return false;


}