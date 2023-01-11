//Judul
//Gejala (string)
//Noor Adekah Apriyana
//7 okt 2022

#include <iostream>
#include <string>
using namespace std;

//kamus
string keluhan1, keluhan2, keluhan3;
char plh;

//deskripsi
int main()
{
awal:
    cout << "==============================================="<<endl;
    cout << "          Selamat Datang Di RSUD SUKAMARA "<<endl;
    cout << "==============================================="<<endl;
    cout << "Masukan Gejala Yang Anda Rasakan : "<<endl;
    cout << "1 . Muntah"<<endl;
    cout << "2 . Diare berlebihan"<<endl;
    cout << "3 . Demam"<<endl;
    cout << "4 . Batuk"<<endl;
    cout << "5 . Pilek"<<endl;
    cout << "6 . Nyeri otot"<<endl;
    cout << "7 . Pusing"<<endl;
    cout << "8 . Leher kaku"<<endl;
    cout << "9 . Pilek"<<endl;
    cout << "10. Dehidrasi"<<endl;
    cout << "==============================================="<<endl;
    cout << "Masukan Gejala - Gejala yang dialami: "<<endl;
    cout <<endl;
    cout << "Masukan Gejala 1: "; getline(cin, keluhan1);
    cout <<endl;
    cout << "Masukan Gejala 2: "; getline(cin, keluhan2);
    cout <<endl;
    cout << "Masukan Gejala 3: "; getline(cin, keluhan3);
    cout <<endl;
    cout << "==============================================="<<endl;

    if (keluhan1=="Demam" && keluhan2=="Mual" && keluhan3=="Diare berlebihan") //Penyakit 1
    {
        cout << "Maka Diagnosa penyakitnya adalah = Muntaber"<<endl;
    }
    else if (keluhan1=="Demam" && keluhan2=="Batuk" && keluhan3=="Pilek")  //Penyakit 2
    {
        cout << "Maka Diagnosa penyakitnya adalah = Influenza"<<endl;
    }
    else if (keluhan1=="Demam" && keluhan2=="Batuk" && keluhan3=="Nyeri otot") //Penyakit 3
    {
        cout << "Maka Diagnosa penyakitnya adalah = Corona"<<endl;
    }
    else if (keluhan1=="Demam" && keluhan2=="Diare berlebihan" && keluhan3=="Dehidrasi") //penyakit 4
    {
        cout << "Maka Diagnosa penyakitnya adalah = Tifes"<<endl;
    }
    else if (keluhan1=="Demam" && keluhan2=="Leher kaku" && keluhan3=="Pusing") //Penyakit 5
    {
        cout << "Maka Diagnosa penyakitnya adalah = Terjadi pengentalan darah pada pembuluh darah diotak"<<endl;
        cout << "Anda disarankan agar segera dirujuk ke Dokter spesialis"<<endl;
    }
    cout << "==============================================="<<endl;
    cout << "Silahkan Tebus Obat Anda di Apotek Dengan Menyerahkan Resep Dari Dokter"<<endl;
    cout << "==============================================="<<endl;
    cout << "Apakah Anda ingin Mengulang?"<<endl;
    cout << "Pilihan Anda (y/n) : ";
    cin >> plh;
        if(plh=='y'||plh=='Y')
        {
            goto awal;
        }
        if(plh=='n'||plh=='N')
        {
            goto selesai;
        }
        selesai:
    cout << "==============================================="<<endl;
    cout << "       Terima Kasih Atas Kunjungan Anda" <<endl;
    cout << "==============================================="<<endl;

    return 0;
}
