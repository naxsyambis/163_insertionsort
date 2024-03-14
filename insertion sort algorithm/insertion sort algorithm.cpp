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

    for (int i = 0; i < n; i++) {                                       //Menggunakan perulangan for untuk menyimpan data
        cout << "Data ke-" << (i + 1) << ": ";                          //Masukkan atau menginputkan nilai data n
        cin >> arr[i];                                                 //Menyimpan nilai data n kedalam array arr
    }
}

void insertion() {
    int temp;                                                          //Membuat variabel data temporer atau menyimpan sementara
    int i, j;                                                          //Membuat variabel j sebagai penanda

    for (i = 1; i <= n - 1; i++) {                                    // 1. Looping dengan i dimulai dari 1 hingga n-1
        temp = arr[i];                                                // 2. simpan nilai arr[i] ke variabel sementara temp
        j = i - 1;                                                    // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp) {   // 4. looping while dimana niali j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
            arr[j + 1] = arr[j];            // 4a. simpan arr[j] ke dalam variabel arr[j+1]
            j--;                            // 4b. decrement nilai j by 1
        }
        arr[j + 1] = temp;                  // 5. simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass " << i << ": ";     //output ke layar
        for (int k = 0; k < n; k++) {       //looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";          //output ke layar

        }
    }

}

