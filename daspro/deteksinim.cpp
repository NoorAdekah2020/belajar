//Judul
//Program Deteksi Prodi
//Noor Adekah Apriyana
//Senin, 3 oktober 2022

#include <iostream>
#include <string.h>
using namespace std;

//Kamus
char fak;
int prod;
char jen;
string nim;

//Diskripsi
int main()
{
    cout <<"Kode Fakultas Udinus" <<endl;
    cout <<"Masukan Nim : ";
    cin >>nim;
    cout <<"Masukan Kode Fakultas A/B : ";
    cin >> fak;
    cout <<"Masukan Kode Jenjang : ";
    cin >> jen;
    cout <<"Masukan Kode Prodi 1/2 : ";
    cin >> prod;
    switch (fak)
    {
        case 'A' :
            {
                cout << "FIK";
                break;
                switch (jen)
                {
                    case '1' :
                        cout << " S1 ";
                        break;
                    case '2' :
                        cout << " D3 ";
                        break;
                        switch (prod)
                        {
                            case '1' :
                                cout << "Teknik Informatika";
                            break;
                            case '2' :
                                cout << "Manajemen Informatika";
                            break;
                        }
                }
            }
        case 'B' :
            {
                cout << " FEB ";
                break;
                switch (jen)
                {
                    case '1' :
                        cout << " S1 ";
                    break;
                    case '2' :
                        cout << "D3";
                    break;
                        switch (prod)
                        {
                            case '1' :
                                cout << "Manajemen";
                            break;
                            case '2' :
                                cout << "Akutasi";
                            break;
                        }
                }
            }
    }
    return 0;
}
