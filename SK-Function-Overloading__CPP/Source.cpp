/* ------------------------------- */
/* Penggunaan function overloading */
/* ------------------------------- */

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int hitung(int b);
long hitung(long c);
float hitung(float d);

void main() {
	cout << "Hasilnya Fungsi overload -1 : ";
	cout << hitung(4) << endl;
	cout << "Hasilnya Fungsi overload -2 : ";
	cout << hitung(2) << endl;
	cout << "Hasilnya Fungsi overload -3 : ";
	cout << hitung(3) << endl;

	_getch();
}

int hitung(int b) {
	return(b * b);
}

long hitung(long c) {
	return(c * c);
}

double hitung(double d) {
	return(d * d);
}