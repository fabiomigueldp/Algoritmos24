#include <iostream>
#include <cmath>
#include <iomanip>

// Definindo as funções

double area_circulo(double raio) {
    double ac = M_PI * std::pow(raio, 2);
    return ac;
}

double volume_esfera(double raio) {
    double ve = 4.0/3.0 * M_PI * std::pow(raio, 3);
    return ve;
}

int main() {
    // Solicita o raio
    double raio;
    std::cout << "Insira um valor para o raio em uma unidade X: ";
    std::cin >> raio;

    // Calcula a área e o volume
    double area = area_circulo(raio);
    double volume = volume_esfera(raio);

    // Imprime a área e o volume
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A área de uma circunferência de raio " << raio << " é de " << area << "X^2.\n";
    std::cout << "O volume de uma esfera de raio " << raio << " é de " << volume << "X^3.\n";

    return 0;
}