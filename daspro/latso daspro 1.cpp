//Judul
//pembuktian segitiga siku-siku
//Noor Adekah Apriyana
//20 sept 2022

#include <iostream>
using namespace std;
#include <math.h>

//Kamus
float a, b, c;

//Diskripsi
int main ()
{
    cout << "mencari sisi miring " <<endl;
    cout << "masukan nilai alas ";
    cin >> a;
    cout << "maskan nilai tinggi ";
    cin >> b;

    c = sqrt (a*a + b*b);

    cout << "maka hasilnya adalah : " << c << endl;

    if (c==0)
    {
        cout << "segitiga tersebut merupakan segitiga siku-siku";
    }
    else
    {
        cout << "segitiga tersebut bukan segitiga siku-siku";
    }
}
