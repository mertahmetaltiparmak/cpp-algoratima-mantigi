#include <iostream>
#include <cmath>

using namespace std;

int main() {    
    int number, control = 1, j;

    cout << "bir sayi giriniz: ";
    cin >> number;

    for (j = 2; j <= sqrt(number); j++) {
        if (number % j == 0) {
            control = 2;
        }
        else 
            control = 1;
    }
    if (control == 1) 
        cout << number << " bir asal sayidir.";
    else 
        cout << number << " bir asal sayi degildir.";

    return 0;
}