#include <iostream>
using namespace std;

int main() {
    
    int n;
    int fn;
    int f1;
    int f2;
    
    cout << "SELAMAT DATANG DI PENCETAK FIBONACCI SEDERHANA" << endl;
    cout << "Masukan nilai n: " << endl;
    cin >> n;
    
    f1 = 1;
    f2 = 0;
    fn = f1 + f2;
    cout << f2 << " ";
    cout << fn << " ";
    for (int i = 1; i < n; i++) {
      fn = f1 + f2;
      f2 = f1;
      f1 = fn;
      cout << fn << " ";
    }
     cout << "\n";
     
    cin.get();
    return 0;
}