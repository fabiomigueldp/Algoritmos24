#include <iostream>

int main() {
    std::cout << "Olá, siga as seguintes instruções:\n";

    int n;
    std::cout << "Insira um número: ";
    std::cin >> n;

    int res = (n*(n+1))/2;
    std::cout << res << "\n";

    return 0;
}