#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas deret: ";
    cin >> n;

    int sumGenap = 0, sumGanjil = 0;

    cout << "\nBilangan Genap: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sumGenap += i;
        }
    }

    cout << "\nJumlah bilangan genap = " << sumGenap << endl;

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sumGanjil += i;
        }
    }

    cout << "\nJumlah bilangan ganjil = " << sumGanjil << endl;

system("pause");
return 0;
}