//PROGRAMA_AV1_Q2
/** Este programa tem por objetivo capturar 3 valores inteiros positivos */
/** Calcular a soma de X+Y elevar ao quadrado e atribuir a variavel A */
/** Calcular a soma de Y+Z elevar ao quadrado e atribuir a variavel B */
/** Realizar a soma de (A+B) e atribuir a variavel C */
/** Apresentar a resposta para o usu�rio */

#include <iostream> //para utilizar as fun��es cin e cout
#include <cmath> // para utilizar fun��es matem�ticas como pow


int main(void)
{

  int A,B,C,X,Y,Z;  // variaveis

  std::cout << "Insira um valor inteiro positivo para [X]: " << std::endl;
  do // fa�a
    std::cin >> X; // entrada do usu�rio/
  while(X<=0);// enquanto condi��o falsa/
  std::cout << std::endl;


  std::cout << "Insira um valor inteiro positivo para [Y]: " << std::endl;
  do // fa�a
    std::cin >> Y; // entrada do usu�rio/
  while(Y<=0);// enquanto condi��o falsa/
  std::cout << std::endl;

  std::cout << "Insira um valor inteiro positivo para [Z]: " << std::endl;
  do // fa�a
    std::cin >> Z; // entrada do usu�rio/
  while(Z<=0);// enquanto condi��o falsa/
  std::cout << std::endl;


  A = pow(X+Y,2); //efetuando o quadrado de (X+Y)
  B = pow(Y+Z,2); //efetuando o quadrado de (Y+Z)
  C = (A+B)/2; //efetuando a soma de (A+B) e dividindo por 2

  std::cout<<"O valor e igual a: ";
  std::cout <<std::endl << C << std::endl; //retorno da resposta para o usu�rio

  std::cout << std::endl; // pulando uma linha
  std::cout << "Tecle <ENTER> para encerrar..." << std::endl;
  std::cin.get(); //oferecendo a op��o de encerrar para o usu�rio
  return 0;
}
