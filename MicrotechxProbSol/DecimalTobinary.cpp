#include <iostream>  
using namespace std;  
int main()  
{  
    int m[20], n;
    cout<<"Enter No to convert: ";
    cin>>n;
    for(int i=0;n>0; i++)    
{    
m[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(int i=i-1 ;i>=0 ;i--)    
{    
cout<<m[i];    
}
}