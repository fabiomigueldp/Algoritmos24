#include <iostream>
#include <cmath>
#include <iomanip>

// Definindo as funções

double ll(double l1, double l2, double l3) {
    double lll = (l1 + l2 + l3) / 2;
    return lll;
}

double area_triangulo(double l, double l1, double l2, double l3) {
    double at = std::sqrt(l * (l - l1) * (l - l2) * (l - l3));
    return at;
}

bool is_valid_triangle(double l1, double l2, double l3) {
    return l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1;
}

int main() {
    std::cout << "Bem vindo ao programa para calcular a área de um triângulo, dados os comprimentos de seus três lados, siga as instrtuções a seguir:\n";

    // Solicita os dados de l1, l2 e l3
    double l1, l2, l3;
    std::cout << "Insira o comprimento de l1 em uma unidade X: ";
    std::cin >> l1;
    std::cout << "Insira o comprimento de l2 em uma unidade X: ";
    std::cin >> l2;
    std::cout << "Insira o comprimento de l3 em uma unidade X: ";
    std::cin >> l3;

    if (is_valid_triangle(l1, l2, l3)) {
        // Calcula l e a área
        double l = ll(l1, l2, l3);
        double area = area_triangulo(l, l1, l2, l3);

        // Imprime a área
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "A área do triângulo é de " << area << "X^2\n";
    } else {
        std::cout << "Os valores fornecidos não formam um triângulo válido.\n";
    }

    return 0;
}