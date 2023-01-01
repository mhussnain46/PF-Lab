#include <iostream>
using namespace std;

main(){
int number1;
int number2;
int number3;
int number4;
int sum;
cout << "Enter number1: ";
cin >> number1;
cout << "Enter number2: ";
cin >> number2;
sum=number1 + number2;
cout  << "Sum is: " << sum << endl;

cout << "Enter number3: ";
cin >> number3;
cout << "Enter number4: ";
cin >> number4;
sum= sum + number3 + number4;
cout << "Sum is :" << sum << endl;
}