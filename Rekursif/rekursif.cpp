#include <iostream>
using namespace std;

int nilaitotal(int x,int nilai[],int total){
	if(x==0){
		cout<<nilai[x];
		return total+nilai[x];
	}
	else{
		cout<<nilai[x]<<" + ";
		total=total+nilai[x];
		return nilaitotal(x-1,nilai,total);
	}
}

int main(){
	int jum,total=0;
	cout<<"Jumlah Mahasiswa : ";cin>>jum;
	int nilai[jum];
	for(int i=0;i<jum;i++){
		cout<<"Nilai "<<i+1<<" : ";cin>>nilai[i];
	}
	cout<<endl;
	total=nilaitotal(jum-1,nilai,total);
	cout<<endl;
	cout<<"Total : "<<total;
}
