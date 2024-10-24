#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "bir sayi giriniz: ";
    cin >> number;

    if (number % 5 == 0 && number % 3 == 0) {
        cout << "bu sayi hem 5'e hem 3'e bolunur.";
    } 
    else 
        cout << "bu sayi hem 5'e hem 3'e bolunmez.";

    return 0;
}