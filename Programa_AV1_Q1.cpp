//PROGRAMA_AV1_Q1
/**Elaborar um programa em linguagem C++ que a partir da defini��o de valores reais calcule e apresente*/
/**de forma formatada sob a m�scara 99999.99 o valor obtido a partir da express�o aritim�tica.*/

#include <iostream> // para utilizar fun��es cin e cout
#include <iomanip> // para manipular e formatar sa�da


int main(void)
{
    float RESULTADO, AX1, BY2, H7; // def. variaveis tipo float

    std::cout << std::setprecision(2); //precis�o de 2 casas decimais
    std::cout << std::setiosflags(std::ios::right); // alinhamento a direita
    std::cout << std::setiosflags(std::ios::fixed); // fixa ponto flutuante

    std::cout << "Entre o Primeiro valor: " << std::endl;
    std::cin >> AX1; //1� entrada
    std::cin.ignore(80, '\n'); //limpeza de buffer
    std::cout << std::endl; // pula uma linha

    std::cout << "Entre o Segundo valor: " << std::endl;
    std::cin >> BY2; //2� entrada
    std::cin.ignore(80, '\n'); //limpeza de buffer
    std::cout << std::endl; // pula uma linha

    std::cout << "Entre o Terceiro valor: " << std::endl;
    std::cin >> H7;//3� entrada
    std::cin.ignore(80, '\n');//limpeza de buffer
    std::cout << std::endl;// pula uma linha

    RESULTADO = AX1 * BY2 - H7; //multiplica a  1� entrada pela 2� entrada e subtrai 3� entrada.

    std::cout << std::setw(10) <<"O Resultado e: "<< std::endl << RESULTADO << std::endl;
    // setw define a largura do campo para a sa�da com 10 espa�os


    // trecho para finaliza��o do programa pelo usu�rio
    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar ..." << std::endl;
    std::cin.get();
    return 0;
}
