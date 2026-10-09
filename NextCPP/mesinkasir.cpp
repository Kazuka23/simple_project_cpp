#include <bits/stdc++.h>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std;
using namespace std::chrono;

void Waktu() {
    auto sekarang = system_clock::now();
    time_t waktu_c = system_clock::to_time_t(sekarang);
    tm* waktu_lokal = localtime(&waktu_c);

    cout << "Waktu:  " 
         << put_time(waktu_lokal, "%d-%m-%Y %H:%M:%S") 
         << endl;
}

void equal() {
    cout << "================================================================\n";
}

void strip() {
    cout << "----------------------------------------------------------------\n";
}

int main() {
    vector<string> nama_barang;
    vector<int> harga_barang;
    vector<int> jumlah_barang;

    string nama;
    int jumlah, harga;
    char pilihan;

    while(true) {
        cout << "Nama barang: ";
        cin >> nama;
        nama_barang.push_back(nama);

        cout << "Harga barang: ";
        cin >> harga;
        harga_barang.push_back(harga);

        cout << "Jumlah barang: ";
        cin >> jumlah;
        jumlah_barang.push_back(jumlah);

        cout << "Apakah ada barang lain? (Y/N): ";
        cin >> pilihan;
        if (pilihan == 'N' || pilihan == 'n') {
            break;
        }
    }
    equal();
    cout << "INVOICE PAK DENGKLEK STORE\n";
    cout << "JL. KWAK NO.1, KEL KEBUN BEBEK, KEC BUAH BEBEK, KOTA BEBEK\n";
    Waktu();
    equal();

    int total_belanja = 0;
    double diskon;
    double subtotal_akhir;

    for (size_t i = 0; i < nama_barang.size(); i++) {
        int subtotal = harga_barang[i] * jumlah_barang[i];
            if (subtotal >= 200000) {
            diskon = subtotal * 0.10;
            subtotal_akhir = subtotal - diskon;
    } else {
        diskon = 0;
        subtotal_akhir = subtotal;
    }
        total_belanja += subtotal_akhir;


    if (diskon > 0) {
        cout << i + 1 << ". " << nama_barang[i] 
        << " (" << jumlah_barang[i] << " x Rp" << harga_barang[i] << " dipotong diskon 10%) "
        << "= Rp" << subtotal_akhir << endl;
    } else {
        cout << i + 1 << ". " << nama_barang[i] 
        << " (" << jumlah_barang[i] << " x Rp" << harga_barang[i] << ") "
        << "= Rp" << subtotal_akhir << endl;
    }

    }

    strip();
    cout << "TOTAL YANG HARUS DIBAYAR: Rp" << total_belanja << endl;
    equal();
    cout << "   TERIMA KASIH TELAH PERCAYA PAK DENGKLEK     " << endl;
    strip();


}