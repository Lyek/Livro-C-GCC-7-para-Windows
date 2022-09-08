// C02EX04.CPP


** O programa abaixo demonstra como utilizar somente os recursos
necessários a partir do "using" antes do "int main" declarando
cout, cin e endl somente **


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    char NOME[40];

    cout << "Informe seu nome: ";
    cin >> NOME;
    cin.ignore (80, '\n');

    cout << "Ola, " << endl;
    cout << NOME << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
