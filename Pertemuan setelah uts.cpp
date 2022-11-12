#include <iostream>

using namespace std;

int main()
{
    cout << "Harga Permen 500\n";
    cout << "Harga Permen 1000\n";
    cout << "Harga Permen 300\n";
    cout << "========================\n";

    int x=5000;
    int y,z;


    cout << "Masukkan Harga Satuan Permen: "; cin >> y;

    if(y==500){
        cout << "Dika Membeli: 5" << endl;
    }else if(y==1000){
        z=x/y;
        cout << "Dika Membeli: " <<z<< endl;
    }else if(y==300){
        for(y=300 ; y<=x; y+=300){
            z+=1;
        }
        cout<<"Dika Membeli: "<<z<< endl;
    }
    return 0;
}
