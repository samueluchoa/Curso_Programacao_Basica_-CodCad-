#include <iostream>

using namespace std;

int main() {
///*** """
/// Função principal para resolver o desafio das lâmpadas.
/// """
///  ***// Lê o número de ações e a sequência de ações
  int n_acoes;
  cin >> n_acoes;
  int acoes[n_acoes];
  for (int i = 0; i < n_acoes; ++i) {
    cin >> acoes[i];
  }

  // Variáveis para o estado das lâmpadas
  bool estado_lampada_a = false;
  bool estado_lampada_b = false;

  // Processa cada ação
  for (int i = 0; i < n_acoes; ++i) {
    if (acoes[i] == 1) {
      estado_lampada_a = !estado_lampada_a;
    } else {
      estado_lampada_a = !estado_lampada_a;
      estado_lampada_b = !estado_lampada_b;
    }
  }

  // Imprime o estado final das lâmpadas A e B
  cout << (estado_lampada_a ? 1 : 0) << endl;
  cout << (estado_lampada_b ? 1 : 0) << endl;

  return 0;
}
