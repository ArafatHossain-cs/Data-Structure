#include <iostream>

using namespace std;

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;

    else
        return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int n;
    cout << "Give the number to find fibonacci: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The fibonacci of " << n << "th number" << " is: " << result;
    return 0;
}