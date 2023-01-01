#include <iostream>
using namespace std;

void isEqual(int number1, int number2);

main(){
int number1;
int number2;
cout << "Enter number 1: ";
cin >> number1;
cout << "Enter number 2: ";
cin >> number2;
isEqual(number1, number2);
}

void isEqual(int number1, int number2)
{
if(number1 = number2)
  {
cout << "True "  << endl;
  }
if(number1 != number2)
  {
cout << "False "  << endl;
  }
}