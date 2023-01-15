#include <iostream>
using namespace std;

main()
{
    int h;
    int x;
    int y;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the value of coordinate of x: ";
    cin >> x;
    cout << "Enter the value of coordinate of y:";
    cin >> y;

    if (x == h || y == h)
    {
        cout << "border";
    }

    else if ((x >= 0) && (x > (3 * h)) || (y >= 0 && (y > (3 * h))))
    {

        cout << "outside";
    }

    else if ((x >= 0) && (x < (3 * h)))
    {
        if (y > 0 && (y <= (4 * h)))
        {
            cout << "inside";
        }
    }
}