#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "Olá! Bem vindo ao programa de aritmética, siga as instruções a seguir para ler análises de diferentes relações entre elementos a e b\n";

    int a, b;
    std::cout << "Insira um número inteiro para representar o elemento A: ";
    std::cin >> a;

    std::cout << "Insira um número inteiro para representar o elemento B: ";
    std::cin >> b;

    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;
    int resto = a % b;
    double log = std::log10(a);
    int potencia = std::pow(a, b);

    std::cout << "a + b = " << soma << "\n";
    std::cout << "a - b = " << diferenca << "\n";
    std::cout << "a * b = " << produto << "\n";
    std::cout << "a / b = " << quociente << "\n";
    std::cout << "Resto de a / b = " << resto << "\n";
    std::cout << "Log de base 10 de a = " << log << "\n";
    std::cout << "a ^ b = " << potencia << "\n";

    return 0;
}