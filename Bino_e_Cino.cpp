#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    cout << "===============================================\n";
    cout << "\t\t IMPAR OU PAR ?\n";
    cout << "Bino - PAR\nCino - IMPAR\n";
    cout << "===============================================\n";

	int B, C;
	cout << "Bino jogou : ";
	cin >> B;
	cout << "Cino jogou: ";
	cin >> C;

    int casoB = B >= 0 && B <= 10;
    int casoC = C >= 0 && C <= 10;

    int soma = (B + C);
    int resto = (soma % 2 == 0);

	if(casoB && casoC) {
        if(resto) {
            cout << "Bino venceu! Porque " << soma << " eh PAR\n";
        } else {
            cout << "Cino venceu! Porque " << soma << " eh IMPAR\n";
        }
	}
	cout << "Program Finished\n\n";
	system("pause");
}
