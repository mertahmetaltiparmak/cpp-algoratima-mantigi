#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "bir sayi giriniz: ";
    cin >> number;

    if (number % 2 == 0) 
        cout << "\nbu sayi cift bir sayidir.\n";
    else 
        cout << "\nbu sayi tek bir sayidir.\n";

    return 0;
}