#include <iostream>
using namespace std;

main(){
int bagSize;
int bagCost;
int areaForBag;
int costPerPound;
int areaPerSquareFeet;

cout << "Enter the size of bag in pounds: ";
cin >> bagSize;
cout << "Enter the cost of baog: ";
cin >> bagCost;
cout << "Enter area covered by each bag in square feet: ";
cin >>  areaForBag;
costPerPound = bagCost / bagSize;
areaPerSquareFeet= bagCost / areaForBag;
cout << "_______________________________________________" << endl;
cout << "Cost of the fertilizer per pound: " << costPerPound <<endl;
cout << "Cost of fertilizing the area per square feet: " << areaPerSquareFeet << endl;

}