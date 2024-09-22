//ilman arifin A.R 1Einformatika 2410631170143
#include <iostream>
using namespace std;


void fibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Deret Fibonacci: " << a << ", " << b;

    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen deret Fibonacci: ";
    cin >> n;


    if(n >= 2) {
        fibonacci(n);
    } else {
        cout << "Jumlah elemen harus lebih besar dari atau sama dengan 2." << endl;
    }

    return 0;
}
