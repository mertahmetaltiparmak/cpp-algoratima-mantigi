#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Notunuzu girin: ";
    cin >> number;

    if (number >= 85 && number <= 100) {
        cout << "A";
    }
    else if (number >= 70 && number < 85) {
        cout << "B";
    }
    else if (number >= 60 && number < 70) {
        cout << "C";
    }
    else if (number < 60 && number >= 0) {
        cout << "kaldin.";
    }
    else 
        cout << "bu nasil basardin.";

    return 0;
}