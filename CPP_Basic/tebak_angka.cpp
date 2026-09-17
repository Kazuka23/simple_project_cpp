#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 10 + 1;
    int tebakan = 0;

    while (tebakan != target) {
        cout << "Tebak angka (1-10): ";
        cin >> tebakan;
        if (tebakan == target) cout << "Benar!\n";
        else cout << "Salah, coba lagi!\n";
    }

    return 0;
}