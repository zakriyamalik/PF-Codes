#include<iostream>
using namespace std;
const int SIZE = 6;
//void initialArry(int arr[]);
//void printarry(int arr[]);
//int Find2largest(int arr[]);
//void findMinMax(int arr[], int& min, int&  max);
//int searchData(const int arr[], int numElems, int key);
//int sortData(int arr[], char choice);
//void evensort(int arr[]);
//int searchData2(int arr[], int key2);
int CheckFrequency(int num[]);
void main()
{
	int arr[SIZE], p = 0, x, y, l = 0, n = 0, cho = 0, p = 0;
	int d;
	initialArry(arr);
	printarry(arr);
	Find2largest(arr);
	findMinMax( arr,x,y);
    int w=searchData( arr, l,n);
	cout << w;
	sortData(arr, cho);
	evensort(arr);
	searchData2( arr,  p);
	CheckFrequency(arr);
}
void initialArry(int arr[])
{
	for (int i = 0; i < SIZE ; i++)
	{
		cout << "Enter the values of array" << endl;
		cin >> arr[i];
	}
}
void printarry(int arr[])
{
	cout << "The array is";
	for (int i = 0; i < SIZE; i++) {
		
		{
			cout << i ;
		}
	}
	cout << endl;
}
int Find2largest(int arr[])
{
	int large1 = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > large1)
		{
			large1 = arr[i];
		}
	}
	int large2 = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != large1)
		{
			if (arr[i] > large2)
			{
				large2 = arr[i];
			}
		}
	}
	cout << "The second largest is " << large2 << endl;
	return large2;
}
void findMinMax(int arr[], int& min, int& max)
{
	int array[SIZE] = { 0 };
	int i;
	max = 0, min = 0;
	int size;
	cout << "Enter size of the array: ";
	cin >> size;
	cout << "\n Enter " << size << " elements in the array: ";
	for (i = 0; i < size; i++)
		cin >> array[i];
	max = array[0];
	min = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
	}
	cout << "\nMaximum element =" << max << "\n";
	cout << "Minimum element =" << min;
}
int searchData(const int arr[], int numElems, int key)
{
	int input[100], count, i, num;

	cout << "Enter Number of Elements in Array\n";
	cin >> count;

	cout << "Enter " << count << " numbers \n"; {

		for (i = 0; i < count; i++) {
			cin >> input[i];
		}

	}
	cout << "Enter a number to serach in Array\n";
	cin >> num;

	
	for (i = 0; i < count; i++) {
		if (arr[i] == num) {
			cout << "Element found at index ";
			return i;
		}
	}

	if (i == count) {
		return -1;
	}

}
int sortData(int arr[], char choice)
{
	char a, d;
	//int SIZE;
	cout << "\nEnter your choice pf sprting (a for ascending and d for decending) ";
	cin >> choice;
	/*cout << "Enter the size of the array";
	cin >> size;*/
	if (choice == 'a')
	{
		for (int i = 0; i < SIZE - 1; i++)
		{
			for (int j = i + 1; j < SIZE; j++)
			{
				if (arr[j] < arr[i])
				{
					int tem = arr[j];
					arr[j] = arr[i];
					arr[i] = tem;
				}
			}
		}cout << "Ascending :";
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else if (choice == 'd')
	{
		for (int i = 0; i < SIZE- 1; i++)
		{
			for (int j = i + 1; j < SIZE; j++)
			{
				if (arr[j] > arr[i])
				{
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		cout << "Decending : ";
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else
		cout << "Wrong input";
	return 0;
}
void evensort(int arr[])
{
	cout << "\nEven sort";
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 != 0)
			cout << arr[i] << " ";
	}cout << endl;
}
int searchData2(int arr[], int key2)
{
	cout << "\nEnter the key for search 2";
	cin >> key2;
	bool status = false;
	int half = SIZE / 2;
	if (arr[half] == key2)
	{
		cout << "Search is succesful and key is at index" << half << endl;
		status = true;
	}
	for (int i = 0; i < half - 1; i++)
	{
		if (arr[i] == key2)
		{
			cout << "Search was succesful in the first half and key is at index" << i << endl;
			status = true;
			break;
		}
	}
	for (int i = half + 1; i < SIZE; i++)
	{
		if (arr[i] == key2)
		{
			cout << "Search was sucessful in the second half and key is at index" << i << endl;
			status = true;
			break;

		}
	}
	if (status == false)
		cout << "The search was not successful " << endl;
	return 0;
}
int CheckFrequency(int number[])
{
	cout << "\nEnter values for an array to check Frequency (size =6):\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> number[i];
	}
	cout << "Frequency \n";
	for (int i = 0; i < SIZE; i++)
	{
		int counter = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (number[i] == number[j])
			{
				counter++;
			}
		}
		cout << number[i] << "occurs" << counter << "times" << endl;
	}
	return 0;
}
