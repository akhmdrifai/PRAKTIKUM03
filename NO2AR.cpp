#include <iostream>

using namespace std;

int main (int argc, char** argv){
	int panjang, lebar, luas, pilihan, alas, tinggi;
	
	cout << "Pilihan Hitungan\n";
	cout << "1.Persegi Panjang\n";
	cout << "2.Segitiga\n";cin >>pilihan;
	
	switch(pilihan){
		case 1:
			cout <<"Masukan Panjang =";cin>>panjang;
			cout <<"Masukan Lebar =";cin>>lebar;
			luas =panjang * lebar;
			cout<<"Luas Persegi Panjang="<<luas<<"\n";
			break;
			case 2:
			cout<<"Masukan Panjang Alas Segitiga=";cin>>alas;
			cout<<"Masukan Tinggi Segitiga=";cin>>tinggi;
			luas=0.5*alas*tinggi;
			cout<<"Luas Segitiga ="<<luas<<"\n";
	}
}
