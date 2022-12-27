#include <iostream>
using namespace std;

main(){
float acceleration;
float initialVelocity;
float time;
float finalVelocity;
cout << "Enter the value of acceleration: ";
cin >> acceleration;
cout << "Enter the value of initialVelocity";
cin >> initialVelocity;
cout << "Enter the value of time";
cin >> time;
finalVelocity= (acceleration * time) + initialVelocity;
cout << "FinalVelocity is: " << finalVelocity;
}