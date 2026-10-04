#include <iostream>
using namespace std;

int main () {
    int nilai;
    int kehadiran;

    cin >> nilai;
    cin >> kehadiran;

    if (nilai >= 75 && kehadiran >= 80) {
        cout << "Status: LULUS";
    } else {
        cout << "Status: TIDAK LULUS";
    }

}