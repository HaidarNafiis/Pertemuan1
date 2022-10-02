#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
   int x;
   int z;
   string jurusan [3]={" Teknik Informatika "," Sistem Informasi "," Desain Komunikasi Visual "};
   string mahasiswa [4]={" Freshman ","Shopomore ","Junior ","Senior "};

   cout << " --- Daftar Jurusan --- " << endl;
   cout << "1. " << jurusan[0] << endl;
   cout << "2. " << jurusan[1] << endl;
   cout << "3. " << jurusan[2] << endl << endl;

   cout << " ---Kategori Mahasiswa --- " << endl;
   cout << "1. Semester 1-2 = " << mahasiswa[0] << endl;
   cout << "2. Semester 3-4 = " << mahasiswa[1] << endl;
   cout << "3. Semester 5-6 = " << mahasiswa[2] << endl;
   cout << "4. Semester 7-8 = " << mahasiswa[3] << endl;

   cout << " Masukan Jurusan Anda  : " ;
    cin >> x;
   cout << " Masukan Semester Anda : " ;
    cin >> z;
   if (z>=1 && z<=2){
    cout << " Jurusan Anda adalah " << jurusan[x-1]<< "." << endl;
    cout << " Anda dalam kategori " << mahasiswa[0] << "year." << endl;
   }
   else if (z>=3 && z<=4){
   cout << " Jurusan Anda adalah " << jurusan[x-1]<< "." << endl;
   cout << " Anda dalam kategori " << mahasiswa[1] << "year." << endl;
   }
   else if (z>=5 && z<=6){
    cout << " Jurusan Anda adalah " << jurusan[x-1]<< "." << endl;
    cout << " Anda dalam kategori " << mahasiswa[2] << "year." << endl;
   }
   else if (z>=7 && z<=8){
    cout << " Jurusan Anda adalah " << jurusan[x-1]<< "." << endl;
    cout << " Anda dalam kategori " << mahasiswa[3] << "year." << endl;
   }
   else{
    cout << " Pilihan Anda Salah ! " << endl;
   }
    return 0;
}
