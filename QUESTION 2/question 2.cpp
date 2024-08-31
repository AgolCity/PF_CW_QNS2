#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find and print all positive divisors of a given number in decreasing order
void printDivisors(int n) {
    vector<int> divisors;  // Vector to store divisors
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);  // If 'i' is a divisor of 'n', add it to the vector
        }
    }
    
    // Print divisors in decreasing order
    for (int i = divisors.size() - 1; i >= 0; i--) {
        cout << divisors[i] << endl;
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;
    
    while (true) {
        int number;
        cout << "Please enter a positive integer: ";
        cin >> number;
        
        // Check if the entered number is positive
        while (number <= 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }
        
        // Print divisors of the entered number
        printDivisors(number);
        
        // Ask the user if they want to enter another integer
        char choice;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;
        
        // Loop to handle incorrect input
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }
        
        // Exit if the user chooses 'N' or 'n'
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }
    
    cout << "Program terminated." << endl;
    return 0;
}

