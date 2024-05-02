/// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
/// A saída do seu programa deve conter apenas uma linha com os divisores de X separados por um espaço em branco.
/// O divisores devem ser impressos em ordem crescente.
/// 2 <= X <= 10^9
/// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include <iostream>
#include <cmath>
using namespace std;

int intervalo (int numero) {
    if(numero >= 2 && numero <= pow(10, 9))
        return numero;
    else
        cout << "Numero fora do intervalo!";
}
int main() {
    int numero = 0;
    cin >> numero;
    numero = intervalo(numero);
    for(int divisores = 1; divisores <= numero; divisores++) {
        if(numero % divisores == 0) {
            cout << divisores << " ";
        }
    }
}
