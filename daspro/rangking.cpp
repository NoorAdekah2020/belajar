//Judul
//Program Ranking abcde
//Tugas Daspro
//Noor Adekah Apriyana
//Senin, 3 oktober 2022

#include <iostream>
using namespace std;

//Kamus
int a, b, c, d, e;

//Diskripsi
int main()
{
    cout << "Masukan 5 nilai berbeda kepada variabel a, b, c, d, dan e." <<endl;
    cout << "Masukan Nilai a : "; cin >> a;
    cout << "Masukan Nilai b : "; cin >> b;
    cout << "Masukan Nilai c : "; cin >> c;
    cout << "Masukan Nilai d : "; cin >> d;
    cout << "Masukan Nilai e : "; cin >> e;
    
    (a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e);
    if (a<b && b<c && c<d && d<e)
    {
        cout << "("<<a<<","<<b<<","<<c<<","<<d<<","<<e<<")" <<endl;
    }
    else 
    {
        if (a<b && b<c && c<e && e<d)
       {
           cout << "("<<a<<","<<b<<","<<c<<","<<e<<","<<d<<")" <<endl;
       }
       else
       {
           if (a<b && b<c && c<e && e<d)
            {
                cout << "("<<a<<","<<b<<","<<c<<","<<e<<","<<d<<")" <<endl;
            }
            else
            {
                if (a<b && b<d && d<c && c<e)
                {
                       cout << "("<<a<<","<<b<<","<<d<<","<<c<<","<<e<<")" <<endl;   
                }
                else
                {
                    if (a<b && b<e && e<d && d<c)
                    {
                        cout << "("<<a<<","<<b<<","<<e<<","<<d<<","<<c<<")" <<endl;
                    }
                    else
                    {
                        if (a<b && b<e && e<c && c<d)
                        {
                            cout << "("<<a<<","<<b<<","<<e<<","<<c<<","<<d<<")" <<endl;
                        }
                        else
                        {
                            if (b<a && a<c && c<d && d<e)
                            {
                                cout << "("<<b<<","<<a<<","<<c<<","<<d<<","<<e<<")" <<endl;
                            }
                            else
                            {
                                if (b<a && a<c && c<e && e<d)
                                {
                                    cout << "("<<b<<","<<a<<","<<c<<","<<e<<","<<d<<")" <<endl;
                                }
                                else
                                {
                                    if (b<a && a<d && d<e && e<c)
                                    {
                                        cout << "("<<b<<","<<a<<","<<d<<","<<e<<","<<c<<")" <<endl; 
                                    }
                                    else
                                    {
                                        if (b<a && a<d && d<c && c<e)
                                        {
                                            cout << "("<<b<<","<<a<<","<<d<<","<<c<<","<<e<<")" <<endl; 
                                        }
                                        else
                                        {
                                            if (b<a && a<e && e<d && d<c)
                                            {
                                                cout << "("<<b<<","<<a<<","<<e<<","<<d<<","<<c<<")" <<endl;
                                            }
                                            else
                                            {
                                                if (b<a && a<e && e<c && c<d)
                                                {
                                                    cout << "("<<b<<","<<a<<","<<e<<","<<c<<","<<d<<")" <<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
               }
            }
       }
    }
    
    return 0;
}