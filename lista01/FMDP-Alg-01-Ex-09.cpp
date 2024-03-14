#include <iostream>
#include <iomanip>

int main() {
    std::cout << "   Olá! Bem vindo ao programa de cálculo de resultados de investimentos que rendem 12%a.a\n";
    std::cout << "pelos próximos 3 anos, com uma precisão de duas casa decimais!\n";

    float value;
    std::cout << "Insira o valor inicial de seu investimento: R$";
    std::cin >> value;

    float a1 = value*1.12;
    float r1 = a1 - value;
    float a2 = a1*1.12;
    float r2 = a2 - a1;
    float a3 = a2*1.12;
    float r3 = a3 - a2;
    float rt = a3 - value;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "No primeiro ano, seu investimento renderá R$" << r1 << ", o valor total de seu investimento será de R$" << a1 << ".\n";
    std::cout << "No segundo ano, seu investimento renderá R$" << r2 << ", o valor total de seu investimento será de R$" << a2 << ".\n";
    std::cout << "No terceiro ano, seu investimento renderá R$" << r3 << ", o valor total de seu investimento será de R$" << a3 << ".\n";
    std::cout << "Passados os três anos, o seu investimento terá um rendimento total de R$" << rt << "\n";

    return 0;
}