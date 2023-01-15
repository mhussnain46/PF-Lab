#include <iostream>
using namespace std;

string gradeCalculator(float percentage);

main()
{
    int marks1, marks2, marks3, marks4, marks5, totalMarks;
    string name;
    cout << "Enter the name of student: ";
    cin >> name;
    cout << "Enter the marks of subject 1: ";
    cin >> marks1;
    cout << "Enter the marks of subject 2: ";
    cin >> marks2;
    cout << "Enter the marks of subject 3: ";
    cin >> marks3;
    cout << "Enter the marks of subject 4: ";
    cin >> marks4;
    cout << "Enter the marks of subject 5: ";
    cin >> marks5;
    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    float percentage = (totalMarks / 500) * 100;
    string result = gradeCalculator(percentage);
    cout << "Student name is " << name << endl;
    cout << "Student obtain marks is " << totalMarks << endl;
    cout << "Student's grade is " << result << endl;
}

string gradeCalculator(float percentage)
{
    string grade;
    if (percentage > 90 && percentage <= 100)
    {
        grade = "A+";
    }
    if (percentage > 80 && percentage <= 90)
    {
        grade = "A";
    }
    if (percentage > 70 && percentage <= 80)
    {
        grade = "B+";
    }
    if (percentage > 60 && percentage <= 70)
    {
        grade = "B+";
    }
    if (percentage > 50 && percentage <= 60)
    {
        grade = "C";
    }
    if (percentage > 40 && percentage <= 50)
    {
        grade = "D";
    }
    if (percentage < 40)
    {
        grade = "F";
    }
    return grade;
}