#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Bem vindo à loja Bugigangas e Quinquilharias, para calcular o peso total de seu pedido, siga as instruções a seguir: \n";

    int bugigangas, quinquilharias;
    std::cout << "Insira o numero que bugigangas que está levando: ";
    std::cin >> bugigangas;

    std::cout << "insira o número de quinquilharias que está levando: ";
    std::cin >> quinquilharias;

    float orderweight = float(bugigangas * 0.075 + quinquilharias * 0.112);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Incrível! seu pedido tem um peso total de " << orderweight << "Kg!\n";

    return 0;
}