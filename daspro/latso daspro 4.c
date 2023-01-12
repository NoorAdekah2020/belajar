//Judul
//ngitung lama waktu belajar
//noor adekah apriyana
//22 sept 2022

#include<iostream>
using namespace std;

//kamus
int jawal, mawal, dawal;
int jakhir, makhir, dakhir;
int totdurasi, totdetikawal, totdetikakhir;
int HH, MM, DD;

//Diskripsi
int main()
{
    cout << "menghitung lama waktu belajar" <<endl;
    cout << "input jam awal   : "; cin >> jawal;
    cout << "input menit awal : "; cin >> mawal;
    cout << "input detik awal : "; cin >> dawal;

    cout << "input jam akhir   : "; cin >> jakhir;
    cout << "input menit akhir : "; cin >> makhir;
    cout << "input detik akhir : "; cin >> dakhir;

    totdetikawal = (jawal * 3600) + (mawal * 60) + dawal;
    totdetikakhir = (jakhir * 3600) + (makhir * 60) + dakhir;
    totdurasi = totdetikakhir-totdetikawal;

    HH = totdurasi/3600;
    MM = (totdurasi % 3600)/60;
    DD = (totdurasi % 3600)%60;

    cout << "jam mulai belajar : " <<jawal<<" : "<<mawal<<" : "<<dawal<<endl;
    cout << "jam akhir belajar : " <<jakhir<<" : "<<makhir<<" : "<<dakhir<<endl;
    cout << "jadi, waktu aku bejalar selama : "<<HH<<" : "<<MM<<" : "<<DD<<endl;
    return 0;
}
