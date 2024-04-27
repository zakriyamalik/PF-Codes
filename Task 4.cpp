//#include<iostream>
//using namespace std;
//int main()
//{
//	const int m = 3;
//	const int d = 5;
//	int arr[m][d], sum = 0, avg, min = 0, max = 0;
//	cout << "Enter the values in an array" << endl;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			cout << "Enter the food of monkey [ " << i+1 << " ] in day [ " << j+1 << " ]\t";
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			sum = sum + arr[i][j];
//		}
//	}
//	avg = sum / (m * d);
//	min = arr[0][0];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			
//			if ( min>arr[i][j])
//			{
//				min = arr[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for(int j=0;j<d;j++)
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//	}
//	cout << "Avg amount of food eaten by the monkeys" <<avg<< endl;
//	cout << "The least amount of food eaten by a monkey is " <<min<< endl;
//	cout << "The maximum amount of food eaten by a monkey is " <<max<< endl;
//	system("pause");
//	return 0;
//}