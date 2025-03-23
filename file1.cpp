#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang 20
int n; // membuat variabel n

void input ()
{ // procedure input
while (true)
{
cout << "masukkan jumlah data pada array :": // membuat inputan jumlah element array
cin >> n; // memanggil variabel inputan n

if (n <=20)
{ // membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang ans=da masukkan maksimal 20 elemen.\n"; // menampilkan pesan lebih dari
}
}
cout << endl; // membuat jarak antar baris program
cout << "====================" << endl; // membuat tampilan susunan element array
cout << "Masukkan element array" << endl;
cout << "====================" << endl;

for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
{
cout << "data ke-" << (i + 1) << ":"; // memasukkan atau menginput nilai n
}
}

