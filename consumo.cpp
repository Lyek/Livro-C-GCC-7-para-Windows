/**
 Este algoritmo tem por objetivo:
 � Apresentar uma mensagem na tela;
 � a mensagem "Alo Mundo!";
 � permite o usu�rio finalizar o programa;
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
