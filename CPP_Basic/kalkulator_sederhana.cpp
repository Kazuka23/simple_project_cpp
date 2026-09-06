#include <iostream>
using namespace std;

int main () {
    float a,b,hasil;
    char arithmetic;
    
    cout << "Kalkulator Sederhana" << endl;
    cout << "masukan nilai pertama";
    cin >> a;
    cout << "masukan operator";
    cin >> arithmetic;
    cout << "masukan nilai kedua";
    cin >> b;
    
    cout << "\nHasilnya adalah";
    cout << a << arithmetic << b << endl;
    
    if (arithmetic == '+') {
        hasil = a + b;
    } else if (arithmetic == '-') {
        hasil = a - b;
    } else if (arithmetic == '*') {
        hasil = a * b;
    } else if (arithmetic == '/') {
        hasil = a / b;
    } else {
        cout << "Sintaks Error" << endl;
    }
    cout << "=" << hasil << endl;
    
    cin.get();
    return 0;
}
