#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd2, string nameStd2, int ecatMarks2);

main(){
string name1;
int matricMarks1;
int intMarks1;
int ecatMarks1;
string name2;
int matricMarks2;
int intMarks2;
int ecatMarks2;
printMenu();
cout << "Enter the name of student1: ";
cin >> name1;
cout << "Enter the marks of student1 in matric : ";
cin >>  matricMarks1;
cout << "Enter the marks of student1 in inter: ";
cin >> intMarks1;
cout << "Enter the marks of student1 in ecat: ";
cin >> ecatMarks1;
calculateAggregate(name1, matricMarks1, intMarks1, ecatMarks1);
cout << "Enter the name of student2: ";
cin >> name2;
cout << "Enter the marks of student2 matric: ";
cin >>  matricMarks2;
cout << "Enter the marks of studend2 inter: ";
cin >> intMarks2;
cout << "Enter the marks of student2 ecat: ";
cin >> ecatMarks2;
calculateAggregate(name2, matricMarks2, intMarks2, ecatMarks2);
compareMarks(name1, ecatMarks1, name2, ecatMarks2);
}


void printMenu(){
cout << "University Management system of UET Lahore, Pakistan" << endl;
}

void calculateAggregate(string name, int matricMarks , int interMarks , int ecatMarks){
float aggregate = ((matricMarks * 0.30/1100) + (interMarks * 0.30/1100) + (ecatMarks * 0.40/400)) * 100;
cout << "Aggregate of " << name << " is " << aggregate << endl;
}

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2){
if(ecatMarksStd1 > ecatMarksStd2){
cout << nameStd1 << " has Roll no is 1 because he has higest marks in Ecat";
}
if(ecatMarksStd1 < ecatMarksStd2){
cout << nameStd2 << " has Roll no is 1 because he has higest marks in Ecat";
}
}
