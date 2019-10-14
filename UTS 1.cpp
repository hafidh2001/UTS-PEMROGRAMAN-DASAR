#include <iostream>

using namespace std ;

//SOAL : BERAPAKAH YANG HARUS DI BAYAR HAFIDH APABILA DIA MEMBELI "BAJU MERK DENIM UKURAN S" ?

int main() {

	system ("title HAFIDH AHMAD FAUZAN") ;
	
	float a, b, c ;
	cout << "MERK BAJU\n" ;
	cout << "1. Denim\n2. Quicksilver\n " ;
	cout << "Pilih Merk baju = " ;
	cin >> a ;
	
	cout << "\n\n " ;
	cout << "UKURAN BAJU\n a. S\nb. M\nc. L\n " ;
	cout << "Pilih Ukuran Baju =" ;
	cin >> b ;
	
	if (a==1) {
		if (b==a) {
			cout <<"Harga = 20.000" ;
		}
		
		else if (b==b) {
			cout <<"Harga = 30.000" ;
		}
		
		else if (b==c) {
			cout <<"Harga = 40.000" ;
		}
	}
	
	else if (a==2) {
		if (b==a) {
			cout <<"Harga = 22.000" ;
		}
		
		else if (b==b) {
			cout <<"Harga = 32.000" ;
		}
		
		else if (b==c) {
			cout <<"Harga = 42.000" ;
		}
	}
	
	return 0 ;
}
