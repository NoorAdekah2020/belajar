//Judul
//Perhitungan Aritmatika
//Perkalian
//Pembagian
//Pengurangan
//Penjumlahan
//Noor Adekah Apriyana
//25 september 2022

#include <iostream>
using namespace std;

//Kamus
int a;
int b;

//Diskripsi
int main ()
{
    cout << "Masukan nilai a : "; cin >> a;
    cout << "Masukan nilai b : "; cin >> b;

    //perkalian(*)
    cout << a << " * " << b << " = " << a*b <<endl;
    //pembagian(/)
    cout << a << " / " << b << " = " << a/b <<endl;
    //pengurangan(-)
    cout << a << " - " << b << " = " << a-b <<endl;
    //penjumlahan(+)
    cout << a << " + " << b << " = " << a+b <<endl;

    if ((a+b)%2==0)
    {
        cout <<"genap "<<a+b<<endl;
    }
    else
    {
        cout << "ganjil "<<a+b<<endl;
    }
    return 0;
}
