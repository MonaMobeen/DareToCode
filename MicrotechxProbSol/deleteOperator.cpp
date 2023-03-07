#include <iostream>  
using namespace std;  
int main ()  
{   
    int *ptr1, *ptr2, sum;
        ptr1 = new int;   
    ptr2 = new int;  
    cout<<"Enter any no: ";
    cin>>*ptr1;
      cout<<"Enter any no: ";
    cin>>*ptr2;
    sum = *ptr1+ *ptr2;
    cout<<"the result is :"<<sum;
        delete ptr1;   
    delete ptr2;  
    return 0;  
}