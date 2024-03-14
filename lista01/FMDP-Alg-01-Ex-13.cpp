#include <iostream>
#include <iomanip>

// Definindo a função da área do triângulo

double area_triangulo(double b, double h) {
    double at = (b * h) / 2;
    return at;
}

int main() {
    std::cout << "Bem vindo ao programa de cálculo da área de um triângulo, para calcula a área de um triângulo, siga as instruções a seguir:\n";

    // Solicita os dados do comprimento da base e da altura do triângulo
    double b, h;
    std::cout << "Insira o comprimento da base do triângulo em uma unidade X: ";
    std::cin >> b;
    std::cout << "Insira a altura desse mesmo triângulo em uma unidade X: ";
    std::cin >> h;

    // Calcula a área do triângulo
    double area = area_triangulo(b, h);

    // Imprime a área do triângulo
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A área do triângulo com uma base que mede " << b << "X e uma altura " << h << "X, é de " << area << "X.\n";

    return 0;
}