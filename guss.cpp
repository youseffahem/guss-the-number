#include <iostream>
using namespace std;

int main() {
    int guessNumber = 5; 
    int tries = 0;      
    int choose;

    cout << "Choose a number between 1 and 5: " << endl;

    while (true) {
        cin >> choose;

        if (choose == guessNumber) {
            cout << "Nice! Your guess is correct.\n";
            break;
        } else {
            cout << "Wrong, try again." << endl;
            tries++;
        }

        if (tries == 3) {
            cout << "Sorry, you have failed all your attempts.\n";
            break;
        }
    }

    return 0;
}
