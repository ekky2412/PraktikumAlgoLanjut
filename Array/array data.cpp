#include <iostream>
using namespace std;
int main()
{
	int jml;
	cout<<"Masukkan jumlah data : ";
	cin>>jml;
	char nama[jml][100];
	char nim[jml][9];
	int ip[jml];
	
	for(int i=0; i<jml; i++)
	{
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Masukkan nama : "; cin>>nama[i];
		cout<<"Masukkan NIM : "; cin>>nim[i];
		cout<<"Masukkan IP : "; cin>>ip[i];
	}
	cout<<"============OUTPUT==============="<<endl;
	for(int i=0; i<jml; i++)
	{
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Nama : "<<nama[i]<<endl;
		cout<<"NIM : "<< nim[i]<<endl;
		cout<<"IP : "<<ip[i]<<endl;
	}
}
