//Judul
//Noor Adekah Apriyana
//A11.2022.14382

#include <iostream>
using namespace std;

//Kamus
string NIK;
string Nama;
string TTL; //Tempat Tanggal Lahir
string JK; //Jenis Kelamin
string Alamat;
string Kel;
string Kecamatan;
string Agama;
string SP; // Status Perkawinan
string Pekerjaan;
string Kewarganegaraan;
string BK; //Berlaku Hingga

//Deskripsi
int main() {
    cout << "Membuat sistem pendataan KTP" <<endl;
    cout << "NIK                        : "; getline(cin, NIK   );
    cout << "Nama                       : "; getline(cin, Nama  );
    cout << "TTL                        : "; getline (cin, TTL  );
    cout << "JK                         : "; getline (cin, JK    );
    cout << "Alamat                     : "; getline (cin, Alamat   );
    cout <<     "Kel                        : "; getline (cin, Kel );
    cout <<     "Kecamatan                  : "; getline (cin, Kecamatan    );
    cout << "Agama                      : "; getline (cin, Agama    );
    cout << "SP                         : "; getline (cin, SP   );
    cout << "Pekerjaan                  : "; getline (cin, Pekerjaan    );
    cout << "Kewarganegaraan            : "; getline (cin, Kewarganegaraan );
    cout << "BK                         : "; getline (cin, BK  );
    cout <<endl;
    "======================================================================";
    cout <<                             "PROVINSI JAWA TENGAH"                       << endl;
    cout <<                              "KABUPATEN SEMARANG"                        << endl;
    cout << "1."  << NIK                                                             << endl;
    cout << "2."  << Nama                                                            << endl;
    cout << "3."  << TTL                                                             << endl;
    cout << "4."  << JK                                                              << endl;
    cout << "5."  << Alamat                                                          << endl;
    cout << "6."  << Kel;
    cout << "7."  << Kecamatan;
    cout << "8."  << Agama;
    cout << "9." << SP                                                               << endl;
    cout << "10." << Pekerjaan                                                       << endl;
    cout << "11." << Kewarganegaraan                                                 << endl;
    cout << "12." << BK                                                              << endl;
    cout << "======================================================================" ;
}
