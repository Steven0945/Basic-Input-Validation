#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

int main() {
    std::string name;
    int customerID;
    double balance;
    // Collect customer name
    std::cout << "Enter customer name: ";
    std::cin.ignore(); // Clear any leftover newline
    std::getline(std::cin, name);
    // Collect and validate customer ID
    std::cout << "Enter customer ID (1000-9999): ";
    // Your validation code here
    while (!(std::cin >> customerID) || customerID < 1000 || customerID > 9999) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an age between 1000 and 9999: ";
    }
    std::cout << "Cutsomer ID entered: " << customerID << std::endl;
    // Collect and validate balance
    std::cout << "Enter account balance: $";
    // Your validation
}