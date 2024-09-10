#include <iostream>

using namespace std;

int main(){
    int detikInput;
    int detikOutput;
    int menit;
    int jam;


    cin >> detikInput;
    jam = detikInput/3600;
    menit = (detikInput % 3600) / 60;
    detikOutput = (detikInput % 3600) % 60;


    cout << "berikut merupakan perbandingannya (jam:menit:detik)" << endl;
    cout << jam << ":" << menit << ":" << detikOutput ;

}