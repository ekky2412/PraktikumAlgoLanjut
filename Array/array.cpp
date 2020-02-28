#include <iostream>

using namespace std;

void mengisi(){
	int matriksA[2][3]
	for(int baris=0;baris<2;baris++){
		for(int kolom=0;kolom<3;kolom++){
			cout<<"Matriks A["<<baris<<"]["<<kolom<<"] : ";
			cin>>matriksA[baris][kolom];
		}
	}
}

void menampilkan(int matriksA[2][3]){
	cout<<"Matriks A : \n";
	for(int baris=0;baris<2;baris++){
		for(int kolom=0;kolom<3;kolom++){
			cout<<matriksA[baris][kolom]<<" ";
		}
		cout<<"\n";
	}
}

void menyalin(int matriksA[2][3]){
	int matriksB[2][3];
	cout<<"Matriks A :\n";
	for(int baris=0;baris<2;baris++){
		for(int kolom=0;kolom<3;kolom++){
			matriksB[baris][kolom]=matriksA[baris][kolom];
			cout<<matriksA[baris][kolom]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl<<"Matriks B : \n";
	for(int baris=0;baris<2;baris++){
		for(int kolom=0;kolom<3;kolom++){
			cout<<matriksB[baris][kolom]<<" ";
		}
		cout<<"\n";
	}
}

void transpos(int matriksA[2][3]){
	int matriksB[3][2];
	cout<<"Matriks A :\n";
	for(int baris=0;baris<2;baris++){
		for(int kolom=0;kolom<3;kolom++){
			matriksB[kolom][baris]=matriksA[baris][kolom];
			cout<<matriksA[baris][kolom]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl<<"Matriks B : \n";
	for(int baris=0;baris<3;baris++){
		for(int kolom=0;kolom<2;kolom++){
			cout<<matriksB[baris][kolom]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int matriksA[2][3];
	char balik;
	do{
		int menu;
		cout<<"Menu : \n";
		cout<<"1. Mengisi Matriks\n";
		cout<<"2. Output Matriks\n";
		cout<<"3. Menyalin Matriks\n";
		cout<<"4. Transpos Matriks\n";
		cout<<"Pilih : ";
		cin>>menu;
		switch(menu){
			case 1:{
				mengisi(matriksA);
				break;
			}
			case 2:{
				menampilkan(matriksA);
				break;
			}
			case 3:{
				menyalin(matriksA);
				break;
			}
			case 4:{
				transpos(matriksA);
				break;
			}
		}
		cout<<"Kembali ke menu? (y/n) : ";
		cin>>balik;
	}while(balik=='y');
}
