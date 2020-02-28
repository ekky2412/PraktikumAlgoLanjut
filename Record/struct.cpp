#include <iostream>
using namespace std;

//typedef struct{
//	char nim[10],nama[40],jeniskelamin;
//	int umur;
//}data_mhs; //1


struct matkul
{
	char nama[30];
	int nilai;
};
struct data_mahasiswa{
	char nim[10],nama[40],jeniskelamin;
	int umur;	
	matkul m[100];
}; 
data_mahasiswa mhs[5];
int main(){
	cout<<mhs[0].m[0].nilai;
//	data_mhs mahasiswa;
//	cout<<"Mahasiswa 1 : "<<endl;
//	cout<<"Nama \t: ";cin.getline(mahasiswa.nama,sizeof(mahasiswa.nama));
//	cout<<"Nim \t: ";cin>>mahasiswa.nim;
//	cout<<"Jenis Kelamin : ";cin>>mahasiswa.jeniskelamin;
//	cout<<"Umur \t: ";cin>>mahasiswa.umur;
//	
//	data_mahasiswa mahasiswa2;
//	cout<<"Mahasiswa 2 : "<<endl;cin.ignore();
//	cout<<"Nama \t: ";cin.getline(mahasiswa2.nama,sizeof(mahasiswa2.nama));
//	cout<<"Nim \t: ";cin>>mahasiswa2.nim;
//	cout<<"Jenis Kelamin : ";cin>>mahasiswa2.jeniskelamin;
//	cout<<"Umur \t: ";cin>>mahasiswa2.umur;
//	cout<<endl<<endl;
//	
//	cout<<"Mahasiswa 1 : "<<endl;
//	cout<<"Nama \t: "<<mahasiswa.nama;cout<<endl;
//	cout<<"Nim \t: "<<mahasiswa.nim;cout<<endl;
//	cout<<"Jenis Kelamin : "<<mahasiswa.jeniskelamin;cout<<endl;
//	cout<<"Umur \t: "<<mahasiswa.umur;cout<<endl;cout<<endl;
//	
//	cout<<"Mahasiswa 2 : "<<endl;
//	cout<<"Nama \t: "<<mahasiswa2.nama;cout<<endl;
//	cout<<"Nim \t: "<<mahasiswa2.nim;cout<<endl;
//	cout<<"Jenis Kelamin : "<<mahasiswa2.jeniskelamin;cout<<endl;
//	cout<<"Umur \t: "<<mahasiswa2.umur;cout<<endl;
	
	
	
	
	
	
	
	
	int banyak;
	cout<<"Jumlah Mahasiswa : ";cin>>banyak;
	data_mhs mahasiswa[banyak];
	for(int i=0;i<banyak;i++){
	cout<<"Mahasiswa "<<i+1<<" : "<<endl;cin.ignore();
	cout<<"Nama \t: ";cin.getline(mahasiswa[i].nama,sizeof(mahasiswa[i].nama));
	cout<<"Nim \t: ";cin>>mahasiswa[i].nim;
	cout<<"Jenis Kelamin : ";cin>>mahasiswa[i].jeniskelamin;
	cout<<"Umur \t: ";cin>>mahasiswa[i].umur;
	}
	cout<<"================================="<<endl<<endl;
	for(int i=0;i<banyak;i++){
	cout<<"Mahasiswa "<<i+1<<" : "<<endl;
	cout<<"Nama \t: "<<mahasiswa[i].nama;cout<<endl;
	cout<<"Nim \t: "<<mahasiswa[i].nim;cout<<endl;
	cout<<"Jenis Kelamin : "<<mahasiswa[i].jeniskelamin;cout<<endl;
	cout<<"Umur \t: "<<mahasiswa[i].umur;cout<<endl;	
	}
	

}
