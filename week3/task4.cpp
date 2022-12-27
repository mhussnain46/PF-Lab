#include <iostream>
using namespace std;

main(){
float marksInSubject1;
float marksInSubject2;
float marksInSubject3;
float marksInSubject4;
float marksInSubject5;
float percentage;
float obtainMarks;
float totalMarks;
totalMarks= 500;
cout << "Enter marks in Ist Subject: ";
cin >> marksInSubject1;
cout << "Enter marks in second Subject: ";
cin >> marksInSubject2;
cout << "Enter marks in third Subject: ";
cin >> marksInSubject3;
cout << "Enter marks in fourth Subject: ";
cin >> marksInSubject4;
cout << "Enter marks in fifth Subject: ";
cin >> marksInSubject5;
obtainMarks= marksInSubject1 + marksInSubject2 + marksInSubject3 + marksInSubject4 + marksInSubject5;
percentage = (obtainMarks / totalMarks) * 100;
cout << "Your percentage is: " << percentage;
}