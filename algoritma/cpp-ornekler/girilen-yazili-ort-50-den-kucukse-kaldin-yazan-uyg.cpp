#include <iostream>

using namespace std;

int main() {
    int note1, note2, note3, average;

    cout << "birinci notunuzu girin: ";
    cin >> note1;
    cout << "ikinci notunuzu giriniz: ";
    cin >> note2;
    cout << "ucuncu notunuzu giriniz: ";
    cin >> note3;

    average = (note1 + note2 + note3) / 3;

    cout << "\nNot ortalamaniz: " << average;

    if (average < 50) {
        cout << "\nKaldiniz.";
    }
    else 
        cout << "\ngectiniz.";

    return 0;
}