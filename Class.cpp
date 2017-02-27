#include <iostream>
using namespace std;
//I.S Program Memasukan Data Sesuai Type
//F.S Program Menampilkan data sesuai type
//Class
class printData {
	public:
	//Hasil Output 1
	void print(int i) {
	cout << "Printing int: " << i << endl;
	}

	//Hasil Output 2
	void print(double f) {
	cout << "Printing float: " << f << endl;
	}

	//Hasil Output 3
	void print(string c) {
	cout << "printing character: " << c << endl;
	}
};

int main(void) { 

	printData pd;

	//Hasil Input 1
	pd.print(5);

	// Hasil Input 2
	pd.print(500.263);

	// Hasil Input 3
	pd.print("Hellp C++");

	return 0;
}