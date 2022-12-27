#include <iostream>
using namespace std;

main(){
float vegetablesPrice;
float fruitsPrice;
int totalVegetablesInKgs;
int totalFruitsInKgs;
float totalVegetablePrice;
float totalFruitsPrice;
float totalPrice;
float totalPriceInRupees;

cout << "Enter the price of vegetable: ";
cin >> vegetablesPrice;
cout << "Enter the price of fruits: ";
cin >> fruitsPrice;
cout << "Enter the amount of vegetables in kgs: ";
cin >> totalVegetablesInKgs;
cout << "Enter the amount of fruits in kgs: ";
cin >> totalFruitsInKgs;
totalVegetablePrice= vegetablesPrice * totalVegetablesInKgs;
totalFruitsPrice= fruitsPrice * totalFruitsInKgs;
totalPrice = totalVegetablePrice + totalFruitsPrice;
totalPriceInRupees= totalPrice / 1.94;
cout << "Total amount in rupees is: " << totalPriceInRupees;

}