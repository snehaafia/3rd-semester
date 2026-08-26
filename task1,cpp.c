#include <iostream>
using namespace std;

int main()
{
    int option, quantity;
    double totalPrice = 0.0;

    // Display menu
    cout << "Welcome to the Beverage Machine!" << endl;
    cout << "1. Coffee - $2.50" << endl;
    cout << "2. Tea    - $1.50" << endl;
    cout << "3. Soda   - $1.75" << endl;
    cout << "4. Water  - $1.00" << endl;
    cout << "Please select a beverage (1-4): ";
    cin >> option;

    // Process user choice
    switch (option) {
        case 1:
            cout << " Coffee." << endl;
            cout << "Enter the quantity: ";
            cin >> quantity;
            totalPrice = quantity * 2.50;
            break;

        case 2:
            cout << " Tea." << endl;
            cout << "Enter the quantity: ";
            cin >> quantity;
            totalPrice = quantity * 1.50;
            break;

        case 3:
            cout << " Soda." << endl;
            cout << "Enter the quantity: ";
            cin >> quantity;
            totalPrice = quantity * 1.75;
            break;

        case 4:
            cout << " Water." << endl;
            cout << "Enter the quantity: ";
            cin >> quantity;
            totalPrice = quantity * 1.00;
            break;

        default:
            cout << "Invalid selection. Please try again." << endl;
            return 1; // Exit the program with an error code
    }

    // Display total price
    cout << "Total price: $" << totalPrice << endl;

    return 0;
}
