//PROGRAMA_AV1_Q3
//* Este programa tem por finalidade verificar qual o resultado final */
//* considerando que este programa foi feito a mão distante de um computador*/
//* Qual seria a possível saida? */


#include <iostream>
using namespace std;

int main(void)
{
    int X = 7;

  // se o valor estiver X++, compara e depois soma 1 em X.
  // se o valor estiver ++X, soma 1 em X e depois compara.
    if ( X++ == 7 && X++ == 8 && ++X == 10)
  //    7 = 7 ? soma 1
  //                8 = 8 ? some 1
  //                              9+1 = 10 ?
        X = ++X;
  // se sim 11 = 1+10

    else
        X = X + X++;
    cout << X;

    return 0;
}
