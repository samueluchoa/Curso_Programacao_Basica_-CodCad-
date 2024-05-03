#include<iostream>

using namespace std;

int main() {

    int altura = 0;
    int base = 0;
    cout << "digite o valor da base: ";
    cin >> base;
    cout << "digite o valor da altura: ";
    cin >> altura;
    int stop = 1;
    while(stop) {
        int restricao_base = base >= 1 && base <= 1000;
        int restricao_altura = altura >= 1 && altura <= 1000;
        if(restricao_base && restricao_altura) {
            float area_retangulo = base * altura;
            cout << "Area de um retangulo " << base << " x " << altura << " eh " << area_retangulo << endl;
            stop = 0;
        }
         else {
            cout << "*******************************************\n";
            cout << "\t TENTE NOVAMENTE!\n";
            cout << "\t NUMEROS FORA DO INTERVALO!\n";
            cout << "******************************************\n";
            cout << "digite o valor da base: ";
            cin >> base;
            cout << "digite o valor da altura: ";
            cin >> altura;
        }
    }

    return 0;
 }
