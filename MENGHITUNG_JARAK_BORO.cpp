#include<bits/stdc++.h>
using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double sudut;
    double kecepatan;
    double sinA;
    double jarak;
    
    cout << "Masukkan Sudut : ";
    cin >> sudut;
    cout << "Masukkan Kecepatan : ";
    cin >> kecepatan;
    cout << "Jarak Terjauh : ";
    sinA = sin(2 * sudut * 3.141 / 180) * 10;
    jarak = kecepatan * sinA / 10;
    cout << fixed << setprecision(1);
    cout << jarak << endl;
    return 0;
}
