#include <iostream>
using namespace std;

void isEven(int number);

main()
{
int number;
while(true)
 {
cout << "Enter your number: ";
cin >> number;
isEven(number);
 }
}

void isEven(int number)
{
if(number % 2 == 0)
  {
cout << "Your number is even" << endl;
  }
if(number % 2 != 0)
  {
cout << "Your number is odd" << endl;
  }
}
