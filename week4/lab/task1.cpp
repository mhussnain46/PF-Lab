#include <iostream>
using namespace std;

void userInfo(string name, int marks);

main(){
string name;
int marks;
cout << "Enter Your Name: ";
cin >> name;
cout << "Enter Your Marks: " ;
cin >> marks;
userInfo(name, marks);
}

void userInfo(string name, int marks){
cout << "Your name is " << name << endl;
cout << "Your marks is " << marks;
}