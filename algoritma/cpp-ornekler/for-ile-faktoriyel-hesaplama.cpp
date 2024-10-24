#include <iostream>

using namespace std;

int main() {
    int number, faktoriyel = 1;

    cout << "bir sayi giriniz: ";
    cin >> number;
    if (number < 0) {
        cout << "hatali deger!";
        return 0;
    }
    for (int i = 1; i <= number; i++) {
        faktoriyel *= i;

    }
    cout << number << " != " << faktoriyel << "\n";

    return 0;
}