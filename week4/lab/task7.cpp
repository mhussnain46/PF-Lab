#include <iostream>
using namespace std;

main(){
int age;
cout << "Enter your age: " ;
cin >> age;
if(age >= 18){
cout << "You are eligble for vote";
}
if(age < 18){
cout << "You are not eligble for vote";
}
}