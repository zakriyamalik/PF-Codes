//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main()
//{
//
//	char arr1[11][11] = { 
//		{ 'a' , 's' , 'j' , 'l' , 'i' , 'x' , 'a' , 'p' , 'e' } ,
//		{'j' ,  'h' , 'b' , 'x' , 'e' , 'e' , 'n' , 'p' , 'p' } , 
//		{ 'h' , 'o' , 't' , 't' , 'h' , 'b' , 's' , 'w' , 'y' } , 
//		{ 'r' , 'o' , 'a' , 'i' , 'n' , 'u' , 'y' , 'z' , 'h' } ,
//		{ 'p' , 't' , 'f' , 'x' , 'r' , 'd' , 'z' , 'k', 'q' } , 
//		{ 't' , 'p' , 'n' , 'l' , 'q' , 'o' , 'y' , 'j' , 'y' } ,
//		{ 'a' , 'n' , 'h' , 'a' , 'p' , 'f' , 'g' , 'b' , 'g' } , 
//		{ 'h' , 'x' , 'a' , 's' , 'h' , 'w' , 'a' , 'b' , 's' } , 
//		{ 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'm' , 'c' , 'e' } , 
//		{ 'x' , 'y' , 'e' , 'u' , 'p' , 'd' , 'q' , 'b' , 'a' } };
//	cout << " grid: " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "Enter word : ";
//	const int SIZE = 5;
//	char ww[10];
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> ww[i];
//	}
//	bool flag, vert;
//	flag = vert = true;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (arr1[i][j] == ww[0])
//			{
//
//				if (arr1[i + 1][j] == ww[1] && arr1[i + 2][j] == ww[2] && arr1[i + 3][j] == ww[3] && arr1[i + 4][j] == ww[4])
//				{
//					vert = true;
//					flag = true;
//				}
//				else if (arr1[i][j + 1] == ww[1] && arr1[i][j + 2] == ww[2] && arr1[i][j + 3] == ww[3] && arr1[i][j + 4] == ww[4])
//				{
//					flag = true;
//					vert = false;
//				}
//				else
//				{
//					flag = false;
//				}
//			}
//		}
//	}
//	if (flag == true && vert == true)
//	{
//		cout << "\nWord found vertically";
//	}
//	else if (flag == true && vert == false)
//	{
//		cout << "\nWord found horizontally";
//	}
//	else
//	{
//		cout << "\nWord not found";
//	}
//}