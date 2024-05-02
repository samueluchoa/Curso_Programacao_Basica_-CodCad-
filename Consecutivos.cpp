///  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/// Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro NN e depois NN valores.
/// O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais.
/// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numeroSorteado = 0;
    cin >> numeroSorteado;
    int tamanho = numeroSorteado;
    vector <int> sequenciaNumerosSorteados[tamanho];

    // Adicionando valores ao vetor
    for(int p = 0; p < tamanho; p++) {
        cin >> sequenciaNumerosSorteados[p];
    }

    int vetorComparador[tamanho];
    for(int i = 0; i < tamanho; i++){
        vetorComparador[i] = sequenciaNumerosSorteados[i];
            //cout << vetorComparador[i] << " ";
        }

    int vetorValorRepetido[tamanho];
    for(int i = 0; i < tamanho; i++)
        vetorValorRepetido[i] = 0;


    for(int i = 0, k = i; i < tamanho; k = i, i++) {
        for(int j = 0; j < tamanho; j++){
            if(sequenciaNumerosSorteados[i] == vetorComparador[j])
                vetorValorRepetido[k] = sequenciaNumerosSorteados[i];
        }
    }

        for(int i = 0; i < tamanho; i++){
            if(vetorValorRepetido[i] != 0) {
                if(vetorValorRepetido[i] == vetorValorRepetido[i+1]){
                    cout << "["<<i<<"] = ";
                    cout << vetorValorRepetido[i] << endl;
                }
            }
            else
                cout << " ";
        }


}
