#include <iostream>
using namespace std;



main(){
int holidays;
int workingDays;
int sleepTime;
int remainTime;
int hours;
float minutes;
cout << "Enter the numbers of holidays: ";
cin >> holidays;
workingDays = 365 - holidays;
sleepTime = workingDays * 63 + holidays * 127;
if(sleepTime < 30000){
remainTime = 30000 - sleepTime;
  }
if(sleepTime > 30000){
remainTime = sleepTime - 30000;
  }
hours = remainTime / 60;
minutes = remainTime % 60;
if(sleepTime <= 30000){
cout << "Tom sleeps well" << endl;
cout << "" << hours << " hours and " << minutes << " minutes less for play" ;
 }
if(sleepTime > 30000){
  cout << "Tom will run away ";
cout << "" << hours << " hours and " << minutes << " minutes for play" ;
  }
}

