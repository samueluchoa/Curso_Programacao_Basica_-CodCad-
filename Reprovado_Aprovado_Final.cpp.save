#include <iostream>

using namespace std;

int main() {
    float N1, N2;
    //cout << "Nota 1: ";
    cin >> N1;

    //cout << "Nota 2: ";
    cin >> N2;

    int IN1 = (N1 >=0 && N1 <= 10);
    int IN2 = (N2 >=0 && N2 <= 10);
    float media_ponderada = 0;
    if(IN1 && IN2) {
        media_ponderada = (N1 * 2 + N2 * 3)/5 * 1.0;
        if(media_ponderada >= 3 && media_ponderada < 7)
            cout << "Final";
        else if(media_ponderada >= 7){
            cout << "Aprovado";
        }
        else
            cout << "Reprovado";
    }


}
