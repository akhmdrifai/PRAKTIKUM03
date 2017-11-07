#include <iostream>

using namespace std;

int main(){
	int x;
	cout << "Masukan Nilai Integer : ";
	cin >> x;
	
	if (x>0){
		cout << "Nilai positif";
	}
	else if (x<0){
		cout << "Nilai negatif";
	}
	else{
		cout << "Nilai Nol";
	}
}
