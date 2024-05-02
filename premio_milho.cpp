#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int numeroDeDias = 0;
    int dia = 1;
    cout << "Digite o numero de dias:  ";
    cin >> numeroDeDias;

    while(numeroDeDias == 0) {
        cout << "O programa nao pode ser executado! O numero de dias precisa ser maior que zero!" << endl;
        cout << "Digite o numero de dias:  ";
        cin >> numeroDeDias;
    }

    int AcessoDiario = 0;
    int somaDeAcessos = 0;
    cout << "==================================\n";
    for (int i = 0; i < numeroDeDias; ++i) {
        cout << "Dia " << i+1 << "-> ";
        cin >> AcessoDiario;

        somaDeAcessos += AcessoDiario;
        if(somaDeAcessos < 1000000)
            dia++;
         else
            break;
    }
    if(numeroDeDias == 1)
        cout << "Em " << dia << " dia, o site resgistrou 1 milhao de acessos!" << endl;
    else
        cout << "Em " << dia << " dias, o site resgistrou 1 milhao de acessos!" << endl;

    /*
    int dias_necessarios = 0;
    while (soma_acessos < 1000000) {
        soma_acessos += 1;
        dias_necessarios += 1;
    }

    cout << dias_necessarios << endl;
    */
    return 0;
    system("pause");
}
