#include<iostream>
using namespace std;

int main () {
	
// Deklarasi Variable Dan Melakukan Input
	int n1 = 0,n2 = 1, limit, count = 1, fibo = n1+n2, isPrima = 0;
	
	cout<<"===== PROGRAM ANGKA FIBONACCI ====="<<endl;
	cout<<"Masukan Nilai N \t= ";
	cin>>limit;
	cout<<endl;
	
	
	// Perulangan Untuk Proses Perhitungan Bilangan Fibonacci
	cout<<"Fibonacci Sequence :"<<endl;
	while (count < limit) {
		cout<<fibo<<", ";
		fibo = n1 + n2;	
		n1 = n2;
		n2 = fibo;
		
		count++;  
	}
	cout<<fibo<<", ";
	cout<<endl<<endl;
	cout<<"Hasil Akhir Nilai Fibonacci Ke "<<limit<<" Adalah "<<fibo<<endl;


	// Identifikasi Apakah Bilangan Fibonacci Adalah Prima ?
for (int x = fibo; x >= 1; x--) {
		if (fibo % x == 0) {
			isPrima++;	
		}
	}
	
	if (isPrima > 2) {
		cout<<fibo<<" Bukan Merupakan Bilangan Prima"<<endl;
	} else {
		cout<<fibo<<" Merupakan Bilangan Prima"<<endl;
	}
	
}
