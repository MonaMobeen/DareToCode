#include <iostream>
using namespace std;

int main() {
	int n, n1=0, n2=1, Newterm=0;
	cout<<"Enter Fibonacchi series: ";
	cin>>n;
	for(int i=0; i<n; ++i){
		if(n==1){
		cout<<n1<<" ,";
		continue;
	}
	 if(n==2){
		cout<<n2<<" ,";
		continue;
	}
	Newterm= n1+n2;
	n1=n2;
	n2= Newterm;
cout <<Newterm;}
}
