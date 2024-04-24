//#include <iostream>
//using namespace std;
//const int SIZE = 6;
//int BinarySearch(int arr[], int key);
//
//    int main()
//    {
//        
//        int SIZE1 = SIZE - 1;
//        int temp, i, ind_sm=0,key;
//        int arr[SIZE];
//        for (int i = 0; i < SIZE; i++)
//        {
//            cout << "\nEnter Value of Array[" << i << "]:";
//            cin >> arr[i];
//        }
//
//        
//        int size1 = SIZE - 1;
//        int size2 = SIZE - 2;
//        
//        //in bubble sort, the outer iterations for the whole array are equal to the number of values involved.
//        for (int i = 0; i <= size1; i++)
//        {
//            for (int j = 0; j <= size2; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                {
//                    temp = arr[j + 1];
//                    arr[j + 1] = arr[j];
//                    arr[j] = temp;
//                }
//
//            }
//            size2--;// After first iteration, the max value will automatically be stored at last index.
//            //after 2nd iteration, 2nd lrg will be stored at 2nd last index and so on. So we dont need to check them again again, so we are doing size2-- because we dont want compiler to check them without need.
//        }
//        cout << "\nSorted Array: ";
//        for (int i = 0; i < SIZE; i++)
//        {
//            cout << arr[i]<<" ";
//        }
//        cout << endl;
//        cout << "Enter Key to find:";
//        cin >> key;
//        if (BinarySearch(arr, key) != -1)
//        {
//            cout << "Key found at index:" << BinarySearch(arr, key);
//        }
//        else
//        {
//            cout << "\nUnable to Find Key....";
//        }
//        system("pause");
//        
//
//
//
//
//    }
//
//    int BinarySearch(int arr[], int key)
//    {
//        int s = 0;
//        int e = SIZE;
//        int middle;
//        while (s < SIZE)
//        {
//            middle = (s + e) / 2;
//            if (key == arr[middle])
//            {
//                return middle;
//            }
//            else if (key < arr[middle])
//            {
//                e = middle-1;
//            }
//            else if (key > arr[middle])
//            {
//                s = middle+1;
//                e = SIZE;
//
//            }
//        }
//        return -1;
//    }
//