#include <iostream>

using namespace std;

int factorial(int number);

int main()
{
    int number, result;
    cout << "Enter a number: \n";
    cin >> i;
    result = factorial(number);
    cout << result;
    return 0;
}

int factorial(int number)
{
    int res = 1;
    for (int i = 0; i < number; i++) {
        res *= i;
    }
    return res;
}
