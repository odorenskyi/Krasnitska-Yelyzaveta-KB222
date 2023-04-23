#ifndef MODULESKRASNITSKA_H_INCLUDED
#define MODULESKRASNITSKA_H_INCLUDED

ModulesKrasnitskaAddInt():

    int ModulesKrasnitska(int i1, int i2);
int main() {
    double gasUsage = getGasUsage();
    double gasPrice = calculateGasPrice(gasUsage);
    printGasPrice(gasUsage, gasPrice);
    return 0;
}
#pragma once

#include <string>
#include <utility>

using namespace std;

pair<string, string> convert_size(pair<string, string> sizes);

#include <iostream>

int main() {
    unsigned int n;
    std::cout << "Введіть невід'ємне ціле число N: ";
    std::cin >> n;
    
    int count = 0;
    int bit = n & 1;

#endif // MODULESKRASNITSKA_H_INCLUDED
