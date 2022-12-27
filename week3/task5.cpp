#include <iostream>
using namespace std;

main(){
float weight;
int daysNeeded;
int daysForOneKg;

daysForOneKg = 15;
cout << "Enter the weight you want to loose: ";
cin >> weight;
daysNeeded = weight * daysForOneKg;
cout << "It will take you " <<daysNeeded << " days to loose " << weight << " Kgs";
}