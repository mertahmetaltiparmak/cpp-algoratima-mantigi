#include <iostream>

using namespace std;

int main() {
    int number, i = 1, faktoriyel = 1;
    cout << "bir sayi giriniz: ";
    cin >> number;

    while (i < number) {
        // i++ nereye yazdigina ve while icindeki statementlara dikkat et!!
        i++;
        faktoriyel *= i;
    } 
    cout << number << " != " << faktoriyel << "\n";

    return 0;
}