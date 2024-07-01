#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // Get the last digit
        remainder = originalNum % 10;
        // Add the cube of the digit to the result
        result += remainder * remainder * remainder;
        // Remove the last digit from the original number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number."<<endl;
    else
        cout << num << " is not an Armstrong number."<<endl;

    return 0;
}
