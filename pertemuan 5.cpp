#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

// luas lingkaran
    float r;
    float phi = 3.14;
    float L;
    cout << "masukan jari jari (cm) =" <<endl;
    cin >> r;
    L = phi * r * r ;

    cout << " jari jari " << r << " cm, luas lingkaran adalah = " << L << " cm " <<endl;

// luas persegi panjang
    float p;
    float l;
    float L;
    cout << "masukan panjang (cm) =" <<endl;
    cin >> p;
    cout << "masukkan lebar (cm) =" <<endl;
    cin >> l;
    L = p*l;

    cout << " luas persegi panjang = panjang " << p << " cm dan lebar " << l << " cm = " <<  L << " cm " <<endl;

    return 0;

}
