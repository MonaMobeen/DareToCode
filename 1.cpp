#include <iostream>
using namespace std;

int main()
{   
int divisor, dividend, remainder, quotient;
cout<<"Enter Divisor: "<<"\n";
cin>>divisor;
cout<<"Enter Dividend: "<<"\n";
cin>>dividend;
quotient= dividend / divisor;
remainder= dividend%divisor;
cout<<"quotient is: "<<quotient<<"\n";
cout<<"remainder is: "<<remainder<<"\n";
return 0;
}
