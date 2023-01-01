#include <iostream>
using namespace std;

void userInfo(string name, int marks, float aggregate, char section);

main(){
string name;
int marks;
float aggregate;
char section;
cout << "Enter Your Name: ";
cin >> name;
cout << "Enter Your Marks: " ;
cin >> marks;
cout << "Enter Your aggregate: " ;
cin >> aggregate;
cout << "Enter Your section: " ;
cin >> section;
userInfo(name, marks, aggregate, section);
}

void userInfo(string name, int marks, float aggregate, char section){
cout << "__________________________________________________________" << name << endl;
cout << "Your name is " << name << endl;
cout << "Your marks is " << marks << endl;
cout << "Your aggregate is " << aggregate << endl;
cout << "Your section is " << section << endl;
}