#include <iostream>
using namespace std;
int sumOfNumbers(int sum, int num, int num1=0)
{

    // using do-while loop
    do
    {
        cout << "Enter a number" << endl;
        cin >> num;
        sum = num1 + num;
    } while (num >= 0);
    cout << "The sum of positive numbers is:";
    cout << sum;
    return 0;
}

// Main function
int main()
{

    // Variables
    int num1, num, sum;
    cout << "Enter a +ve number-for -ve program will be terminated and show the sum of positive numbers" << endl;
    cin >> num1;

    // Calling the function
    cout << sumOfNumbers(sum, num, num1) << endl;
    return 0;
}