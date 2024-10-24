#include <iostream>

using namespace std;

int main() {
    int choice, numberOne, numberTwo, result = 0;
    cout << "1 - toplama\n";
    cout << "2 - cikarma\n";
    cout << "3 - carpma\n";
    cout << "4 - bolme\n";
    cout << "0 - cikis\n";

    cout << "\nseciminizi yapin: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "birinci sayiyi girin: ";
            cin >> numberOne;
            cout << "ikinci sayiyi girin: ";
            cin >> numberTwo;

            result = numberOne + numberTwo;
            cout << "Sonuc: " << result << "\n";
            
            break;
        case 2:
            cout << "birinci sayiyi girin: ";
            cin >> numberOne;
            cout << "ikinci sayiyi girin: ";
            cin >> numberTwo;

            result = numberOne - numberTwo;
            cout << "Sonuc: " << result << "\n";

            break;
        case 3:
            cout << "birinci sayiyi girin: ";
            cin >> numberOne;
            cout << "ikinci sayiyi girin: ";
            cin >> numberTwo;

            result = numberOne * numberTwo;
            cout << "Sonuc: " << result << "\n";

            break;
        case 4:
            cout << "birinci sayiyi girin: ";
            cin >> numberOne;
            cout << "ikinci sayiyi girin: ";
            cin >> numberTwo;

            result = numberOne / numberTwo;
            cout << "Sonuc: " << result << "\n";

            break;
        case 0:
            cout << "\ncikis yapiliyor...\n";
            break;
        default:
            cout << "hatali deger!\n";
    }

    return 0;
}