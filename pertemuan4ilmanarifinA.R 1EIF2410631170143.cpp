//ilman arifin A.R 1Einformatika 2410631170143
#include <iostream>
#include <vector>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}


vector<int> getFactors(int num) {
    vector<int> factors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) factors.push_back(i);
    }
    return factors;
}


int main() {
    int limit;
    cout << "Masukkan batas angka: ";
    cin >> limit;

    vector<int> oddNumbers;
    vector<int> evenNumbers;
    vector<int> primeNumbers;

    int sumOdd = 0, sumEven = 0, sumPrime = 0;


    for (int i = 1; i <= limit; ++i) {
        if (i % 2 == 0) {
            evenNumbers.push_back(i);
            sumEven += i;
        } else {
            oddNumbers.push_back(i);
            sumOdd += i;
        }

        if (isPrime(i)) {
            primeNumbers.push_back(i);
            sumPrime += i;
        }
    }


    cout << "\nBilangan Ganjil:\n";
    for (int num : oddNumbers) {
        cout << num << " (Faktor: ";
        vector<int> factors = getFactors(num);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << ")\n";
    }
    cout << "Jumlah bilangan ganjil: " << sumOdd << endl;


    cout << "\nBilangan Genap:\n";
    for (int num : evenNumbers) {
        cout << num << " (Faktor: ";
        vector<int> factors = getFactors(num);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << ")\n";
    }
    cout << "Jumlah bilangan genap: " << sumEven << endl;


    cout << "\nBilangan Prima:\n";
    for (int num : primeNumbers) {
        cout << num << " (Faktor: ";
        vector<int> factors = getFactors(num);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << ")\n";
    }
    cout << "Jumlah bilangan prima: " << sumPrime << endl;

    return 0;
}
