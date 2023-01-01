#include <iostream>
using namespace std;

void speedLimit(int);

main(){
int speed;
cout << "Enter the speed of car: ";
cin >> speed;
speedLimit(speed);
}

void speedLimit(int speed){
if(speed > 100){
 cout << "Halt.... You will be challaned" << endl;
  }
if(speed <= 100){
 cout << "Perfect you are going well" << endl;
  }
}