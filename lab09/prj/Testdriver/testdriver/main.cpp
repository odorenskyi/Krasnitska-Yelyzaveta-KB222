#include <iostream>
#include <ModulesKrasnitska.h>

using namespace std;

// Функція для тестування
void testGasCost(double gasVolume, double expectedCost) {
    double actualCost = getGasCost(gasVolume);
    string status = actualCost == expectedCost ? "passed" : "failed";
    cout << "Test case with gas volume " << gasVolume << ": " << status << endl;
    cout << "Expected cost: " << expectedCost << ", actual cost: " << actualCost << endl;
}

int main() {
    // Виконуємо тест-кейси
    testGasCost(100, 129.9);
    testGasCost(300, 584.92);
    testGasCost(700, 2431.1);

    return 0;
}

#include <iostream>
#include <cassert>
#include <ModulesKrasnitska.h>

using namespace std;

// Функція для тестування
int sum(int a, int b) {
    return a + b;
}

// Тест-кейс для функції sum
void test_sum() {
    assert(sum(2, 3) == 5);  // Перевірка 2 + 3 = 5
    assert(sum(-2, 3) == 1); // Перевірка -2 + 3 = 1
    assert(sum(0, 0) == 0);  // Перевірка 0 + 0 = 0
}

int main() {
    test_sum(); // Виклик тесту для функції sum
    cout << "All tests passed!\n";
    return 0;
}

#include <iostream>
#include <cassert>
#include <ModulesKrasnitska.h>

using namespace std;

// Функція для тестування
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Тест-кейс для функції is_prime
void test_is_prime() {
    assert(is_prime(2) == true);     // Перевірка простого числа 2
    assert(is_prime(17) == true);    // Перевірка простого числа 17
    assert(is_prime(4) == false);    // Перевірка складеного числа 4
    assert(is_prime(100) == false);  // Перевірка складеного числа 100
}

int main() {
    test_is_prime(); // Виклик тесту для функції is_prime
    cout << "All tests passed!\n";
    return 0;
}
