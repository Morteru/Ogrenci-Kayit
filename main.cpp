#include <iostream>
using namespace std;
struct siniflistesi {
    string isim;
    string soyisim;
    int no;
};

int ogrencino= 0;

int nover()
{
    int op = ogrencino * 3;
    op = 20190000 + op;
    return op;
}

int main()
{
    siniflistesi* ogrenci;
    ogrenci = new siniflistesi[10];
    for (ogrencino; ogrencino < 10; ogrencino++)
    {
        cout << "Ogrencinin adini ve soyadini giriniz: ";
        string ad = " ";
        string soyad = " ";
        cin >> ad;
        cin >> soyad;
        ogrenci[ogrencino].isim = ad;
        ogrenci[ogrencino].soyisim = soyad;
        ogrenci[ogrencino].no = nover();

    }
    for (int i = 0;i< 10; i++)
    {
        i++;
        cout << i << ". ";
        i--;
        cout << ogrenci[i].no << " ";
        cout << ogrenci[i].isim << " ";
        cout << ogrenci[i].soyisim << " ";
        cout << "  " << endl;
    }
    delete[] ogrenci;
    int stop;
    cin >> stop;
}
