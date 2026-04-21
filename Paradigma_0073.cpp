#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        int nim;
        string nama;
        float nilai;
        void printData(){
            cout<<"nim = " << nim << endl;
            cout<<"nama = " << nama << endl;
            cout<<"nilai = " << nilai << endl; 
        }
};

int main(){
    Mahasiswa mhs1;

    mhs1.nim = 073;
    mhs1.nama = "revan ganteng";
    mhs1.nilai = 100;
    mhs1.printData();
}