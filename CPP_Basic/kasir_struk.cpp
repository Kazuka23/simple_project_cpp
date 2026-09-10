#include <iostream>
#include <string>
using namespace std;

void invoice(string nama, string item, int jumlah, double harga) {
    double total = jumlah * harga;
    cout << "Struk kasir anda: " << endl;
    cout << "-------------------------" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Item: " << item << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Harga per item: Rp" << harga << endl;
    cout << "Total: Rp" << total << endl;
    cout << "-------------------------" << endl;
}

int main() {
    string nama;
    string item;
    int jumlah;
    double harga;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan nama item: ";
    getline(cin, item);
    cout << "Masukkan jumlah: ";
    cin >> jumlah;
    cout << "Masukkan harga per item: ";
    cin >> harga;

    invoice(nama, item, jumlah, harga);

    return 0;
}