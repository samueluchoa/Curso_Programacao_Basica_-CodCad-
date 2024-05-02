///  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/// Num sorteio que distribui pr�mios, um participante inicialmente sorteia um inteiro NN e depois NN valores.
/// O n�mero de pontos do participante � o tamanho da maior sequ�ncia de valores consecutivos iguais.
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
