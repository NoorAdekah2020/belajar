//Judul
//Program KRS MHS
//Noor Adekah Apriyana
//A11.2022.14382
//12 Oktober 2022

#include <iostream>
using namespace std;

//kamus
string nama, nim, fak, lagi;
char simpan;
int n1,n2,n3,n4,n5,n6,n7;
int jums, k;
int sks=20;
int jumat=7;
float totals, rata;
int awal;

//deskrpsi
int main()
{
    cout << " -- CETAK KRS KAMU DISINI! -- " << endl;
    cout << " " << endl;
    cout << "      -----------------       " << endl;
    cout << "     | INPUT DATA ANDA |      " << endl;
    cout << "      -----------------       " << endl;
    cout << " Nama  :   ";
    getline (cin, nama);
    cout << " Nim   :   ";
    getline (cin, nim);
    cout << " Prodi :   ";
    getline (cin, fak);
    system ("cls");

    do {
    cout << " INPUT DATA MATA KULIAH " <<endl;
    cout << " ====================== " << endl;
    cout << " 1.    Mata Kuliah : Kalkulus 1 " << endl;
    cout << "       Jumlah SKS  : 4" << endl;
    cout << "       Nilai       : "; cin >> n1;
    cout << " " << endl;
    cout << " 2.    Mata Kuliah : Dasar Pemrograman " << endl;
    cout << "       Jumlah SKS  : 4" << endl;
    cout << "       Nilai       : "; cin >> n2;
    cout << " " << endl;
    cout << " 3.    Mata Kuliah : Matematika Diskrit " << endl;
    cout << "       Jumlah SKS  : 3" << endl;
    cout << "       Nilai       : "; cin >> n3;
    cout << " " << endl;
    cout << " 4.    Mata Kuliah : Pemrograman Berbasis Web " << endl;
    cout << "       Jumlah SKS  : 2" << endl;
    cout << "       Nilai       : "; cin >> n4;
    cout << " " << endl;
    cout << " 5.    Mata Kuliah : Organisasi dan Arsitektur Komputer " << endl;
    cout << "       Jumlah SKS  : 3" << endl;
    cout << "       Nilai       : "; cin >> n5;
    cout << " " << endl;
    cout << " 6.    Mata Kuliah : Dasar-Dasar Komputasi " << endl;
    cout << "       Jumlah SKS  : 2" << endl;
    cout << "       Nilai       : "; cin >> n6;
    cout << " " << endl;
    cout << " 7.    Mata Kuliah : Pengantar Teknologi Informasi " << endl;
    cout << "       Jumlah SKS  : 2" << endl;
    cout << "       Nilai       : "; cin >> n7;
    cout << " ====================== " << endl;
    system ("cls");

    cout << " Apakah Data Yang Kamu Masukkan Sudah Benar? (Y/N) " << endl;
    cin >> simpan;
    if (simpan == 'Y')
    {
        system ("cls");
        cout << " ...Data Tersimpan... " << endl;
    } }
    while (simpan == 'N');


    /*else if (simpan == 'N')
    {
        cout << " ...Data Tidak Tersimpan... " << endl;
    }goto awal;
    system ("cls");*/

    cout << "                     KARTU HASIL STUDI                     " << endl;
    cout << "                 PROGRAM STUDI INFORMATIKA                 " << endl;
    cout << "                UNIVERSITAS DIAN NUSWANTORO                " << endl;
    cout << "                ===========================                " << endl;
    cout << " " << endl;
    cout << " Nama  :   " << nama << endl;
    cout << " Nim   :   " << nim << endl;
    cout << " Prodi :   " << fak << endl;

    cout << " " << endl;
    cout << "  ______________________________________________________________ " << endl;
    cout << " | Nama Mata Kuliah                         |SKS|       | Nilai |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Kalkulus 1                               | 4 |" << "       |  " << n1 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Dasar Pemrograman                        | 4 |" << "       |  " << n2 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Matematika Diskrit                       | 3 |" << "       |  " << n3 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Pemrograman Berbasis Web                 | 2 |" << "       |  " << n4 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Organisasi dan Arsitektur Komputer       | 3 |" << "       |  " << n5 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Dasar-Dasar Komputasi                    | 2 |" << "       |  " << n6 << "   |" << endl;
    cout << " | -----------------------------------------|---|---------------|" << endl;
    cout << " | Pengantar Teknologi Informasi            | 2 |" << "       |  " << n7 << "   |" << endl;
    cout << " |______________________________________________________________|" << endl;
    cout << " " << endl;

    totals = n1+n2+n3+n4+n5+n6+n7;
    rata = totals/jumat;
    cout << " Total SKS     :   " << sks << endl;
    cout << " Total Nilai   :   " << totals << endl;
    cout << " Rata-Rata     :   " << rata;
}
