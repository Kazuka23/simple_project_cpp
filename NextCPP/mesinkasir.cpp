#include <iostream>
#include <string>
using namespace std;

string coffee[5] = {"Espresso", "Americano", "Latte", "Cappuccino", "Mocha"};
string noncoffee[6] = {"Tea", "Hot Chocolate", "Lemonade", "Soda", "Water", "Matcha"};
string snack[5] = {"Croissant", "Muffin", "Bagel", "Donut", "Brownie"};
string dessert[5] = {"Cheesecake", "Ice Cream", "Pudding", "Tiramisu", "Macaron"};

int list_harga[4][6] = {
    {30000, 35000, 40000, 45000, 50000},
    {20000, 25000, 30000, 35000, 40000, 45000},
    {15000, 20000, 25000, 30000, 35000},
    {25000, 30000, 35000, 40000, 45000}
};

int main () {
    cout << "Welcome to the Coffee Shop!" << endl;
    cout << "Menu:" << endl;

    cout << "\nCoffee:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << coffee[i] << " - Rp" << list_harga[0][i] << endl;
    }

    cout << "\nNon-Coffee Beverages:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << noncoffee[i] << " - Rp" << list_harga[1][i] << endl;
    }

    cout << "\nSnacks:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << snack[i] << " - Rp" << list_harga[2][i] << endl;
    }

    cout << "\nDesserts:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << dessert[i] << " - Rp" << list_harga[3][i] << endl;
    }

    cout << "Would you like to place an order? (yes/no): ";
    string order;
    cin >> order;
    if (order == "yes") {
        cout << "Please enter the item number you would like to order: ";
        int itemNumber;
        cin >> itemNumber;

        if (itemNumber >= 1 && itemNumber <= 5) {
            cout << "You have ordered: " << coffee[itemNumber - 1] << endl;
            cout << "Price: Rp" << list_harga[0][itemNumber - 1] << endl;
        } else if (itemNumber >= 6 && itemNumber <= 11) {
            cout << "You have ordered: " << noncoffee[itemNumber - 6] << endl;
            cout << "Price: Rp" << list_harga[1][itemNumber - 6] << endl;
        } else if (itemNumber >= 12 && itemNumber <= 16) {
            cout << "You have ordered: " << snack[itemNumber - 12] << endl;
            cout << "Price: Rp" << list_harga[2][itemNumber - 12] << endl;
        } else if (itemNumber >= 17 && itemNumber <= 21) {
            cout << "You have ordered: " << dessert[itemNumber - 17] << endl;
            cout << "Price: Rp" << list_harga[3][itemNumber - 17] << endl;
        } else {
            cout << "Invalid item number." << endl;
        }
    } else {
        cout << "Thank you for visiting!" << endl;
    }

    return 0;
}