#include <iostream>
#define Phi 3.14
using namespace std;

// luas Dan Keliling Persegi
void Persegi(double Sisi) {
    cout << "Luas Persegi: " << (Sisi * Sisi) << endl;
    cout << "Keliling Persegi: " << (Sisi * Sisi * Sisi * Sisi) << endl;
}

// luas Dan Keliling Persegi Panjang 
void Persegipanjang(double Panjang, double Lebar) {
    cout << "Luas Persegi Panjang: " << (Panjang * Lebar) << endl;
    cout << "Keliling Persegi Panjang: " << (2 * (Panjang + Lebar)) << endl;
}

// Luas Dan Keliling Segitiga Siku Siku 
void Segitigasikusiku(double Alas, double Tinggi) {
    cout << "Luas Segitiga Siku Siku: " << (0.5 * Alas * Tinggi) << endl;
    cout << "Keliling Segitiga Siku Siku: " << (Alas + Tinggi + (Alas * Alas + Tinggi * Tinggi) / (Alas + Tinggi)) << endl;
}

// Luas Dan Keliling Lingkaran 
void Lingkaran(double JariJari) {
    cout << "Luas Lingkaran: " << (Phi * JariJari * JariJari) << endl;
    cout << "Keliling Lingkaran: " << (2 * Phi * JariJari) << endl;
}

int main() {
    int pilihan;
    do {
        cout << "\nPENGHITUNG LUAS DAN KELILING BANGUNAN DATAR" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga Siku-Siku" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Keluar" << endl;
        cout << "pilih angka yang sesuai: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            double Sisi;
            cout << "Masukkan sisi yang akan dihitung: ";
            cin >> Sisi;
            Persegi(Sisi);
            break;
        }
        case 2: {
            double Panjang, Lebar;
            cout << "Masukkan panjang yang akan dihitung: ";
            cin >> Panjang;
            cout << "Masukkan lebar yang akan dihitung: ";
            cin >> Lebar;
            Persegipanjang(Panjang, Lebar);
            break;
        }
        case 3: {
            double Alas, Tinggi;
            cout << "Masukkan alas yang akan dihitung: ";
            cin >> Alas;
            cout << "Masukkan tinggi yang akan dihitung: ";
            cin >> Tinggi;
            Segitigasikusiku(Alas, Tinggi);
            break;
        }
        case 4: {
            double JariJari;
            cout << "Masukkan jari-jari yang akan dihitung: ";
            cin >> JariJari;
            Lingkaran(JariJari);
            break;
        }
        case 5:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak ada, Tidak dapat memproses." << endl;
        }
    } while (pilihan != 5);

    return 0;
}