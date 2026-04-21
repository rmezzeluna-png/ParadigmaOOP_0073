#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void dataBarang(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "pc";
    elektronik.jumlah = 100;
    elektronik.kategori = "Besar";
    elektronik.tanggalProduksi = "21-04-2026";

    Barang nonElektronik;
    nonElektronik.nama = "sapu";
    nonElektronik.jumlah = 500;
    nonElektronik.kategori = "alat pembersih";
    nonElektronik.tanggalProduksi = "19-07-2025";

    elektronik.dataBarang();
    nonElektronik.dataBarang();
}