#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "-------------------------------" << endl;
    cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    cout << "-------------------------------" << endl;

    int array[n];

    cout << "Silahkan masukkan nilai untuk setiap elemen array\n";
    for (int i = 0; i < n; i++){
        cout << "Bilangan ke - " << (i + 1) << ":" ;
        cin >> array[i];
    }

    //Mencari nilai tertinggi dalam array
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout << "Nilai tertinggi dalam array adalah: " << max << endl;

    //Mencari angka
    int CariAngka;
    cout << "-------------------------------" << endl;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> CariAngka;

    //Mencari angka dalam array dan menampilkan indeksnya
    bool ditemukan = false;
    for (int i = 0; i < n; i++) {
        if (array[i] == CariAngka) {
            cout << "Angka " << CariAngka << " ditemukan pada indeks ke -" << i << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Angka " << CariAngka << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
