#include <iostream>

using namespace std;

int main() {
///*** """
/// Fun��o principal para resolver o desafio das l�mpadas.
/// """
///  ***// L� o n�mero de a��es e a sequ�ncia de a��es
  int n_acoes;
  cin >> n_acoes;
  int acoes[n_acoes];
  for (int i = 0; i < n_acoes; ++i) {
    cin >> acoes[i];
  }

  // Vari�veis para o estado das l�mpadas
  bool estado_lampada_a = false;
  bool estado_lampada_b = false;

  // Processa cada a��o
  for (int i = 0; i < n_acoes; ++i) {
    if (acoes[i] == 1) {
      estado_lampada_a = !estado_lampada_a;
    } else {
      estado_lampada_a = !estado_lampada_a;
      estado_lampada_b = !estado_lampada_b;
    }
  }

  // Imprime o estado final das l�mpadas A e B
  cout << (estado_lampada_a ? 1 : 0) << endl;
  cout << (estado_lampada_b ? 1 : 0) << endl;

  return 0;
}
