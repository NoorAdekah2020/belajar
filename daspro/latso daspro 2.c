//Judul
//menentukan luas donat
//noor adekah  apriyana
//21 sept 2022

#include <iostream>
using namespace std;
//kamus
double LD, LA, LB, rA, rB;
float phi = 3.14;

//diskripsi
int main()
{
    cout << "menentukan luas LA " <<endl;
    cout << "masukan nilai jari-jari  A ";
    cin >> rA;
    LA=phi*rA*rA;
    cout << "maka luas lingkaran A adalah " << LA <<endl;
    rB=rA-15;

    cout << "masukan nilai jari-jari B "; cin >> rB;
    LB = phi*rB*rB;
    cout << "maka luas lingkaran B adalah " <<LB <<endl;

    LD = LA=LB;
    cout << "jadi luas donat adalah " << LD;
}
