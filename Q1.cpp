//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//    ofstream file1;
//    int i; 
//    int num[4][4] = { {3,5,7,9},{11,21,3,7},{7,11,6,2},{0,1,0,1} };
//
//    file1.open("Data.txt"); 
//    if (!file1)
//    {
//        cout << "Error: file could not be opened" << endl;
//    }
//    else
//    {
//        for (i = 0; i < 4; i++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                file1 << num[i][j] <<" ";
//            }
//            file1 << endl;
//        }
//        file1.close();
//    }
//    int new_arr[4][4];
//    file1.open("Data1.txt");
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            cout << num[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << "\n\n";
//    cout << "Now the transpose of matrix is \n\n";
//    file1.close();
//    ofstream file2;
//    int temp[4][4];
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            temp[j][i] = num[i][j];
//        }
//    }
//    file2.open("Data2.txt");
//    if (!file2)
//    {
//        cout << "Error: file could not be opened" << endl;
//    }
//    else
//    {
//        for (i = 0; i < 4; i++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                file2 << temp[i][j]<<" ";
//            }
//            file2 << endl;
//        }
//        file2.close();
//     }
//    file1.open("Data3.txt"); 
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            cout << temp[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    file1.close();
//}