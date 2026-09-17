#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 10 + 1;
        cout << "Angka ke-" << (i+1) << ": " << arr[i];
        cout << " -> " << (arr[i] >= 5 ? "Besar" : "Kecil") << endl;
    }

    return 0;
}