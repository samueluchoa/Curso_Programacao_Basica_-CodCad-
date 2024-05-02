#include <iostream>

using namespace std;

int main() {

    // N � o n�mero de bandejas
    // L � o n�mero de latas
    // C � o n�mero de copos
    int N, L, C;

    cout << "Insira o numero de bandejas:  ";
    cin >> N;

    int n = 1 <= N &&  N <= 100;

    if (N > 0) {
        int quebrouCopos = 0;
        int cont = 1;
        while(cont <= N) {
            cout << "\n================================\n";
            cout << "Bandeja de Numero " << cont << "\n";
            cout << "Insira o numero de latas:  ";
            cin >> L;
            cout << "Insira o numero de copos:  ";
            cin >> C;

            int l = 0 <= L &&  L <= 100;
            int c = 0 <= C &&  C <= 100;

            if(l && c) {
                if(L > C) {
                    quebrouCopos = quebrouCopos + C;
                }
            }
            cont++;
        }

        cout << "\n============================================\n";
        cout << "Resultado \n";
        cout << "Numero de copos quebrados: " << quebrouCopos;
        cout << "\n============================================\n";
    } else {
        cout << "O programa n�o pode ser executado :c\n";
    }


    return 0;
}
