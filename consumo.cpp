/**
 Este algoritmo tem por objetivo:
 º Apresentar uma mensagem na tela;
 º a mensagem "Alo Mundo!";
 º permite o usuário finalizar o programa;
 **/

#include <iostream>
using namespace std;

int main (void)
{
  char NOME[40];

  cout << "Informe seu nome: " << endl;
  cin >> NOME;
  cin.ignore(80, '\n');

  cout << "Ola, " << NOME;
  cout << endl;

  cout <<"Tecle <Enter> para encerrar..." << endl;
  cin.get();
  return 0;
}
