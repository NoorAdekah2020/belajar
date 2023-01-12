//Judul
//menentukan jari-jari lingkaran leih besar
//noor adekah apriyana
//21 sept 2022

#include <iostream>
using namespace std;

//kamus
float rA, rB;

//Diskripsi
int main ()
{
    cout << "Menentukan jari-jari lingkaran mana yang lebih" <<endl;
    cout << "Jari-jari lingkaran A adalah ";
    cin >> rA;

    rB = rA-15;

    cout << "jari-jari lingkaran B adalah " << rB <<endl;

    if (rA>rB)
    {
        cout << "maka, jari-jari lingkaran A lebih besar daripada lingkaran B";
    }
    else
    {
        cout << "maka, jari-jari lingkaran B lebih besar daripada lingkaran A";
    }
}
