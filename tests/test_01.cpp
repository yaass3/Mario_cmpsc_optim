#include <iostream>
#include <string>
using namespace std;

void printDigit(int n);

int main() {
	int digit_01;
    	cin>> digit_01;
	printDigit(digit_01);
    return 0;
}


void printDigit(int n) {
    if (n < 10)
        cout << n << "\n";
    else {
       // printDigit(n / 10);
        cout << n % 10 << "\n";
    }
    return;
}
