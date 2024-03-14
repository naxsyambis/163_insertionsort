#include <iostream>
using namespace std;

int arr[20];                        //Membuat Array dengan panjang data 20
int n;                              //Membuat Variabel inputan n

void input() {                      //procedure Input
    while (true) {
        cout << "Masukan Jumlah Data pada Array : "; //Membuat input jumalah element array
        cin >> n;                                    //Memanggil variabel input n

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                                        //Membuat jarak per baris program
    cout << "======================" << endl;                           //Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;                           
    cout << "======================" << endl;

    for (int i = 0; i, n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}

