#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang 20
int n; // membuat variabel n

void input ()
{ // procedure input
while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
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
cin >> arr[i]; // menyimpan nilai data n kedalam array arr
}
}

void insertionsort()
{ // procedure insertionsort

int temp; // membuat variabel data temporer atau penyimpanan sementara
int j, i; // membuat variabel j sebagai penanda

for (i = 1; i <= n - 1; i++)
{// step 1

temp = arr[i]; // step 2

j = i - 1; // step 3

while (j >= 0 && arr [j] > temp) // step 4
{
arr[j + 1] = arr [j]; // step 4a
j--; // step 4b
}

arr[j + 1] = temp; // step 5
}
}

void display()
{
cout <<endl;
cout << "===================="<<endl;
cout << "total pass =" << n - 1 << endl; // count element movement
cout << "===================="<<endl;
cout << "element array yang telah tersusun" << endl;
cout << "===================="<<endl;

for (int j = 0; j < n; j++)
{ // looping dengan j dimulai dari 0 hingga n-1
cout << arr[j] << endl; // output ke layar
}
cout << endl; // garis kosong
}

int main()
{
input();
insertionsort();
display();
system("pause");
return 0;
}
