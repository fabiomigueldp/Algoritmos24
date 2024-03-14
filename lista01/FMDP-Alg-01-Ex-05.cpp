#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Bem vindo ao programa de reciclagem, para resgatar seus créditos, siga as seguintes instruções:\n";

    float pequenos, grandes;
    std::cout << "insira o número de recipientes de até 1 litro de volume que serão reciclados: ";
    std::cin >> pequenos;

    std::cout << "insira o número de recipientes com volume maior do que 1 litro que serão reciclados: ";
    std::cin >> grandes;

    float valorpequenos = pequenos * 0.10;
    float valorgrandes = grandes * 0.25;
    float credit = valorpequenos + valorgrandes;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Você recebeu R$" << credit << " em cŕeditos por sua reciclagem!\n";

    return 0;
}