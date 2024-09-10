#include <iostream>

using namespace std;

int main(){
    float angka1 ;
    float angka2 ;
    float angka3 ;
    float jumlah ;
    float rata_rata;

    cout << "tampilkan angka1: " << endl;
    cin >> angka1;
    cout << "tampilkan angka2: " << endl;
    cin >> angka2;
    cout << "tampilkan angka 3" << endl;
    cin>> angka3;
    jumlah = angka1 + angka2 + angka3;
    rata_rata = jumlah/3;
    cout << "jumlah dari ketiga angka tersebut adalah: " << jumlah << endl;
    cout << "rata rata dari ketiga angka tersebut adalah: " << rata_rata ;

    return 0;

}