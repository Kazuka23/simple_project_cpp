#include <iostream>
using namespace std;

int pertambahan(int x, int y) {
    return x + y;
}

int pengurangan(int x, int y) {
    return x - y;
}

int perkalian(int x, int y) {
    return x * y;
}

int pembagian (int x, int y) {
    return x / y;
}

void log(int result) {
    cout << result << endl;
}

int main() {
    int tambah = pertambahan (6, 3);
    int kurang = pengurangan (6, 3);
    int kali = perkalian (6, 3);
    int bagi = pembagian (6, 3);
    
    log(tambah);
    log(kurang);
    log(kali);
    log(bagi);

    return 0;
}