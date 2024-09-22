//ilman arifin A.R 1Einformatika 2410631170143
#include <iostream>
using namespace std;

void cetakSegitiga(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {

        for (int j = i; j < tinggi; j++) {
            cout << " ";
        }


        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }


        cout << endl;
    }
}

int main() {
    int tinggi;


    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;


    cetakSegitiga(tinggi);

    return 0;
}
