#include <iostream>
using namespace std;

main(){
int enterNumber;
int n1;
int n2;
int n3;
int n4;
int num1;
int num2;
int num3;
int sum;

cout << "Enter your number: ";
cin >> enterNumber;
n1 = enterNumber % 10;
num1 = enterNumber / 10;
n2 = num1 % 10;
num2 = num1 / 10;
n3 = num2 % 10;
num3 = num2 / 10;
n4 = num3 % 10;

cout << "Position 1 = " << n4 << endl;
cout << "Position 2 = " << n3 << endl;
cout << "Position 3 = " << n2 << endl;
cout << "Position 4 = " << n1 << endl;
}