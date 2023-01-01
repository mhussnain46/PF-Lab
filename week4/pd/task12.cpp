#include <iostream>
using namespace std;

void priceCalculator();

main(){
int redRose;
int whiteRose;
int tulips;
float tulipPrice;
float redRosePrice;
float whiteRosePrice;
float totalPrice;
float discountPrice;
cout << "Enter the numbe of Red Rose flowers: ";
cin >> redRose;
cout << "Enter the numbe of White Rose flowers: ";
cin >> whiteRose;
cout << "Enter the numbe of Tulips flowers: ";
cin >> tulips;

tulipPrice = 2 * tulips;
redRosePrice = 4.10 * redRose;
whiteRosePrice = 2.50 * whiteRose;
totalPrice = tulipPrice + redRosePrice + whiteRosePrice;
if(totalPrice > 200){
 discountPrice = totalPrice - 0.2 * totalPrice;
cout << "Original Price: " << totalPrice << endl;
cout << "Price after discount: " << discountPrice;
  }
if(totalPrice < 200){
cout << "Total price is " << totalPrice << endl;
    }
}