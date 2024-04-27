//#include <iostream>
//#include <fstream>
//const int Size = 6;
//using namespace std;
//int main()
//{
//	int arr[Size],count1=0,count2=0,num;
//	cout << "Enter the values in array" << endl;
//	for (int i = 0; i < Size; i++)
//	{
//		cin >> arr[i];
//	}
//	fstream myfile;
//	myfile.open("Numbers", ios::out);
//	if (myfile.is_open())
//	{
//		for (int i = 0; i < Size; i++)
//		{
//			myfile << arr[i] << " ";
//		}
//		myfile << endl;
//		myfile.close();
//	}
//	myfile.open("Numbers.txt", ios::in);
//	int i = 0;
//	while (!myfile.eof())
//	{
//		myfile >> num;
//		arr[i] = num;
//		cout << num << endl;
//		i++;
//	}
//	myfile.close();
//
//	ofstream file1("even.txt");
//	ofstream file2("odd.txt");
//
//	for (int i = 0; i < Size; i++) {
//		if (arr[i] % 2 == 0) {
//			file1 << arr[i] << endl;
//			count1++;
//		}
//		else {
//			file2 << arr[i] << endl;
//			count2++;
//		}
//	}
//	file1.close();
//	file2.close();
//	cout << "Number of even numbers in 'even.txt' file are: " << count1 << endl;
//	cout << "Number of odd numbers in 'odd.txt' file are: " << count2 << endl;
//
//	system("pause");
//	return 0;
//}