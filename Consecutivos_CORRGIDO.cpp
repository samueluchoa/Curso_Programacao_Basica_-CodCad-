#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numeroSorteado = 0;
    cin >> numeroSorteado;
    vector<int> sequenciaNumerosSorteados(numeroSorteado);

    // Adicionando valores ao vetor
    for(int p = 0; p < numeroSorteado; p++) {
        cin >> sequenciaNumerosSorteados[p];
    }

    int maxSeq = 0;
    int currSeq = 1;

    // Verificando a maior sequ�ncia de valores consecutivos iguais
    for(int i = 1; i < numeroSorteado; i++) {
        if(sequenciaNumerosSorteados[i] == sequenciaNumerosSorteados[i-1]) {
            currSeq++;
        } else {
            currSeq = 1;
        }
        if(currSeq > maxSeq) {
            maxSeq = currSeq;
        }
    }
    //cout << maxSeq << endl;
    cout << "O tamanho da maior sequ�ncia de valores consecutivos iguais �: " << maxSeq << endl;

    return 0;
}

