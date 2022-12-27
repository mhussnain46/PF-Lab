#include <iostream>
using namespace std;

main(){
int days;
int month;
int year;
cout << "Enter your day of birth: ";
cin >> days;
cout << "Enter your month of birth: ";
cin >> month;
cout << "Enter your year of birth: ";
cin >> year;
int age = 2022 - year;
cout << "Your age is " << age << " years" << endl;
}