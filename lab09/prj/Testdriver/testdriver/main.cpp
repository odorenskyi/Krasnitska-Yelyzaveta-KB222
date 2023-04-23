#include <iostream>

using namespace std;

int main() {
    double gasVolume, gasCost;

    gasVolume = 300;

    cout << "Введіть обʼєм використаного природного газу за місяць (м^3): ";
    cin >> gasVolume;

    if (gasVolume <= 208) {
        gasCost = gasVolume * 1.299;
    } else if (gasVolume <= 500) {
        gasCost = 208 * 1.299 + (gasVolume - 208) * 1.788;
    } else {
        gasCost = 208 * 1.299 + 292 * 1.788 + (gasVolume - 500) * 3.645;
    }

    cout << "Сума до сплати за спожитий газ: " << gasCost << " грн." << endl;

    return 0;
}

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, pair<string, string>> sizes = {
        {220, {"35", "2.5"}},
        {225, {"36", "3"}},
        {230, {"36.5", "3.5"}},
        {235, {"37", "4"}},
        {240, {"38", "4.5"}},
        {245, {"38.5", "5"}},
        {250, {"39", "5.5"}},
        {255, {"40", "6"}},
        {260, {"40.5", "6.5"}},
        {265, {"41", "7"}},
        {270, {"42", "7.5"}},
        {275, {"42.5", "8"}},
        {280, {"43", "8.5"}},
        {285, {"44", "9"}},
        {290, {"44.5", "9.5"}},
        {295, {"45", "10"}},
        {300, {"46", "10.5"}},
        {305, {"47", "11"}},
        {310, {"47.5", "11.5"}},
        {315, {"48", "12"}},
        {320, {"49", "12.5"}},
        {325, {"50", "13"}},
        {330, {"51", "13.5"}},
        {335, {"52", "14"}},
    };

    int size_cm;
    cout << "Введіть розмір взуття у сантиметрах: ";
    cin >> size_cm;

    if (sizes.count(size_cm)) {
        cout << "Розмір взуття в системі України: " << sizes[size_cm].first << endl;
        cout << "Розмір взуття в системі Великобританії: " << sizes[size_cm].second << endl;
    } else {
        cout << "Розмір взуття не знайдено" << endl;
    }

    return 0;
}

#include <iostream>

int main() {
    unsigned int n = 42;
    std::cout << "Введіть невід'ємне ціле число N: ";
    std::cin >> n;

    int count = 0;
    int bit = n & 1;

    if (bit == 1) {
        while ((n & 1) == 0 && n > 0) {
            count++;
            n >>= 1;
        }
    } else {
        while ((n & 1) == 1) {
            count++;
            n >>= 1;
        }
    }

    std::cout << "Кількість " << (bit == 1 ? "нулів" : "одиниць") << " в числі N дорівнює " << count << std::endl;

    return 0;
}

