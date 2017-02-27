#include <iostream>
using namespace std;
//I.S Program Memasukan Data Sesuai Type
//F.S Program Menampilkan data sesuai type

	//Hasil Output 1
	void print(int i) {
	cout << "Printing int: " << i << endl;
	}
	//Hasil Output 1
	void print(double f) {
	cout << "Printing float: " << f << endl;
	}
	//Hasil Output 1
	void print(string c) {
	cout << "printing character: " << c << endl;
	}
//Prototype
void print(int i);
void print(double f);
void print(string c);

int main(void) {
 
	//Hasil Input 1
	print(5);
	//Hasil Input 2
	print(500.263);
	//Hasil Input 3
	print("Hellp C++");

	return 0;
}