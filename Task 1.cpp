//#include <iostream>
//#include <fstream>
//using namespace std;
//int main() {
//    int arr[10];
//    fstream myfile;
//    int temp;
//    int number;
//    myfile.open("numbers.txt", ios::out);//write
//    if (myfile.is_open()) {
//        cout << "Enter 10 numbers" << endl;
//        for (int i = 0; i < 10; i++) {
//            cin >> temp;
//            myfile << temp << endl;
//
//        }
//        myfile.close();
//    }
//    myfile.open("numbers.txt", ios::in);
//    if (myfile.is_open()) {
//        int i = 0;
//        while (!myfile.eof()) {
//            myfile >> number;
//            arr[i] = number;
//            i++;
//        }
//        myfile.close();
//    }
//    int even = 0, odd = 0;
//    ofstream oddFile("odd.txt");
//    ofstream evenFile("even.txt");
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] % 2 == 0) {
//            evenFile << arr[i] << endl;
//            even++;
//        }
//        else {
//            oddFile << arr[i] << endl;
//            odd++;
//
//        }
//    }
//    oddFile.close();
//    evenFile.close();
//    cout << "Even numbers: " << even << endl;
//    cout << "Odd numbers: " << odd << endl;
//
//    system("pause");
//    return 0;
//    
//}