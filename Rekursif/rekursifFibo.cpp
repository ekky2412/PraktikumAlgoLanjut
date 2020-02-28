#include <iostream>
using namespace std;

int fibo(int n){
	cout<<n<<" ";
	if (n==1||n==2){
		return 1;
	}
	else {
		return fibo(n-1)+fibo(n-2);
	}
}

int main(){
	int n=5;
	cout<<"\n\n";
	cout<<fibo(n);
}
