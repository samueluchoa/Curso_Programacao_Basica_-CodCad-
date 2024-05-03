#include <iostream>
#include <vector>

using namespace std;

int main (){
    int numero_atletas = 3;
    vector <int> terminou_prova(numero_atletas);

    // inserindo valores no vetor;
    for(int t = 0; t < numero_atletas; t++){
        cout << "Atleta " << t+1 << ":  ";
        cin >> terminou_prova[t];
    }
    int aux = 0;
    for(int i = 1; i < numero_atletas; i++) {
        if(terminou_prova[i] > terminou_prova[i-1]) {

            aux = terminou_prova[i];
            terminou_prova[i] = terminou_prova[i-1];
            terminou_prova[i-1] = aux;
        } else {
            aux = terminou_prova[i-1];
            terminou_prova[i-1] = terminou_prova[i];
            terminou_prova[i] = aux;


        }
    }

    for(int k = 0; k < numero_atletas; k++)
        cout << terminou_prova[k]<< endl;






}
