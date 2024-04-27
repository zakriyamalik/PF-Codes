//#include<iostream>
//const int r= 2;
//const int c = 2;
//void inverse(int arr[][c], float det1);
//using namespace std;
//int main()
//{
//	int arr[r][c];
//	float det;
//	cout << "Enter the values in matrix"<<endl<<endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	cout << "The values in matrix are" << endl;;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//			cout << endl;
//		
//	}
//	det = arr[0][0] * arr[1][1] - arr[1][0] * arr[0][1];
//	//cout << "det" << det << endl;
//	float det1 = 1 / det;
//	//cout << "det1" << det1;
//
//	inverse( arr, det1);
//	system("pause");
//	return 0;
//}
//void inverse(int arr[][c], float det1)
//{
//	int inv = 0, adj = 0, temp = 0;
//	temp = arr[0][0];
//	arr[0][0] = arr[1][1];
//	arr[1][1] = temp;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (i != j)
//			{
//				arr[i][j] *= -1;
//			}
//		}
//	}
//	cout << "The inverse is " << endl << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}