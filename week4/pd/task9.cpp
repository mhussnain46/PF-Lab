#include <iostream>
using namespace std;

void reverse(string);

main(){
string boolean;
cout << "Enter True or False: ";
cin >> boolean;
reverse(boolean);
}

void reverse(string boolean){
if(boolean == "true"){
cout << "False";
  }
if(boolean == "false"){
cout << "True";
  }
}