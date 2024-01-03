#include <iostream>
#include <iomanip>


using namespace std;


int main() {
       //INPUT//
   
    string merk, model;
    int harga, dp, bungaPersen, tenor, sisaPokok, bunga, sisaPokokBunga, angsuran;
    
    cout << "|====|PROGRAM PENDEK SEDERHANA SIMULASI HITUNG ANGSURAN KREDIT MOTOR|===| " << endl << endl;

    
    cout << "|MEREK MOTOR    : ";
    cin >> merk;
    cout << "|MODEL MOTOR    : ";
    cin >> model;
    cout << "|HARGA MOTOR    :Rp,";
    cin >> harga;
    cout << "|DP/UANG MUKA   :Rp,";
    cin >> dp;
    cout << "|BUNGA (%)      :";
    cin >> bungaPersen;
    cout << "TENOR (BULAN)  : ";
    cin >> tenor;
    
    
     
     
    sisaPokok = harga - dp;
    bunga = (sisaPokok * bungaPersen) / 100;
    sisaPokokBunga = sisaPokok + bunga;
    angsuran = sisaPokokBunga / tenor;

    cout << "|=================================|" << endl;
    cout << "|MEREK MOTOR          : " << merk << "|"<< endl;
    cout << "|MODEL MOTOR          : " << model<<"|" << endl;
    cout << "|HARGA MOTOR          : RP," << harga << "|" << endl;
    cout << "|UANG MUKA            : RP,"<< dp << "|"<< endl; 
    cout << "|BUNGA                : " << bunga << "|" << endl;
    cout << "|TENOR (BULAN)        : " << tenor << "|" << endl;
    cout << "|SISA POKOK + BUNGA   : " << sisaPokokBunga <<"|" << endl;
    cout << "|ANGSURAN PERBULAN    : " << angsuran <<"|" << endl;
    cout << "|=================================|" << endl;

    return 0;
    //CODE BY CHAT GPT DI RECODE DIKIT HEHEHE//
    //FERRY HIDAYAT NIM 112311006//
}
