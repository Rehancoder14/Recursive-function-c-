#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    } //will stops the function between till 1
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num;
    cout << "Enter Your num: ";
    cin >> num;

    cout << "The factorial of 5 is " << factorial(num);

    return 0;
}
