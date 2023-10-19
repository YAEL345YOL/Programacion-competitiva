#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    std::vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    std::cout << "Números primos hasta " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n = 50; // Puedes ajustar este límite según tus necesidades
    sieveOfEratosthenes(n);
    return 0;
}
