#include <iostream>
using namespace std;

main(){
string name;
int adultTicketPrice;
int childTicketPrice;
int NumOfAdultTicketSold;
int NumOfChildTicketSold;
float percentage;
int priceFromChildTickets;
int priceFromAdultTickets;
int totalPrice;
int amountDonate;
int amountAfterDonation;

cout << "Enter The movie name: " ;
cin >> name;
cout << "Enter The Adult Ticket price: " ;
cin >> adultTicketPrice;
cout << "Enter The Child Ticket price: ";
cin >> childTicketPrice;
cout << "Enter the Number of Adult tickets sold: ";
cin >> NumOfAdultTicketSold;
cout << "Enter the Number of Child tickets sold: ";
cin >> NumOfChildTicketSold;
cout << "Enter the percentage to donate: ";
cin >> percentage;
priceFromChildTickets = NumOfChildTicketSold * childTicketPrice;
priceFromAdultTickets= NumOfAdultTicketSold * adultTicketPrice;
totalPrice= priceFromChildTickets + priceFromAdultTickets;
amountDonate = (percentage /100) * totalPrice;
amountAfterDonation = totalPrice - amountDonate;
cout << "______________________________" << endl;
cout << "Total amount Generated: " << totalPrice << endl;
cout << "Amount After donation: " << amountAfterDonation;
}