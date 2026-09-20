#include<bits/stdc++.h>
using namespace std;


int main() {
    int jumlah_siswa;
    int nilai_siswa[6];
    int jumlah_lulus = 0;
    int jumlah_tidak_lulus = 0;

    cin >> jumlah_siswa;
    
    for (int i = 0; i < jumlah_siswa; i++) {
        cin >> nilai_siswa[i];
    }

    int tertinggi = nilai_siswa[0];
    int terendah = nilai_siswa[0];
    
    for (int i = 0; i < jumlah_siswa; i++) {
        if (nilai_siswa[i] >= 75) {
            jumlah_lulus++;
        } else {
            jumlah_tidak_lulus++;
        }
        if (nilai_siswa[i] > tertinggi) tertinggi = nilai_siswa[i];
        if (nilai_siswa[i] < terendah) terendah = nilai_siswa[i];
    }


    cout << "Jumlah lulus: " << jumlah_lulus << endl;
    cout << "Jumlah tidak lulus: " << jumlah_tidak_lulus << endl;
    cout << "Nilai tertinggi: " << tertinggi << endl;
    cout << "Nilai terendah: " << terendah << endl;


}
