#include<iostream>
using namespace std;

int main(){
    int nilai = 85, kehadiran;
    bool izin, bolehIkut;

    kehadiran = 60;
    nilai = 70;
    izin = true;

    if(nilai >= 80 && kehadiran >= 75 || izin == true){
        bolehIkut = true;
        cout << "Boleh ikut ujian";
    } else {
        bolehIkut = false;
        cout << "Tidak boleh ikut ujian";
    }

}