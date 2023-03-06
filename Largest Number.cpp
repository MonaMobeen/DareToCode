#include <iostream>
using namespace std;

int main() {
	int n, n1, n2;
	cout<<"Enter Three Numbers: "<<"\n";
	cin>>n>> n1>> n2;
	if (n>=n1 || n>=n2){
		cout<<"n is largest no."<<n;}
		
	//other	
	else if (n1>=n||n1>=n2)
	    cout<<"n1 is largest no. "<<n1;
	//other	
	else 
	    cout<<"n2 is largest no. "<<n2;
	 
}
