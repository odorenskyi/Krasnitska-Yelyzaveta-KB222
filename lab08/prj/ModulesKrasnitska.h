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

    #include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
#include <iostream>
#include <fstream>
#include <ctime>

int main() {
    std::ofstream outfile("input.txt", std::ios_base::app); 
#include <iostream>
#include <fstream>
#include "Krasnitska.h"
    
    


using namespace std;

int main() {
    double x, y, z;
    int v;
    
    
    
#include <fstream>
#include <string>

void HelloWorld()
{
    std::cout << "Hello wolrd";
}

class ClassLab12_Krasnitska
{
public:
    ClassLab12_Krasnitska(const float a = 1, const float b= 1):
        a(a),
        b(b),
        
    {

    }
    float getP();
    float geta();
    float getb ();
    float changea(float a);
    float changeb(float b);

private:
    float a;
    float b;
    
};

float ClassLab12_Krasnitska::getP()
{
    return 2*(a+b);
}

float ClassLab12_Krasnitska::changeLength(float a)
{
    a = a;
}

float ClassLab12_Krasnitska::changeWidth(float b)
{
    b = b;
}


float ClassLab12_Krasnitska::getLength()
{
    return a;
}

float ClassLab12_Krasnitska::getHeight()
{
    return b;
}


bool checkFileInFolder()
{
    std::string file = __FILE__;
    size_t checking = file.find("\\prj");

    if (checking == std::string::npos)
    {
        std::ofstream fileResult("../../TestSuite/TestResult.txt");

        fileResult << "Âñòàíîâëåí³ âèìîãè ïîðÿäêó âèêîíàííÿ ëàáîðàòîðíî¿ ðîáîòè ïîðóøåíî!\n";
        for (int i = 0; i < 100; i++)
            std::cout << "\a";

        fileResult.close();
        return false;
    }

    return true;
}

std::string writeResultToFile(ClassLab12_Krasnitska akvarium, int counter)
{
    return "Test Suite ¹" + std::to_string(counter)
     + "\nLength = " + std::to_string(akvarium.geta())
     + "\theight = " + std::to_string(akvarium.getb())
     + "\nResult = " + std::to_string(akvarium.getP()) + "\n";
}


#endif // MODULESKRASNITSKA_H_INCLUDED
