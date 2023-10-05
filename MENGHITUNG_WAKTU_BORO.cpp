#include<bits/stdc++.h>
using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int sudut;
    double kecepatan;
    double sinA;
    double waktu;
    
    cout << "Masukkan Sudut : ";
    cin >> sudut;
    cout << "Masukkan Kecepatan : ";
    cin >> kecepatan;
    cout << "Waktu Yang Ditempuh : ";
    sinA = sin((double) sudut * 22 / 7 / 180);
    waktu = 2 * (kecepatan * sinA) / 10;
    cout << fixed << setprecision(3);
    cout << waktu << endl;
    return 0;
}
