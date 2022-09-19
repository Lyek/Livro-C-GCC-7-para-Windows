//C04EX05.CPP
//utilizando laço pós-teste c/ fluxo verdadeiro //
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int N, I, R;
  char RESP;

  do
    {
      cout << "Entre  o valor da tabuada: "; cin >> N;
      cin.ignore(80, '\n');
      cout << "\n";
      I = 1;
      do
        {
          R = N * I;
          cout << setw(2) << N << " X ";
          cout << setw(2) << I << " = ";
          cout << setw(2) << R << endl;
          I = ++I;
        }
      while (I <= 10);
      cout << endl;
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | qualquer letra p/ NAO: ";
      cin.get(RESP);
      cin.ignore();
    }
  while (RESP == 'S' or RESP =='s');
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
