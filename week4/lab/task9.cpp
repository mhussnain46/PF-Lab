#include <iostream>
using namespace std;

void add(int number1, int number2);
void multiply(int number1, int number2);
void divide(int number1, int number2);
void subtract(int number1, int number2);

main(){
int number1;
int number2;
char operation;
while(true){
cout << "Enter number1: ";
cin >> number1;
cout << "Enter number2: ";
cin >> number2;
cout << "Enter the operator: ";
cin >> operation;
if(operation == '+'){
add( number1, number2);
}
if(operation == '*'){
multiply(number1, number2);
}

if(operation == '/'){
divide(number1, number2);
}

if(operation == '-'){
subtract(number1, number2);
}
}
}

void add(int number1, int number2){
int sum;
sum = number1 + number2;
cout << "Sum is: " << sum << endl;
}

void multiply(int number1, int number2){
int mul;
mul =  number1 * number2;
cout << "Product is: "  << mul << endl;
}

void divide(int number1, int number2){
int div;
div = number1 / number2;
cout << "Quotient is: " << div << endl;
}

void subtract(int number1, int number2){
int sub;
sub = number1 - number2;
cout << "Subtraction is  is: " << sub << endl;
}
