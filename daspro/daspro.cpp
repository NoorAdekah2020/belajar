//Judul
//Simulasi array
//17 okt 2022

#include<iostream>
using namespace std;

//Kamus
int bil1, angka, bilangan, values, nilai;
int data[5];
int x, cari;

//Deskripsi
int main()
{
    cout << "Input variabel bebas"<<endl;
    cout << "masukan bilangan ke bil1 = "; cin >> bil1;
    cout << "masukan bilangan ke angka = "; cin >> angka;
    cout << "masukan bilangan ke bilangan = "; cin >> bilangan;
    cout << "masukan bilangan ke values = "; cin >> values;
    cout << "masukan bilangan ke nilai = "; cin >> nilai;

    cout << "masukan yang kita cari ";  cin >> cari;
    if (cari == bil1)
    {
        cout "ketemu" << cari << "-" <<bil1<<endl;
    }
    else if (cari == angka)
    {
        cout "ketemu" << cari << "-" <<angka<<endl;
    }
    else if (cari == bilangan)
    {
        cout "ketemu" << cari << "-" <<bilangan<<endl;
    }
    else if (cari == values)
    {
        cout "ketemu" << cari << "-" <<values<<endl;
    }
    else if (cari == nilai)
    {
        cout "ketemu" << cari << "-" <<nilai<<endl;
    }
    else
    {
        cout "tidak ditemukan";
    }

    cout << "Input variabel array"<<endl;
    cout << "masukan kedata index 0 = "; cin >> data[0];
    cout << "masukan kedata index 1 = "; cin >> data[4];
    cout << "masukan kedata index 2 = "; cin >> data[2];
    cout << "masukan kedata index 3 = "; cin >> data[1];
    cout << "masukan kedata index 4 = "; cin >> data[3];

    cout << "Menampilkan variabel bebas"<<endl;
    cout << "isi dari variabel bil1= "<< bil1<<endl;
    cout << "isi dari variabel angka= "<< angka<<endl;
    cout << "isi dari variabel bilangan= " << bilangan<<endl;
    cout << "isi dari variabel values= " << values<<endl;
    cout << "isi dari variabel nilai= " << nilai<<endl;

    cout << "menampilkan array tanpa loop"<<endl;
    cout << "masukan array 1 = "; cin >> data[0];
    cout << "masukan array 2 = "; cin >> data[4];
    cout << "masukan array 3 = "; cin >> data[2];
    cout << "masukan array 4 = "; cin >> data[1];
    cout << "masukan array 5 = "; cin >> data[3];

    x=0;
    do
    {
        cout << data[x];
        x=x+1;
    }
    while (x<5);
}
