#include <iostream>

using namespace std;

int main() {
    int numero_atletas = 3;
    int terminou_prova[numero_atletas];
    int ordem[numero_atletas];

    // Lendo os tempos e armazenando junto com o número do nadador
    for(int i = 0; i < numero_atletas; i++){
        cout << "Tempo do nadador " << i+1 << ": ";
        cin >> terminou_prova[i];
        ordem[i] = i + 1;
    }

    // Ordenando os tempos (e os números dos nadadores junto)
    for(int i = 0; i < numero_atletas; i++) {
        for(int j = i + 1; j < numero_atletas; j++) {
            if(terminou_prova[i] > terminou_prova[j]) {
                // Trocando os tempos
                int temp = terminou_prova[i];
                terminou_prova[i] = terminou_prova[j];
                terminou_prova[j] = temp;

                // Trocando os números dos nadadores
                temp = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = temp;
            }
        }
    }

    // Imprimindo a ordem dos nadadores
    cout << "Ordem dos nadadores:\n";
    for(int i = 0; i < numero_atletas; i++) {
        cout << "Nadador " << ordem[i] << "\n";
    }

    return 0;
}
