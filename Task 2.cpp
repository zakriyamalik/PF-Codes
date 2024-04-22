//#include <iostream>
//#include <fstream>
//using namespace std;
//int main() {
//	fstream myfile;
//	myfile.open("input.txt", ios::out);
//	if (myfile.is_open()) {
//		myfile << "The man in black fled across the desert, and the gunslinger followed";
//	}
//	myfile.close();
//	char arr_1[50];
//	char arr_2[50];
//	int option;
//	char characters;
//	cout << "1. Encrypt\n";
//	cout << "2. Decrypt\n";
//	cout << "Enter 1 or 2" << endl;
//	do {
//		cin >> option;
//		if (option != 1 && option != 2)
//			cout << "Enter again" << endl;
//	} while (option < 1 || option>2);
//
//	if (option == 1) {
//		myfile.open("input.txt", ios::in);
//		if (myfile.is_open()) {
//			int i = 0;
//			while (!myfile.eof()) {
//				myfile >> characters;
//				arr_1[i] = characters;
//				i++;
//			}
//			myfile.close();
//		}
//		for (int i = 0; i < 50; i++) {
//			cout << arr_1[i];
//		}
//		cout << endl;
//		cout << "After encryption:" << endl;
//		for (int i = 0; i < 50; i++) {
//			arr_1[i]++;
//		}
//		for (int i = 0; i < 50; i++) {
//			cout << arr_1[i];
//		}
//		cout << endl;
//		ofstream file("encrypt.txt");
//		if (file.is_open()) {
//			for (int i = 0; i < 30; i++) {
//				file << arr_1[i];
//			}
//			file.close();
//		}
//
//	}
//	else {
//		fstream file2;
//
//		file2.open("encrypt.txt", ios::in);
//
//		int i = 0;
//		while (!file2.eof()) {
//			file2 >> characters;
//			arr_2[i] = characters;
//			cout << characters;
//			i++;
//		}
//
//		file2.close();
//
//		cout << endl;
//
//		cout << "Array after decryption:" << endl;
//
//		for (int i = 0; i < 50; i++)
//			arr_2[i]--;
//		for (int i = 0; i < 50; i++)
//			cout << arr_2[i];
//		cout << endl;
//		ofstream file3("decrypt.txt");
//		if (file3.is_open()) {
//			for (int i = 0; i < 50; i++)
//				file3 << arr_2[i];
//			file3.close();
//		}
//	}
//
//
//	return 0;
//}