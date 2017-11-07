#include <iostream>
using namespace std;

int main(){
	
	double berat, tinggi;
	
	cout <<"Perhitungan Berat Badan Ideal"<<endl;
	cout <<"Masukan Berat Badan Anda : ";
	cin >>berat;
	cout <<"Masukan Tinggi Badan Anda : ";
	cin >>tinggi;
	
		cout <<"Hasil Perhitungan Anda"<<endl;
	cout <<"Berat Badan Anda : "<<berat<<endl;
	cout <<"Tinggi Badan Anda : "<<tinggi<<endl;
	if (berat < tinggi/2.5){
		cout <<"Anda Underweight";
	}else if(tinggi/2.3 < berat){
		cout <<"Anda Overweight";
	}else if(tinggi/2.5 <= berat <= tinggi/2.3) {
		cout <<"Anda Normal";
	}
}
