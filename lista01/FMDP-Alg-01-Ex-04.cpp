#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Olá, para calcular a área de um terreno, siga as seguintes instruções:\n";

    float comprimento, largura;
    std::cout << "Insira o valor em metros do comprimento de seu terreno: ";
    std::cin >> comprimento;

    std::cout << "Insira o valor em metros da largura de seu terreno: ";
    std::cin >> largura;

    float area = comprimento * largura / 10000;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Seu terreno possui uma área de " << area << " hectare(s).\n";

    return 0;
}