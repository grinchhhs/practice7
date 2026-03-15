#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    int i = 1;

    cout << "введи число: ";
    cin >> n;

    while(i <= n) {
        fact *= i;
        i++;
    }

    cout << "факторіал = " << fact << endl;

    return 0;
}