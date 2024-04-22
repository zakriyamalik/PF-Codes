//#include<iostream>
//const int r1 = 7;
//const int c1 = 7;
//const int r2 = 3;
//const int c2 = 3;
//const int r3 = 5;
//const int c3 = 5;
//using namespace std;
//int main()
//{
//	int img[r1][c1], sum = 0;
//	int filter[r2][c2];
//	int resImg[r3][c3];
//	cout << "Enter the values in array of image" << endl;
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c1; j++)
//		{
//			cin >> img[i][j];
//		}
//	}
//	cout << "The values in array of image" << endl;
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c1; j++)
//		{
//			cout<< img[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	cout << "Enter the values in array of filter" << endl;
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			cin >> filter[i][j];
//		}
//	}
//	cout << "The values in array of filter" << endl;
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			cout<< filter[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	
//	for (int i = 1; i < r1; i++)
//	{
//		for (int j = 1; j < r1; j++)
//		{
//			int z = i - 1;
//			int q = j - 1;
//			for (int a = 0; a < r2; a++)
//			{
//				for (int b = 0; b < r2; b++)
//				{
//					sum += filter[a][b] * img[z][q];
//					q++;
//				}
//				z++;
//				q = j - 1;
//			}
//			resImg[i - 1][j - 1] = sum;
//			sum = 0;
//		}
//	}
//	cout << "The resulting array is" << endl;
//	for (int i = 0; i < r3; i++)
//	{
//		for (int j = 0; j < c3; j++)
//		{
//			cout << resImg[i][j]<<" ";
//		}
//		cout << endl;
//	}
//		system("pause");
//	return 0;
//}