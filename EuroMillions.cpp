#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {

    random_device rd;
    mt19937 rng(rd());

    char keyPress;

    do {
        vector<int> key;
        vector<int> star;

        // KEY

        for (int i = 1; i <= 50; i++) {
            key.push_back(i);
        }

        shuffle(key.begin(), key.end(), rng);
        sort(key.begin(), key.begin() + 5);

        cout << "Key: ";
        for (int i = 0; i < 5; i++) {
            cout << key[i] << " "; 
        }

        // STAR

        for (int i = 1; i <= 12; i++) {
            star.push_back(i);
        }

        shuffle(star.begin(), star.end(), rng);
        sort(star.begin(), star.begin() + 2); 

        cout << "\nStars: ";
        for (int i = 0; i < 2; i++) {
            cout << star[i] << " "; 
        }

        // Ask to play again

        cout << "\nWould you like to generate a new key? [y/n] ";
        cin >> keyPress;

        if (keyPress == 'y') {
            system("clear");
        } else if (keyPress == 'n') {
            cout << "Closing the game..." << endl;
            break;
        }
    } while (true);

    return 0;
}
