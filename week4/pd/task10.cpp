#include <iostream>
using namespace std;

void discount(string, int);

main(){
string name;
int price;
while(true){
cout << "Enter the name of country: ";
cin >> name;
cout << "Enter the price: ";
cin >> price;
discount(name, price);
  }
}



void discount(string name, int price){
int disc;
if(name == "pakistan"){
disc = price - 0.05 * price;
 }
if(name == "ireland"){
disc = price - (0.1 * price);
 }
if(name == "india"){
disc = price - (0.2 * price);
 }
if(name == "england"){
disc = price - (0.3 * price);
 }
if(name == "canada"){
disc = price - (0.45 * price);
 }
cout << "Your bill is " << disc << " dollars" << endl;
}
