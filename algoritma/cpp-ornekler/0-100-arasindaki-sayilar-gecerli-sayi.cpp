#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "bir sayi giriniz: ";
    cin >> number;

    if (number > 100 || number < 0) {
        cout << "gecersiz sayi.";
    }
    else 
        cout << "gecerli sayi.";

    return 0;
}