#include <iostream>
using namespace std;

int main() {
    string merk, model;
    double harga, dp, bunga, tenor, sisaPokok, bungaBulan, sisaPokokBunga, angsuran;

    // Input data
    cout << "Merk\t\t: ";
    getline(cin, merk);
    cout << "Model\t\t: ";
    getline(cin, model);
    cout << "Harga\t\t: ";
    cin >> harga;
    cout << "DP/Uang Muka\t\t: ";
    cin >> dp;
    cout << "Bunga %\t\t: ";
    cin >> bunga;
    cout << "Tenor (Bulan)\t: ";
    cin >> tenor;

    // Hitung angsuran
    sisaPokok = harga - dp;
    bungaBulan = (bunga / 100) * sisaPokok;
    sisaPokokBunga = sisaPokok + bungaBulan;
    angsuran = sisaPokokBunga / tenor;

    // Output hasil
    cout << "\nSimulasi Hitung Angsuran Kredit Motor\n";
    cout << "Merk\t\t: " << merk << endl;
    cout << "Model\t\t: " << model << endl;
    cout << "Harga\t\t: " << harga << endl;
    cout << "DP/Uang Muka\t: " << dp << endl;
    cout << "Bunga %\t\t: " << bunga << endl;
    cout << "Tenor (Bulan)\t: " << tenor << endl;
    cout << "Sisa Pokok (Rp)\t: " << sisaPokok << endl;
    cout << "Bunga (Rp)\t: " << bungaBulan << endl;
    cout << "Sisa Pokok+Bunga: " << sisaPokokBunga << endl;
    cout << "Angsuran\t: " << angsuran << endl;

    return 0;
}
