#include <iostream>
#include "include/bank.h"
#include "include/lab_3.h"
#include "include/container.h"

// #include <deque>         +           std::deque<Сontribution *> list;

int main () {
    List<Сontribution *> list;

    SimpleСontribution * simpleCont = new SimpleСontribution(1000, Date(11, 12, 2018), 12, Date());
    UrgentСontribution * urgentCont = new UrgentСontribution(1000, Date(11, 12, 2018), 12, 5);
    CurrencyСontribution * currencyCont =  new CurrencyСontribution(900, Date(11, 12, 2018), 12, Date(), USD, 75);

    list.append(1, simpleCont);
    list.append(2, urgentCont);
    list.append(2, currencyCont);

    for (int i = 0; i < list.getCount(); i++) {
        std::cout << list[i]->data->showAll() << std::endl;
    }
    
    return 0;
}

// clear && clear && g++ main.cpp lib/lab_3.cpp lib/bank.cpp lib/container.cpp -o main -std=c++11 && ./main
