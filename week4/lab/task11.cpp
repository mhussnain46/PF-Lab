#include <iostream>
using namespace std;

void tester(int number);

main(){
int number;
while(true){
cout << "Enter your number: ";
cin >> number;
tester(number);
}
}


void tester(int number){
if(number % 2 == 0){
cout << "Given number is even" << endl;
}

if(number % 2 != 0){
cout << "Given number is odd" << endl;
}
}