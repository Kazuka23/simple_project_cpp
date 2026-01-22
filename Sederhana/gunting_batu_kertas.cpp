#include <iostream>
using namespace std;

int main() {
    string player1,player2;
    cout << "selamat datang di game batu gunting kertas" << endl;
    cout << "silahkan masukan pilihan" << endl;
    cout << "Player 1: " << endl;
    cin >> player1;
    
    cout << "Player 2: " << endl;
    cin >> player2;
    
    if ( player1 == player2 ) {
      cout << "Hasil seri" << endl;
    } else if ((player1 == "gunting" && player2 == "kertas") || (player1 == "batu" && player2 == "gunting") || (player1 == "kertas" && player2 == "batu")) {
     cout << "Hasil: Player 1 win" << endl; } else {
       cout << "Hasil: Player 2 win" << endl;
     }
    
    cin.get();
    return 0;
}