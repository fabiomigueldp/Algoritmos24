#include <iostream>
#include <cmath>
#include <iomanip>

// Definindo a função

double area_polreg(int n, double l) {
    double apolreg = (n * std::pow(l, 2)) / (4 * std::tan(M_PI / n));
    return apolreg;
}

int main() {
    std::cout << "Bem vindo ao programa de calculo da área de um polígono regular, siga as intruções:\n";

    // Solicita o número de lado e comprimento destes
    int n;
    double l;
    std::cout << "Insira o número de lados do polígono regular: ";
    std::cin >> n;
    std::cout << "Insira o comprimento dos lados do poígono regular em uma unidade X: ";
    std::cin >> l;

    // Calcula a área
    double area = area_polreg(n, l);

    // Imprime a área
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A área de um poígono regula de " << n << " lados, com cada um medindo " << l << "X, é de " << area << "X^2.\n";

    return 0;
}