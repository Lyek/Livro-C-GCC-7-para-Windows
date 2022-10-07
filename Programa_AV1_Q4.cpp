//PROGRAMA_AV1_Q4
/** O PROGRAMA EM QUESTÃO RETORNA O VALOR ZERO INFINITAMENTE */
/** POIS NÃO ESTAVA DENTRO DE UM BLOCO*/
/** NA HIPÓTESE DE QUE ESTIVESSE ELE RETORNARIA O VALOR 0123456789 */
/** PARA REALIZAR ESTE TESTE BASTA TIRAR O COMENTARIO DAS LINHAS 12, 14 E 15*/

#include <iostream>
int main(void)
{
    int I = 0;
    while (I <= 9)
    //{
      std::cout << I;
      //I++;
    //}

    return 0;
}
