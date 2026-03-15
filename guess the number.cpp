#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secret, guess;

    srand(time(0));
    secret = rand() % 100 + 1;

    do {
        cout << "ма бой, вгадай число від 1 до 100: ";
        cin >> guess;

        if(guess < secret) {
            cout << "загадане число більше" << endl;
        } else if(guess > secret) {
            cout << "загадане число менше" << endl;
        } else {
            cout << "CONGRATULATIONS MY BOY! Ти вгадав число." << endl;
        }

    } while(guess != secret);

    return 0;
}