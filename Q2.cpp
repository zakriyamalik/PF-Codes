//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	
//	ofstream myfiler1("file1.txt", ios::in);
//	ifstream myfilew1("file1.txt", ios::out);
//	ofstream myfiler2("file2.txt", ios::in);
//	ifstream myfilew2("file2.txt", ios::out);
//	ofstream myfilew3("FinalFile,txt", ios::out);
//	//myfiler1.open("file1.txt");
//	myfilew1.open("file1.txt");
//	//myfiler2.open("file2.txt");
//	myfilew2.open("file2.txt");
//    myfilew3.open("FinalFile,txt");
//	char a1[6][6],
//		a2[6][6];
//	if (myfiler1.is_open())
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				myfilew1 >> a1[i][j];
//				myfilew2 >> a2[i][j];
//			}
//		}
//	cout << "File 1\n\n";
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			cout << a1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "\n\n";
//	cout << "File 2 :\n\n";
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			cout << a2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "\nResult :\n";
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (a1[i][j] == a2[i][j])
//			{
//				cout << a1[i][j] << " ";
//				myfilew3 << a1[i][j] << " ";
//			}
//			else
//			{
//				myfilew3 << a1[i][j] << " " << a2[i][j] << " ";
//				cout << a1[i][j] << " " << a2[i][j] << " ";
//			}
//		}
//	}cout << endl;
//	myfiler1.close();
//	myfilew1.close();
//	myfiler2.close();
//	myfilew2.close();
//	myfilew3.close();
//
//}