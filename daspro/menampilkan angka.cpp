//Judul
//Menampilkan dan menjumlahan angka
 #include <iostream>
 using namespace std;

 //Kamus
 int y, juml;
 int jmlspecial;

 //Diskripsi
 int main ()
 {
     /*cout << "Tampilkan Angka dari 1-40 : ";
     cin >> y;
     while (y<=40)
     {
         total = total + y;
         cout << y << endl;
         y=y + 1;
     }
     cout << total;
     */

     cout << "bilangan dari 1-40 : " ;
     y = 1;
     do
     {
         cout << y << " ";
         juml = juml + y;
         y=y + 1;
     }
     while (y<=40);
     cout << endl;
     cout << "total jumlah" << juml << endl;

     cout << "bilangan yang habis dibagi 4 dari 1-40 : " ;
     y=1;
     do
     {
         if ((y % 4) == 0)
         {
             cout << y << " ";
             jmlspecial = jmlspecial  + 1;
         }
         y = y + 1;
     }
     while (y<40);

     cout << endl;
     cout << "Total yang habis dibagi " << jmlspecial << endl;
 }
