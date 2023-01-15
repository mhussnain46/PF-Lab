#include <iostream>
using namespace std;

string isEqual(int number1, int number2, int number3);

main()
{
    int number1;
    int number2;
    int number3;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the second number: ";
    cin >> number3;
    string result = isEqual(number1, number2, number3);
    cout << result;
}

string isEqual(int number1, int number2, int number3)
{
    string greater;
    if (number1 == number2 && number1 == number3)
    {
        greater = "These three numbers are equal";
    }
    if (number1 != number2 && number1 != number3)
    {
        greater = "These three numbers are not equal";
    }
}