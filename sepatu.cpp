#include <iostream>

using namespace std;

int main (){
    string nama;
    int us; //ukuran sepatu

    cout << "siapa namamu? "; cin >> nama;
    cout << "berapa ukuran sepatumu? "; cin >> us;

    cout << "\n ---------------------------- \nberikut datanya\n";
    cout << "nama : " << nama << "\nukuran sepatu: " << us;
    
    return 0;

}