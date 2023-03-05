#include <iostream>
using namespace std;

int main() {
	int m;
	bool uppercase, lowercase;
	cout<<"enter  an alphabet:  ";
	cin>>m;
	lowercase = (m=='a'|| m=='e'|| m=='i'|| m=='o'|| m=='u');
	uppercase = (m=='A'|| m=='E'|| m=='I'|| m=='O'|| m=='U');
	if(!isalpha(m)){
		cout<<"NonAlppabetic character!";
	}else if (lowercase || uppercase ){
		cout<<m<<"This Is a vowel!";
		
	}else
	cout<<m<<"Is a consonent!";
}
