#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
	
	//Working like this:)
//i = 1: factorial *= 1 (factorial = 1)
//i = 2: factorial *= 2 (factorial = 2)
//i = 3: factorial *= 3 (factorial = 6)
//i = 4: factorial *= 4 (factorial = 24)
//i = 5: factorial *= 5 (factorial = 120)
