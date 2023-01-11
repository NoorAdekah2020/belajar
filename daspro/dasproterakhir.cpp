//judul
//19-12-2022

#include <iostream>
using namespace std;

//kamus
string kata;
int m, j;
bool palindrome= true;

int main()
{
    cout << "Program mengecek kata" <<endl;
    cout << "Kata : "; getline(cin, kata);

    m=kata.length();

    j=0;
    while (j<m){
        if (kata [j]!=kata[m-j-1]){
            palindrome=false;
            break;
        }
        j=j+1;
    }
    cout<< "hasil : ";
    if(palindrome==true){
        cout << "Kalimat ini palindrome";
    }
    else{
        cout << "Bukan palindrome";
    }
    return 0;
}
