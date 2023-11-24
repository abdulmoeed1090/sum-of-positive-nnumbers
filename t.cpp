#include <iostream>
#include <cmath>
using namespace std;
double calculateArea(float lengthf, double width)
{
    return (lengthf * width);
}
double calculateArea(double base, double height)
{
    return (0.5 * base * height);
}
double calculateArea(double radius)
{

    return (3.14159 * pow(radius, 2));
}
int main()
{
    double base, height, length, width, radius;
    char z;
    float lengthf;
    cout << "Enter the shape (c for circle, R for rectangle, T for triangle):" << endl;
    cin >> z;
    if (z == 'c')
    {

        cout << "Enter radius of cicle" << endl;
        cin >> radius;
        cout << "The area is>>" << calculateArea(radius) << endl;
    }

    else
    {
        if (z == 'R')
        {
            cout << "Enter length  of rectangle" << endl;
            cin >> lengthf;
            cout << "Enter width  of rectangle" << endl;
            cin >> width;
            cout << "The area is>>" << calculateArea(lengthf, width) << endl;
        }
        else
        {
            if (z == 'T')
            {
                cout << "Enter base  of triangle" << endl;
                cin >> base;
                cout << "Enter height of triangle" << endl;
                cin >> height;
                cout << "The area is>>" << calculateArea(base, height) << endl;
            }
            else
            {
                cout << "Invalid shape!!" << endl;
            }
        }
    }
    return 0;
}
