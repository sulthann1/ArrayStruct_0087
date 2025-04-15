#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs[2];
    
    for(int i = 0; i < 2; i++){
    cout << "Mahasiswa ke-" << i+1 << endl;
    cout << "Masukan NIM = ";
    cin >> mhs[i].nim;
    cin.ignore();
    cout << "Masukan Nama = ";
    getline (cin, mhs[i].nama);
    cin >> mhs[i].nama;
    cout << "Masukan Alamat Desa =";
    cin >> mhs[i].alamat.desa;
    cout << "Masukan Alamat Kota =";
    cin >> mhs[i].alamat.kota;
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;

    for(int i= 0; 1< 2; i++){
    cout << "NIM = " << mhs[i].nim << endl;
    cout << "Nama = " << mhs[i].nama << endl;
    cout << "Alamat Desa = " << mhs[i].alamat.desa << endl;
    cout << "Alamat Kota = " << mhs[i].alamat.kota << endl;
    }
}