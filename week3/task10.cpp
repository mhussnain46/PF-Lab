#include <iostream>
using namespace std;

main(){
int number;
int number1;

cout << "Enter number 1: ";
cin >> number;
cout << "Enter number 2: ";
cin >> number1;
number1 = number1 + number;
cout << "Enter number 3: ";
cin >> number;
number1 = number1 + number;
cout << "Enter number 4: ";
cin >> number;
number1 = number1 + number;
cout << "Enter number 5: ";
cin >> number;
number1 = number1 + number;
cout << "Sum is :" << number1 << endl;
}