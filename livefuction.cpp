#include <iostream>
using namespace std;
/*
Program kalkulator
{T.S : Program menunggu masukan nilai}
{F.S : Hail perhitungan ditampilkan}
*/
//prototype
int hasilTambah (int a, int b);
int hasilKurang (int a, int b);
int hasilKali (int a, int b);
int hasilbagi (int a, int b);

int main () { 
	int a, b;

	//algoritma
	//hasil untuk input 
	cout << "Masukan nilai a: ";
	cin >> a;
	cout << "Masukan nilai b: ";
	cin >> b;
 
	cout << endl; 
	cout << "Hasil pertambahan a dan b : " << hasilTambah (a, b);
 
	cout << endl; 
	cout << "Hasil Pengurangan a dan b : " << hasilKurang (a, b);
 
	cout << endl;  
	cout << "Hasil Perkalian a dan b : " << hasilKali (a, b);
 
	cout << endl; 
	cout << "Hasil Pembagian a dan b : " << hasilbagi (a, b);

	return 0;
}

int hasilTambah (int a, int b){
	int hasil;
	hasil = a + b;
	return hasil;
}

int hasilKurang (int a, int b){
	return a - b;
}

int hasilKali (int a, int b){
	return a * b;
}

int hasilbagi (int a, int b){
	int hasil;
	hasil = a / b;
	return hasil;
}