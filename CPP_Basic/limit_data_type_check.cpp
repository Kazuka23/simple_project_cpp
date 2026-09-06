#include <iostream>
using namespace std;

int main()
{
    long long b = 5;

    cout << sizeof(b) << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<long long>::min() << endl;

    return 0;
}