#include <iostream>

using namespace std;

int factorial(int num)
{

    if (num == 1)
        return 1;

    else
        return num * factorial(num - 1);
}

int main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "The input number is invalid.";
    }

    int result = factorial(number);

    cout << "The factorial of " << number << "th is: " << result;
    return 0;
}