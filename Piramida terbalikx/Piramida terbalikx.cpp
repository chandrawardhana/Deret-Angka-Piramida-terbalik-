#include <iostream>
using namespace std;
int main()
{
    int  n, x, y;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    for (int x = n; x >= 0; x--)
    {
        for (int y = 1; y <= x; y++)
            cout << y;
        cout << "\n";
    }

    return 0;
}