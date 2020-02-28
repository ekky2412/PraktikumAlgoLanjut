#include <iostream>

using namespace std;

int main(){
	int baris,kolom;
	cout<<"Baris : ";cin>>baris;
	cout<<"Kolom : ";cin>>kolom;
	int matriksA[baris][kolom];
	cout<<endl;
	
	for(int i=0;i<baris;i++){
		for(int j=0;j<kolom;j++){
			cout<<"Matriks["<<i<<"]["<<j<<"] : ";
			cin>>matriksA[i][j];
		}
		cout<<endl;
	}
	int min=matriksA[0][0],max=matriksA[0][0];
	cout<<"Matriks A : \n";
	for(int i=0;i<baris;i++){
		for(int j=0;j<kolom;j++){
			cout<<matriksA[i][j]<<" ";
		if(matriksA[i][j]<min){
			min=matriksA[i][j];
		}
		else if(matriksA[i][j]>max){
			max=matriksA[i][j];
		}
		}
		cout<<endl;
	}
	cout<<"Nilai Maks dalam Matriks : "<<max<<endl;
	cout<<"Nilai Min dalam Matriks : "<<min;
	
	
}
