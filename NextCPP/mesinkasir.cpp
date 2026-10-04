#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;
using namespace std::chrono;

// List harga barang di toko alat tulis
// Pensil dan Pulpen: Rp2.000 per satuan
// Penghapus: Rp1.000 per satuan
// Penggaris: Rp3.000 per satuan
// TipeX: Rp3.000 per satuan
// Buku: Rp5.000 per satuan

void Waktu() {
    auto sekarang = system_clock::now();
    time_t waktu_c = system_clock::to_time_t(sekarang);
    tm* waktu_lokal = localtime(&waktu_c);

    cout << "Waktu:  " 
         << put_time(waktu_lokal, "%d-%m-%Y %H:%M:%S") 
         << endl;
}

void strip() {
    cout << "=================================================================\n";
}

int main() {
    vector<string> barang;
    vector<

    cout << "Selamat Datang di Toko Buku Pak Dengklek!\n";
    cout << "Nama barang: ";
    cin >> barang;
    cout << "Harga: ";
    cin >> harga;
    cout << "Jumlah: ";
    cin >> jumlah;
    cout << endl;

    strip();
    cout << "INVOICE TOKO BUKU PAK DENGKLEK\n";
    cout << "JL. KWAK No. 1, KEL TERNAK BEBEK, KEC BEBEK BERKAH, KOTA BEBEK\n";
    strip();
    Waktu();
    strip();
    cout << "Barang: " << barang << endl;
    cout << "Harga: " << harga << endl;
    cout << "Jumlah: " << jumlah << endl;



}