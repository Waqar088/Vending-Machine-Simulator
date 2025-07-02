#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double balance;

    const double item1Price = 1.50;
    const double item2Price = 2.00;
    const double item3Price = 2.50;
    const double item4Price = 3.00;

    cout << "=== Welcome to the Vending Machine ===" << endl;
    cout << "Enter your balance: $";
    cin >> balance;

    cout << fixed << setprecision(2);
    cout << "\n--- Menu ---\n";
    cout << "1. Chips       - $" << item1Price << endl;
    cout << "2. Soda        - $" << item2Price << endl;
    cout << "3. Chocolate   - $" << item3Price << endl;
    cout << "4. Sandwich    - $" << item4Price << endl;
    cout << "Enter the number of the item you want to buy: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (balance >= item1Price) {
                balance -= item1Price;
                cout << "You bought Chips. Remaining balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance for Chips.\n";
            }
            break;
        case 2:
            if (balance >= item2Price) {
                balance -= item2Price;
                cout << "You bought Soda. Remaining balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance for Soda.\n";
            }
            break;
        case 3:
            if (balance >= item3Price) {
                balance -= item3Price;
                cout << "You bought Chocolate. Remaining balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance for Chocolate.\n";
            }
            break;
        case 4:
            if (balance >= item4Price) {
                balance -= item4Price;
                cout << "You bought Sandwich. Remaining balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance for Sandwich.\n";
            }
            break;
        default:
            cout << "Invalid selection.\n";
            break;
    }

    cout << "Thank you for using the vending machine!\n";

    return 0;
}
