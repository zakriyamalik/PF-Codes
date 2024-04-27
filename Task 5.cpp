//#include<iostream>
//const int c = 3;
//const int r = 30;
//using namespace std;
//int main()
//{
//	char chr[c][r];
//	int cr=0, cs=0, cc=0;
//	cout << "Enter weather of the days" << endl;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			cout << "\nEnter weather of day that should be either 'S' for sunny 'C' for cloudy or 'R' for rainy [ " << j + 1 << " ] of the month [ " << i + 1 <<" ]   : \t";
//			cin >> chr [c][r];
//		}
//	}
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			if (chr[i][j] == 'S')
//			{
//				cs++;
//			}
//			else if (chr[i][j] == 'C')
//			{
//				cc++;
//			}
//			else if (chr[i][j] == 'R')
//			{
//				cr++;
//			}
//			else
//			{
//				cout << "Invalid input";
//			}
//		}
//	}
//	cout << "The numbe of rainy days are" << cr << endl;
//	cout << "The numbe of sunny days are" << cs << endl;
//	cout << "The numbe of cloudy days are" << cc << endl;
//	cr = 0;
//	int max=0, ind=0;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//			if (chr[i][j] == 'R')
//			{
//				cr++;
//			}
//		}
//		if (cr > max)
//		{
//			max = cr;
//			ind = i;
//		}
//	}
//	cout << "The maximum rainy days are in month " << ind + 1;
//
//}
