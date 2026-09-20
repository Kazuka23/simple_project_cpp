#include <iostream>
using namespace std;


int main() {
    int jumlah_siswa;
    int nilai_siswa[5];
    
    cin >> jumlah_siswa;
    
    for(int i = 0; i < jumlah_siswa; i++) {
        cin >> nilai_siswa[i];
    }
    
    for(int i = 0; i < jumlah_siswa; i++) {
        cout << nilai_siswa[i] << endl;
    }
}
