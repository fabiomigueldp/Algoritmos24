#include <iostream>
#include <iomanip>

int main() {
    std::cout << "     Olá! Bem vindo ao programa ineficiente de calculo da conta do almoço, para calcular o valor do seu\n";
    std::cout << "almoço de forma ineficiente, siga as seguintes instruções:\n";

    float suco, main, sobremesa;
    std::cout << "Insira o valor do custo de seu suco: ";
    std::cin >> suco;

    std::cout << "Insira o valor do custo de seu prato principal: ";
    std::cin >> main;

    std::cout << "Insira o valor do custo de sua sobremesa: ";
    std::cin >> sobremesa;

    float totalsc = suco + main + sobremesa;
    float total = (suco + main + sobremesa) * 1.1;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Ótimo! sua refeição lhe custará R$" << totalsc << ", com o acréscimo de 10% da taxa de serviço, o(a) Sr(a) deve R$" << total << ".\n";

    return 0;
}