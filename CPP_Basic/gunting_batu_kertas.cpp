#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    string nama;
    int totalRonde;
    int pilihanPemain[100];
    int pilihanKomputer[100];
    
    int menangPemain = 0;
    int menangKomputer = 0;
    int seri = 0;

    cout << "Masukan nama anda: ";
    getline(cin, nama);

    cout << "Masukan ronde yang diinginkan: ";
    cin >> totalRonde;

    for (int i = 0; i < totalRonde; i++) {
        cout << "\n--- Ronde " << (i + 1) << " ---" << endl;
        
        cout << "Masukkan pilihan Anda (1=Batu, 2=Kertas, 3=Gunting): ";
        cin >> pilihanPemain[i];

        bool inputValid = (pilihanPemain[i] == 1 || pilihanPemain[i] == 2 || pilihanPemain[i] == 3);
        if (!inputValid) {
            cout << "Pilihan tidak valid! Ronde ini otomatis dianggap kalah.\n";
            menangKomputer++;
            continue;
        }

        pilihanKomputer[i] = rand() % 3 + 1;

        string teksPemain = "";
        if (pilihanPemain[i] == 1) teksPemain = "Batu";
        else if (pilihanPemain[i] == 2) teksPemain = "Kertas";
        else if (pilihanPemain[i] == 3) teksPemain = "Gunting";

        string teksKomputer = "";
        if (pilihanKomputer[i] == 1) teksKomputer = "Batu";
        else if (pilihanKomputer[i] == 2) teksKomputer = "Kertas";
        else if (pilihanKomputer[i] == 3) teksKomputer = "Gunting";

        cout << "Pilihan " << nama << " : " << teksPemain << endl;
        cout << "Pilihan Komputer : " << teksKomputer << endl;

        if (pilihanPemain[i] == pilihanKomputer[i]) {
            cout << "Hasil Ronde: Seri!" << endl;
            seri++;
        } 
        else if ((pilihanPemain[i] == 1 && pilihanKomputer[i] == 3) || 
                 (pilihanPemain[i] == 2 && pilihanKomputer[i] == 1) || 
                 (pilihanPemain[i] == 3 && pilihanKomputer[i] == 2)) {
            cout << "Hasil Ronde: " << nama << " Menang!" << endl;
            menangPemain++;
        } 
        else {
            cout << "Hasil Ronde: Komputer Menang!" << endl;
            menangKomputer++;
        }
    }

    cout << "\n===== HASIL AKHIR =====" << endl;
    cout << "Jumlah kemenangan " << nama << " : " << menangPemain << endl;
    cout << "Jumlah kemenangan Saya : " << menangKomputer << endl;
    cout << "Jumlah seri : " << seri << endl;
    cout << endl;

    if (menangPemain > menangKomputer) {
        cout << "Selamat " << nama << ", kamu dapat mengalahkanku!" << endl;
    } 
    else if (menangKomputer > menangPemain) {
        cout << "Yahaha! Segitu doang?!" << endl;
    } 
    else {
        cout << "Hmmm... kita sama kuat." << endl;
    }

    return 0;
}