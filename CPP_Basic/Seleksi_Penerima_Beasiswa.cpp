#include <iostream>
using namespace std;


int main() {
    int nilai, kehadiran;
    cin >> nilai;
    cin >> kehadiran;
    
    if (nilai >= 85 && kehadiran >= 90) {
        cout << "DITERIMA";
    } else {
        cout << "DITOLAK";
    }
}
