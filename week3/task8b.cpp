#include <iostream>
using namespace std;

main(){
int enterNumber;
int number1;
int number2;
int number3;
int number4;
int sum;
int div1;
int div2;
int div3;
cout << "Enter your number: ";
cin >> enterNumber;
number1 = enterNumber % 10;
div1 = enterNumber / 10;
number2 = div1 % 10;
div2 = div1 / 10;
number3 = div2 % 10;
div3 = div2 / 10;
number4 = div3 % 10;
sum = number1 +number2 + number3 + number4;
cout << "Sum is: " << sum << endl;
}