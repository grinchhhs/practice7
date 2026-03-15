#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "вводьте числа (0 для завершення): ";

    cin >> num;
    while(num != 0) {
        sum += num;
        cin >> num;
    }

    cout << "Сума = " << sum << endl;

    return 0;
}