//PROGRAMA_AV1_Q1
/**Elaborar um programa em linguagem C++ que a partir da definição de valores reais calcule e apresente*/
/**de forma formatada sob a máscara 99999.99 o valor obtido a partir da expressão aritimética.*/

#include <iostream> // para utilizar funções cin e cout
#include <iomanip> // para manipular e formatar saída


int main(void)
{
    float RESULTADO, AX1, BY2, H7; // def. variaveis tipo float

    std::cout << std::setprecision(2); //precisão de 2 casas decimais
    std::cout << std::setiosflags(std::ios::right); // alinhamento a direita
    std::cout << std::setiosflags(std::ios::fixed); // fixa ponto flutuante

    std::cout << "Entre o Primeiro valor: " << std::endl;
    std::cin >> AX1; //1ª entrada
    std::cin.ignore(80, '\n'); //limpeza de buffer
    std::cout << std::endl; // pula uma linha

    std::cout << "Entre o Segundo valor: " << std::endl;
    std::cin >> BY2; //2ª entrada
    std::cin.ignore(80, '\n'); //limpeza de buffer
    std::cout << std::endl; // pula uma linha

    std::cout << "Entre o Terceiro valor: " << std::endl;
    std::cin >> H7;//3ª entrada
    std::cin.ignore(80, '\n');//limpeza de buffer
    std::cout << std::endl;// pula uma linha

    RESULTADO = AX1 * BY2 - H7; //multiplica a  1º entrada pela 2ª entrada e subtrai 3ª entrada.

    std::cout << std::setw(10) <<"O Resultado e: "<< std::endl << RESULTADO << std::endl;
    // setw define a largura do campo para a saída com 10 espaços


    // trecho para finalização do programa pelo usuário
    std::cout << std::endl;
    std::cout << "Tecle <Enter> para encerrar ..." << std::endl;
    std::cin.get();
    return 0;
}
