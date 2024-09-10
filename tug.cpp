#include <iostream>

using namespace std;

int main(){
    float p;
    float l;
    float hasilKeliling;
    float hasilLuas;

    cin >> p ;
    cin >> l ;
    hasilKeliling = 2 * (p+l);
    hasilLuas = p*l;
    cout << "keliling: " <<hasilKeliling << endl;
    cout << "luas: " << hasilLuas;

}

