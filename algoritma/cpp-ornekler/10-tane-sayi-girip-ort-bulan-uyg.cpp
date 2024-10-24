#include <iostream>

using namespace std;

int main() {
    int number, result = 0, i;
    cout << "\t\t\t\tortalama hesaplama\n";

    for (i = 1; i <= 10; i++) {
        number = 0;
        cout << i << ". sayi girin:";
        cin >> number;

        result += number;
    }
    // / i yazmak olmaz cunku donguden cikmadan once i'nin degeri 11 oluyor ve oyle cikiyor o yuzden i - 1 belki olabilir.
    // veya dimdirek 10 yazabilirsin.
    cout << "\nSonuc: " << result / (i - 1) << "\n";

    return 0;
}