#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main (void)
{
  char NOME[40];

  cout << "Informe seu nome: ";
  cin >> NOME;
  cin.ignore(80, '\n');

  cout << "Ola, " << endl;
  cout << NOME << endl;

  cout << endl;
  cout <<"Tecle <Enter> para encerrar..." << std::endl;
  cin.get();
  return 0;
}

