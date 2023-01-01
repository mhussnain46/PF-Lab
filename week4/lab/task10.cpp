#include <iostream>
using namespace std;

void printName(string name);

main(){
string userName;
while(true){
cout << "Enter your Name: " << endl;
cin >> userName;
printName(userName);
}
}


void printName(string name){
cout << "You name is " << name << endl;
}