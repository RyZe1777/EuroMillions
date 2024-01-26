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
        vector<int> chave;
        vector<int> estrela;

        // Chave

        for (int i = 1; i <= 50; i++) {
            chave.push_back(i);
        }

        shuffle(chave.begin(), chave.end(), rng);
        sort(chave.begin(), chave.begin() + 5);

        cout << "Chave: ";
        for (int i = 0; i < 5; i++) {
            cout << chave[i] << " "; 
        }

        // Estrelas

        for (int i = 1; i <= 12; i++) {
            estrela.push_back(i);
        }

        shuffle(estrela.begin(), estrela.end(), rng);
        sort(estrela.begin(), estrela.begin() + 2); 

        cout << "\nEstrelas: ";
        for (int i = 0; i < 2; i++) {
            cout << estrela[i] << " "; 
        }

        // Outra chave

        cout << "\nGostaria de originar outra chave? [s/n] ";
        cin >> keyPress;

        if (keyPress == 's') {
            system("clear");
        } else if (keyPress == 'n') {
            cout << "A fechar o jogo" << endl;
            break;
        }
    } while (true);

    return 0;
}