//#include<iostream>
//#include<fstream>
//const int Size = 11;
//using namespace std;
//int main()
//{
//	char pro[Size][Size];
//	float p[Size];
//	int q[Size];
//	string s;
//	int i=0;
//	while (s[i] != '\0')
//	{
//		i++;
//	}
//	int code, q_b;
//	float a_p = 0;
//	int a;
//	ifstream MYFILE;
//	MYFILE.open("Inventory.txt", ios::in);
//	if (MYFILE.is_open())
//	{
//		for (int i = 0; (!MYFILE.eof()); i++)
//		{
//			MYFILE >> pro[i];
//			MYFILE >> q[i] >> p[i];
//		}
//	}
//	MYFILE.close();
//	cout << "Code\tName\tQuantity\tPrice" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i + 1 << "  " << pro[i] << "\t";
//		cout << q[i] << "  " << p[i] << endl;
//	}
//	
//	cout << "Enter the code for product" << endl;
//	cin >> code; while (code > 10 || code < 1)
//	{
//		cout << "Invalid input " << endl;
//		cout << "Enter code again" << endl;
//		cin >> code;
//	}
//	cout << "Now enter the quantity for" << pro[code] << "\t" << endl;
//	cin >> q_b;
//	while (q_b == 0 || q_b > q[code])
//	{
//		cout << "Invalid" << endl;
//		cout << "Enter again" << endl;
//		cin >> code;
//	}
//	q[code] =q[code] - q_b;
//	a_p = a_p + q_b * p[code];
//	ofstream OOFILE;
//	OOFILE.open("inventory.txt", ios::out);
//	if (OOFILE.is_open())
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			OOFILE << pro[i] << " " << q[i] << " " << p[i];
//		}
//	}
//	int choice=1;
//	while (choice == 1)
//	{
//		cout << "If you want to by again enter 0 and if dont enter 1" << endl;
//		cin >> choice;
//		while ((choice != 1 && choice != 0))
//		{
//			cout << "Invalid input" << endl;
//			cout << "Enter again" << endl;
//			cin >> choice;
//		}
//		cout << "Code\tName\tQuantity\tPrice" << endl;
//			for (int i = 0; i < 10; i++)
//			{
//				cout << i << "\t" << pro[i] << "\t";
//				cout << q[i] << "\t" << p[i] << "\n";
//			}
//	}
//	OOFILE.open("inventory.txt", ios::out);
//	if (OOFILE.is_open())
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			OOFILE << pro[i] << " ";
//			OOFILE << q[i] << " " << p[i];
//		}
//		cout << "Bill is " << a_p;
//		system("pause");
//		return 0;
//	}
//}
//	