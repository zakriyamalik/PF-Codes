//#include<iostream>
//#include<string>
//using namespace std;
//const int length = 6;
//const int p = 100;
//const int Size = 6;
//void upperhalf();
//void MinLenght(char str[]);
//void updateArray(char str[]);
//void ReverseString();
//void trace();
//void task_st();
//void Rotate(int arr[], int n);
//void task_7();
//string PhoneLookup(string name, string Names[], string Numbers[], int SIZE);
//void calstrlength(char array[] ,int SIZE);
//void printunique(int array1[], int length);
//int main()
//{
//	int array1[length],SIZE=0,n=0;
//	char array[length];
//	int arr[length];
//	char str[p];
//	string name, Names[Size], Numbers[Size], int SIZE;
//	//Rotate(arr, length);
//	//trace();
//	//upperhalf();
//	//ReverseString();
//	MinLenght(str);
//	task_st();
//	task_7();
//    PhoneLookup( name,  Names, Numbers, SIZE);
//	//updateArray(str);
//	//printunique(array1, length);
//   //
//	//calstrlength( array, SIZE);
//	
//}
//	/*void printunique(int array1[], int length)
//	{
//		cout << "Enter the array";
//		for (int i = 0; i < length; i++)
//		{
//			cin >> array1[i];
//		}
//		cout << "Original array: ";
//
//		for (int i = 0; i < length; i++)
//		{
//			cout << array1[i] << " ";
//		}
//		cout << "\nUnique elements of the said array: ";
//		for (int i = 0; i < length; i++)
//		{
//			int count = 0;
//			for (int j = 0; j < length; j++)
//			{
//				if (array1[i] == array1[j])
//				{
//					count++;
//
//				}
//			}
//			if (count == 1)
//			{
//				cout << array1[i] << " ";
//			}
//		}
//	}*/
//	//void calstrlength(char array[], int size)
//	//{
//	//	const int SIZE = 100;
//	//	char x = ' ';
//	//	char str[SIZE];
//	//	cout << "Enter the string";//l227889
//	//	cin.getline(str, SIZE);
//	//	cout << "String is" << endl;
//	//	int j = 0;
//	//	for (int i = 0; str[i] != '\0'; i++)
//	//	{
//
//	//		if (str[i]!=' ')
//	//		{
//	//			j++;
//	//		}
//	// }
//	// cout<<"\nThe number of Characters are : "<<j<<endl;
//	// }
////void MinLenght(char str[])
////{
////	const int size = 100;
////	int k = 0, min = size;
////	cout << "ENTER SENTENCE : ";
////	cin.ignore();
////	cin.getline(str, size);
////	for (int i = 0; i < size; i++)
////	{
////		if (str[i] != ' ' && str[i] != '.' && str[i] != '\0')
////		{
////			k++;
////			continue;
////		}
////		cout << k << " ";
////		if (k < min)
////		{
////			min = k;
////		}
////		k = 0;
////		if (str[i] == '\0')
////		{
////			break;
////		}
////	}
////	cout << "\nMinimum Lenght: " << min;
////}
//	/* void updateArray(char str[])
//	 {
//	 char c;
//	 int z=0;
//	 cout<<"Enter the character: ";
//	 cin >> c;
//	 cin.ignore();
//	 cout<<"Enter sentence :";
//	 cin.getline(str,p);
//	 for(int i=0;i<p;i++)
//	 {
//	 if(str[i] != c)
//	 {
//	 str[z++]=str[i];
//	 }
//	 }
//	 cout<<"The array that is updated"<<str;
//	 }*/
//	 
////void Rotate(int arr[],  int n)
////{
////	cout << "Enter the value of array" << endl;
////	for (int i = 0; i < n; i++) {
////		cin>> arr[i] ;
////	}
////	int d = 0;
//// cout<<"Enter the value of d"<<endl;
//// cin>>d;
////	int temp[length];
////	int k = 0;
////	for (int i = d; i < n; i++) {
////		temp[k] = arr[i];
////		k++;
////	}
////	for (int i = 0; i < d; i++) {
////		temp[k] = arr[i];
////		k++;
////	}
////	for (int i = 0; i < n; i++) {
////		arr[i] = temp[i];
////	}
////	for (int i = 0; i < n; i++) {
////		cout << arr[i] << " ";
////	}
////}
////void trace()
////{
////	const int size = 3;
////	int r = 3,c=3;
////
////	int arr[size][size];
////	int sum = 0;
////	for (int i = 0; i < size; i++)
////	{
////		for (int j = 0; j < size; j++)
////		{
////			cout << "\nEnter the values for [ " << i << " ] " << j<<" ] ;";
////			cin >> arr[i][j];
////		}
////	}
////	cout << "Matrix : \n ";
////	for (int i = 0; i < r; i++)
////	{
////		for (int j = 0; j < c; j++)
////			cout << arr[i][j] << "  ";
////		cout << "\n ";
////	}
////	for (int i = 0; i < size; i++)
////	{
////		for (int j = 0; j < size; j++)
////		{
////			if (i == j)
////				sum = sum + arr[i][j];
////		}
////	}
////
////	//Print out the Result
////	cout << "\nAddition of Diagonal Array Elements in the Matrix is: " << sum;
////}
////void lookupName()
////{
////	char str1, str2;
////
////}
//void task_7()
//{
//const int SIZE = 4;
//string str;
//char c = 'y';
//string Names[SIZE] = { "William James","John Des","AJ Baba","Lala Imran" };
//string Numbers[SIZE] = { "333-5564","333-6191","1223-3432","5435-4334" };
//while (c == 'y' || c == 'Y')
//{
//	cout << "\nEnter Name:";
//	getline(cin, str);
//	if (PhoneLookup(str, Names, Numbers,SIZE) != "Not Found")
//	{
//		cout << "Phone number:" << PhoneLookup(str, Names, Numbers,SIZE) << endl;
//
//	}
//	else
//	{
//		cout << "Phone Number Not Found";
//	}
//
//
//	cout << endl << "Do you wanna Continue? Enter Y or y to Continue...";
//	cin >> c;
//	cin.ignore();
//}
//
//
//}
//string PhoneLookup(string name, string Names[], string Numbers[],int SIZE)
//{
//
//	int k;
//
//
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (Names[i] == name)
//		{
//			k = i;
//			return Numbers[k];
//
//		}
//	}
//	return "Not Found";
//
//
//}
////void upperhalf()
////{
////	const int size = 10;
////	int array[size][size];
////	int k;
////	int i;
////	int j;
////
////
////	cout << "Enter the size of the Matrix :";
////	cin >> k;
////
////	cout << endl << "Enter the values of  row " << endl;
////
////	for (i = 0; i < k; i++)
////		for (j = 0; j < k; ++j)
////			cin >> array[i][j];
////
////	cout << endl;
////
////	for (i = 0; i < k; ++i)
////	{
////		for (j = 0; j < k; ++j)
////		{
////			if (i <= j)
////				cout << array[i][j] << " ";
////
////			else
////				cout << "  ";
////		}
////
////		cout << endl;
////	}
////	
////}
////void ReverseString()
////{
////	string str;
////			int k;
////		cout << "Enter the string to be reversed";
////		getline(cin, str); 
////		k = str.length();
////		int n = k - 1;
////		int i = 0;
////		char temp;
////		while (i <= n)
////		{
////			temp = str[i];
////			str[i] = str[n];
////			str[n] = temp;
////			n--;
////			i++;
////		}
////		cout << "The reversed string is" << str;
////	
////}
////void task_st()
////{
////	const int SIZE = 100;
////	char arr[SIZE];
////	cout << "Enter a sentence:";
////
////	cin.getline(arr, SIZE);
////	int i;
////
////	for (i = 0; arr[i] != '\0'; i++)
////	{
////
////
////	}
////	cout << "\nThe Number of Characters:" << i << endl;
////}
