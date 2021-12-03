#include <iostream>
using namespace std;

int main(){
string tanggal_transaksi, bulan_transaksi, tahun_transaksi;
float harga_transaksi, bitcoin;

// Input //

cout << "                  (*BITCOIN*)            "<< endl;
cout << endl;

cout << "Dibuat Oleh: Muhammad Restu Halim"<< endl;
cout << endl;

cout << "===========(Masukan Tanggal Transaksi)=========="<< endl;
cout << endl;

cout << " Tanggal Transaksi \t : "; getline (cin, tanggal_transaksi);
cout << " Bulan Transaksi \t : "; getline (cin, bulan_transaksi);
cout << " Tahun Transaksi \t : "; getline (cin, tahun_transaksi);
cout << " Harga Transaksi \t : "; cin >> harga_transaksi;
cout << " Harga Bitcoin \t\t : "; cin >> bitcoin;

cout << endl << endl;

// Output //

cout << "==========(Tanggal Transaksi)==================="<< endl;
cout << endl;

cout << " Tanggal Transaksi \t : " << tanggal_transaksi << bulan_transaksi << tahun_transaksi << endl;
cout << " Bitcoin \t\t : " << harga_transaksi / bitcoin << endl;

return 0;
}
	

