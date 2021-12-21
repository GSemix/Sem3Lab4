#include <iostream>
#include "include/bank.h"
#include "include/lab_3.h"
#include "include/container.h"

// #include <deque>         +           std::deque<Сontribution *> list;

int main () {
    SimpleСontribution simpleCont = SimpleСontribution(1000, Date(11, 12, 2018), 12, Date());
    UrgentСontribution urgentCont = UrgentСontribution(1000, Date(11, 12, 2018), 12, 5);
//    CurrencyСontribution currencyCont = CurrencyСontribution(900, Date(11, 12, 2018), 12, Date(), USD, 75);
    
    std::cout << simpleCont.showAll() << std::endl;
    std::cout << urgentCont.showAll() << std::endl;
//    std::cout << currencyCont.showAll() << std::endl;
    
    List list;
    
    CurrencyСontribution * test =  new CurrencyСontribution(900, Date(11, 12, 2018), 12, Date(), USD, 75);
    UrgentСontribution * test1 = new UrgentСontribution(1000, Date(11, 12, 2018), 12, 5);
    
    list.append(1, test);
    list.append(2, test1);
    
//    std::cout << list.getItem()->showAll() << std::endl;
    std::cout << list[1]->data->showAll() << std::endl;

    return 0;
}

// clear && clear && g++ main.cpp lib/lab_3.cpp lib/bank.cpp lib/container.cpp -o main -std=c++11 && ./main
