#include "iostream"

using namespace std;

int main() {

float rata;
int p = 0, l = 0, q = 2;
int ha[3][2][2];

cout << "Array kelipatan 4 = " << endl;
for(int i = 0; i < 3; i++) {
    for(int k = 0; k < 2; k++) {
        for(int n = 0; n < 2; n++) {
            ha[i][k][n] = q;
            q += 2;
            if(q % 4 == 0) {
            cout << q << " ";
            p += q;
            l += 1;
            rata = (float)p/l;
            }
        }
    }
}
cout << endl;
cout << "Sum kelipatan 4 = " << p << endl;
cout << "Rata-rata kelipatan 4 = " << rata << endl;

return 0;
}
