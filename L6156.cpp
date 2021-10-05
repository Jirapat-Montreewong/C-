#include <iostream>
using namespace std;

int main() 
{
    int number;
    int factorial = 1;

    cout << "Enter number : ";
    cin >> number;

    if (number >= 0){
        for(int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial;
    }
    else cout << "Error!";

    return (0);
}