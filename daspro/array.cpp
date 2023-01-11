//Judul
//Array lanjutan

#include <iostream>
using namespace std;

//Kamus
int ArrData[12];
int x, y;
int juml;
//Diskripsi
int main()
{
    ArrData[0]=17;
    ArrData[1]=18;
    ArrData[2]=17;
    ArrData[3]=34;
    ArrData[4]=46;
    ArrData[5]=22;
    ArrData[6]=17;
    ArrData[7]=18;
    ArrData[8]=35;
    ArrData[9]=34;
    ArrData[10]=17;
    ArrData[11]=18;

    x=0;
    while(x<12)
    {
        cout << "ArrData 1: " << ArrData[0] <<endl;
        cout << "ArrData 2: " << ArrData[1] <<endl;
        cout << "ArrData 3: " << ArrData[2] <<endl;
        cout << "ArrData 4: " << ArrData[3] <<endl;
        cout << "ArrData 5: " << ArrData[4] <<endl;
        cout << "ArrData 6: " << ArrData[5] <<endl;
        cout << "ArrData 7: " << ArrData[6] <<endl;
        cout << "ArrData 8: " << ArrData[7] <<endl;
        cout << "ArrData 9: " << ArrData[8] <<endl;
        cout << "ArrData 10: " << ArrData[9] <<endl;
        cout << "ArrData 11: " << ArrData[10] <<endl;
        cout << "ArrData 12: " << ArrData[11] <<endl;
    x=x+1;
    }

    y=0;
    while(y<12){
        juml=juml+ArrData[y];
        y++;
    }
}
