#include <iostream>
using namespace std;

typedef struct{
	int alas, tinggi;
}dataSegitiga;

float hitungLuas(dataSegitiga segi3){
	float lu;
	lu = segi3.alas*segi3.tinggi/2.0;
	return lu;
}

int main(){
	dataSegitiga segi3;
	cout<<"Menghitung Luas Segitiga : \n";
	cout<<"Alas : ";
	cin>>segi3.alas;
	cout<<"Tinggi : ";
	cin>>segi3.tinggi;
	float luas=hitungLuas(segi3);
	cout<<luas;
}
