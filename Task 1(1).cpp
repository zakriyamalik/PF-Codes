//#include<iostream>
//void encrypt(char a[],int );
//void decrypt(char a[],int);
//using namespace std;
//int main()
//{
//	char a[100];
//	cout << "Enter the  string you want to encrypt" << endl;
//	cin.getline(a, 100);
//	int k = 0;
//	cout << "Calculate the size\n";
//	for (int i = 0; a[i] != '\0'; i++)
//	{
//		k++;
//	}
//	
//	encrypt(a,k);
//	decrypt(a,k);
//	system("pause");
//	return 0;
//}
//void encrypt(char a[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		a[i] = a[i] + i;
//	}
//	cout << "The encrypted array is " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//
//}
//void decrypt(char a[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		a[i] = a[i] - i;
//	}
//	cout << "The decrypted array is " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//
//}
