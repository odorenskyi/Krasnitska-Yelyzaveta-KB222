//10.1
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


bool checkPunctuation(string text) {
    string originalText = "Як парость виноградної лози, плекайте мову.\n"
                          "Пильно й ненастанно політь бурʼян.\n"
                          "Чистіта від сльози вона хай буде.\n"
                          "Вірно і слухняно нехай вона щоразу служить вам,\n"
                          "Хоч і живе своїм живим життям.";


    for (int i = 0; i < text.length(); i++) {
        if (ispunct(text[i]) || isspace(text[i])) {
            text.erase(i--, 1);
        }
    }


    return text == originalText;
}

int main() {
    srand(time(NULL));  // Ініціалізуємо генератор випадкових чисел
    string authorInfo = "Красніцька Єлизавета м.Кропивницький 01.05.2023";
    int randomNumber = rand() % 91 + 10;  // Генеруємо випадкове число від 10 до 100
    string inputText;
    ifstream inputFile("input.txt");


    getline(inputFile, inputText, '\0');


    bool hasPunctuationMistakes = !checkPunctuation(inputText);


    ofstream outputFile("output.txt");
    outputFile << authorInfo << endl;
    outputFile << "Випадкове число: " << randomNumber << endl;
    outputFile << "Текст має пунктуаційні помилки: " << (hasPunctuationMistakes ? "так" : "ні") << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
//10.2
#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    std::ofstream outfile("input.txt", std::ios_base::app); // відкрити файл для дозапису
    if (!outfile) { // перевірити, чи вдалося відкрити файл
        std::cerr << "Помилка: не вдалося відкрити файл для дозапису!\n";
        return 1;
    }

    std::time_t now = std::time(nullptr); // отримати поточний час
    std::tm* now_tm = std::localtime(&now); // перетворити у структуру часу
    char date[11]; // буфер для дати у форматі "DD.MM.YYYY"
    std::strftime(date, sizeof(date), "%d.%m.%Y", now_tm); // отримати дату у форматі "DD.MM.YYYY"

    outfile << "\nДата дозапису: " << date << "\n"; // дописати дату до файлу
    outfile.close(); // закрити файл
    return 0;
}

//10.3

#include <iostream>
#include <fstream>
#include "ModulesKrasnitska.h"

using namespace std;

int main() {
    double x, y, z;
    int v;
    // Отримання вхідних даних
    cout << "Введіть числа x, y, z та натуральне число v:" << endl;
    cin >> x >> y >> z >> v;


    ofstream outFile;
    outFile.open("output.txt", ios_base::app);


    if (!outFile) {
        cerr << "Не вдалося відкрити файл output.txt" << endl;
        return 1;
    }


    outFile << "Результати функції s_calculation з аргументами " << x << ", " << y << ", " << z << ": " << s_calculation(x, y, z) << endl;


    int binaryV[32];
    int i = 0;
    while (v > 0) {
        binaryV[i] = v % 2;
        v /= 2;
        i++;
    }
    outFile << "Число " << v << " у двійковому коді: ";
    for (int j = i - 1; j >= 0; j--) {
        outFile << binaryV[j];
    }
    outFile << endl;

    // Закриття файлу
    outFile.close();

    return 0;
}
