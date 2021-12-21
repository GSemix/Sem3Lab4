#include <iostream>
#include <ctime>
#include "../include/bank.h"
#include "../include/container.h"

int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

std::string currencyToString(Сurrency curr) {
    switch (curr) {
        case RUB:
            return "RUB";
        case USD:
            return "USD";
        case EUR:
            return "EUR";

        default:
            return "Error";
    }
}

//void sortBankList(List & list) {
//    
//}
