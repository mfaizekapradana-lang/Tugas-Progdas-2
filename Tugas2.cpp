#include <iostream>
using namespace std;

int main() {
    int jumlahBulan;
    cout << "Masukkan jumlah bulan yang ingin dihitung: ";
    cin >> jumlahBulan;

    double totalTagihan = 0;

    for (int i = 1; i <= jumlahBulan; i++) { 
        double kwh;
        int telatBayar;
        cout << "\nBulan ke-" << i << endl;
        cout << "Masukkan pemakaian listrik (kWh): ";
        cin >> kwh;
        cout << "Apakah telat bayar? (1 = ya, 0 = tidak): ";
        cin >> telatBayar;

       
        double biaya = kwh*1500; 

        if (telatBayar == 1) {
            double denda = biaya*0.05; 
            biaya += denda;
            cout << "Denda 5% ditambahkan: Rp" << denda << endl;
        }

        cout << "Tagihan bulan ini: Rp" << biaya << endl;
        totalTagihan += biaya;
    }

    cout << "\nTotal tagihan untuk " << jumlahBulan << " bulan = Rp" << totalTagihan << endl;

system("pause");
return 0;
}