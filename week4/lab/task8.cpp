#include <iostream>
using namespace std;


void eligble(int age);
main(){
int age;
cout << "Enter your age: " ;
cin >> age;
eligble(age);
}

void eligble(int age){
if(age >= 18){
cout << "You are eligble for vote";
}
if(age < 18){
cout << "You are not eligble for vote";
}
}