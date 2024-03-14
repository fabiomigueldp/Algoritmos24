#include <iostream>
#include <cmath>
#include <iomanip>

// Função para converter graus em radianos
double toRadians(double degree) {
    return degree * M_PI / 180.0;
}

double haversine(double lat1, double lon1, double lat2, double lon2) {
    const double R = 6372.8;  // Raio da Terra em km

    // Converter graus decimais para radianos
    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);
    lat1 = toRadians(lat1);
    lat2 = toRadians(lat2);

    // Aplicar a fórmula de Haversine
    double a = std::pow(std::sin(dLat/2), 2) + std::pow(std::sin(dLon/2), 2) * std::cos(lat1) * std::cos(lat2);
    double c = 2 * std::asin(std::sqrt(a));

    // Calcular a distância em km
    double distance = R * c;
    return distance;
}

int main() {
    // solicita as coordenadas do ponto A
    double lat1, lon1;
    std::cout << "Insira a latitude do ponto A: ";
    std::cin >> lat1;
    std::cout << "Insira a longitude do ponto A: ";
    std::cin >> lon1;

    // solicita as coordenadas do ponto B
    double lat2, lon2;
    std::cout << "Insira a latitude do ponto B: ";
    std::cin >> lat2;
    std::cout << "Insira a longitude do ponto B: ";
    std::cin >> lon2;

    // calcula a distância
    double dist = haversine(lat1, lon1, lat2, lon2);

    // imprime a distância em km
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "A distância entre os pontos A e B é de " << dist << " km.\n";

    return 0;
}