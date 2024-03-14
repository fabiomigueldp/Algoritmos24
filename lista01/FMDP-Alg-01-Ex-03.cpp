#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Olá, para calcular a área de uma sala, siga as seguintes instruções:\n";

    float comprimento, largura;
    std::cout << "Insira o valor em metros do comprimento da sala: ";
    std::cin >> comprimento;

    std::cout << "Insira o valor em metros da largura da sala: ";
    std::cin >> largura;

    float area = comprimento * largura;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sua sala possui uma área de " << area << " metros quadrados.\n";

    return 0;
}