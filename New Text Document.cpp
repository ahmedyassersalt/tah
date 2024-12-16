#include <iostream>
using namespace std;
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function and store the result
    int result = add(num1, num2);

    // Display the result
    cout << "The sum is: " << result << std::endl;

    return 0;
}
