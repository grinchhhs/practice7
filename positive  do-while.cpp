#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "введи позитивне число: ";
        cin >> n;
    } while(n < 0);

    cout << "ти ввів...: " << n << endl;

    return 0;
}