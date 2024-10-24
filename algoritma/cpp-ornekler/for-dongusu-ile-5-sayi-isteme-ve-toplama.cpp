#include <iostream>

using namespace std;

int main() {
    int result, number;

    for(int i = 1; i <= 5; i++) {
        number = 0;
        cout << i << ". sayiyi girin:";
        cin >> number;
        result += number;
    }
    cout << "\nSonuc: " << result;

    return 0;
}