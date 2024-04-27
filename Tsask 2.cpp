//#include<iostream>
//using namespace std;
//void upperCase(char array[], int);
//int main()
//{
//	char chr[100];
//	int z = 0;
//	cout << "Enter the required string " << endl;
//	cin.getline(chr, 100);
//	cout << "Calculate size" << endl;
//	for (int i = 0; chr[i] != '\0'; i++)
//	{
//		z++;
//	}
//	upperCase(chr, z);
//	system("pause");
//	return 0;
//
//}
//char change(char d)
//{
//	char c = d - 32;
//	d = c;
//	return d;
//}
//void upperCase(char array[],int z)
//{
//	int x = ' ',i=0;
//	array[0] = change(array[0]);
//	for(int i=1;array[i] != '\0'; i++)
//	{
//		if (array[i] == x)
//		{
//			array[i - 1] = change(array[i - 1]);
//			array[i + 1] = change(array[i + 1]);
//		}
//		if (array[i]==z-1)
//		{
//			array[i - 1] = change(array[i - 1]);
//		}
//	} 
//	
//	cout << "The array is ";
//	for (int i = 0; i < z; i++)
//	{
//		cout << array[i];
//	}
//	cout << endl << endl;
//}