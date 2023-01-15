#include <iostream>
using namespace std;

string checkTitle(int age, char gender);

main()
{
    int age;
    char gender;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the gender (f/m): ";
    cin >> gender;
    string result = checkTitle(age, gender);
    cout << "Your title is " << result;
}

string checkTitle(int age, char gender)
{
    string title;
    if (gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }
    if (gender == 'f' && age < 16)
    {
        title = "Miss";
    }
    if (gender == 'm' && age >= 16)
    {
        title = "Mr.";
    }
    if (gender == 'm' && age < 16)
    {
        title = "Master";
    }
}