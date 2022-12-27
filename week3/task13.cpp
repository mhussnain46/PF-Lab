#include <iostream>
using namespace std;

main(){
int marks1;
int marks2;
int marks3;
int totalMarks;
int average;

cout << "Enter the marks of first student: ";
cin >> marks1;
cout << "Enter the marks of second student: ";
cin >> marks2;
cout << "Enter the marks of third student: ";
cin >> marks3;
cout << "Enter the total marks for one student: ";
cin >> totalMarks;
average = (marks1 + marks2 + marks3) / 3;
cout << "Average marks of class is " << average << " out of " << totalMarks;

}