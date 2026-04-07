#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};


int main(){
    //Deklarasi variable struct
    Orang mhs;
    //mengisi data 
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data tapil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.nama << endl;
    cout << "Umur : " << mhs.umur << endl;
}