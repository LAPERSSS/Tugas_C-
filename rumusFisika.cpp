#include <iostream>

using namespace std;

int main () {
    float t;
    float vt;
    float vo;
    float hasil;


    vo = 0;

    cout << "perhitungan rumus percepatan" << endl;
    cout << "masukan detik : (t)" << endl;
    cin>>t;
    cout << "masukan kelajuan mobil setelah t detik : (m/s)" << endl;
    cin >> vt;

    hasil = (vt-vo)/t;

    cout << "percepatannya yaitu: " << hasil << " ms^2";
   

    return 0;

}