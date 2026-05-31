#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the numbers and their sum
    double num1, num2, sum;

    // Prompt the user to enter the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the sum using the addition operator
    sum = num1 + num2;

    // Display the final result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
