#include <iostream>
using namespace std;

int main(){
     //Deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};

     //Deklarasi tanpa inisialisasi
    int datamu[5];

     //Cara akses
    cout << "Isi data kedua: " << dataku[1] << endl;
     //mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah: " << dataku[1] << endl;

     //mengisi data dengan perintah satu persatu
    cout << "Isikan data pertama: ";
    cin >> datamu[0];
    cout << "Isikan data Kedua : ";
    cin >> datamu[1];
    cout << "Isikan data ketiga : ";
    cin >> datamu[2];
    cout << "Isikan data keempat : ";
    cin >> datamu[3];
    cout << "Isikan data ke lima : ";
    cin >> datamu[4];
    cout << endl;

    //menampilkan data dengan perintah satu persatu
    cout << "data pertama = " << datamu[0] << endl;


    



}