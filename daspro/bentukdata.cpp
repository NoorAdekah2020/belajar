//judul
//dasar   type bentukan

#include<iostream>
using namespace std;

//Kamus
int jamHendri, menitHendri, detikHendri;
int jamDewa, menitDewa, detikDewa;
int jamAnggi, menitAnggi, detikAnggi;
    struct jam
    {
        int jam, menit, detik;
    };
    struct jam  Hen, Dew, Ang;
    //ad sekumpulan jam datang dari 40 peserta
    JamDatang [40];
    //deskripsi
int main()
{
    cout << "pendataan jam hadir sti 4109";
    cout << "masukan jam masuk hendri : ";
    /*cin >> jamHendri;
    cin >> menitHendri;
    cin >> detikHendri;*/
    cin >> Hen.jam;
    cin >> Hen.menit;
    cin >> Hen.detik;
    cout << "masukan jam masuk Dewa : ";
    /*cin >> jamDewa;
    cin >> menitDewa;
    cin >> detikDewa;*/
    cin >> Dew.jam;
    cin >> Dew.menit;
    cin >> Dew.detik;
    cout << "masukan jam masuk Anggi : ";
    /*cin >> jamAnggi;
    cin >> menitAnggi;
    cin >> detikAnggi;*/
    cin >> Ang.j am;
    cin >> Ang.menit;
    cin >> Ang.detik;

    //outputkan

    cout << "waktu masuk hendri" << Hen.jam << ":" << Hen.menit<< ":" << Hen.detik <<endl;
    cout << "waktu masuk Dewa" << Dew.jam << ":" << Dew.menit << ":" << Dew.detik<<endl;
    cout << "waktu masuk Anggi" << Ang.jam << ":" << Ang.menit<< ":" << Ang.detik <<endl;

    // input jam peserta
    cin >> JamDatang [1].detik;
}
