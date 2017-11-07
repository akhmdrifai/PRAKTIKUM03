#include <iostream>
using namespace std;

int main(){
	int gp,jk;
	int lembur,gt,pajak,gk;
	
	cout<<"Perhitungan Gaji Karyawan"<<endl;
	cout<<"Masukan Gaji Pokok Anda : Rp. ";
	cin >>gp;
	cout <<"Masukan Jam Kerja Anda : ";
	cin >>jk;
	
	lembur=jk-40;
	gt=(lembur*1.5+40)*gp;
	pajak=gt*0.15;
	gk=gt-pajak;
	
	cout<<endl;
	cout<<"Gaji Pokok  : Rp."<<gp<<endl;
	cout<<"Jam Kerja   : "<<jk<<endl;
	cout<<"Lembur      : "<<lembur<<endl;
	cout<<"Gaji Sebelum Dipotong Pajak : Rp."<<gt<<endl;
	cout<<"Total Gaji Anda Adalah : Rp."<<gk;
}
