#include <iostream>
#include "include/bank.h"
#include "include/lab_4.h"
#include "include/container.h"

// #include <deque>         +           std::deque<Сontribution *> list;

int main () {
//           Пример с std::string
//    List<std::string *> list;
//
//    std::string * test = new std::string("aaa");
//
//    list.append(1, test);
//    std::cout << *(list[0]->data) << std::endl;
    
    List<Сontribution *> list;

    SimpleСontribution * simpleCont = new SimpleСontribution(1, 1000, Date(11, 12, 2018), 12, Date());
    UrgentСontribution * urgentCont = new UrgentСontribution(2, 1000, Date(11, 12, 2018), 12, 5);
    CurrencyСontribution * currencyCont =  new CurrencyСontribution(3, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
    
    UrgentСontribution * test1 = new UrgentСontribution(2, 1000, Date(11, 12, 2018), 12, 5);
    CurrencyСontribution * test2 =  new CurrencyСontribution(3, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
    UrgentСontribution * test3 = new UrgentСontribution(2, 1000, Date(11, 12, 2018), 12, 5);
    CurrencyСontribution * test4 =  new CurrencyСontribution(3, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
    UrgentСontribution * test5 = new UrgentСontribution(2, 1000, Date(11, 12, 2018), 12, 5);
    CurrencyСontribution * test6 =  new CurrencyСontribution(3, 900, Date(11, 12, 2018), 12, Date(), USD, 75);
    

    list.append(simpleCont);    //  0
    list.append(urgentCont);    //  1
    list.append(currencyCont);  //  2
    list.append(test1);         //  3
    list.append(test2);         //  4
    list.append(test3);         //  5
    list.append(test4);         //  6
    list.append(test5);         //  7
    list.append(test6);         //  8
    
    list.swap(-1, 0);
    list.del(0);

    for (int i = 0; i < list.getCount(); i++) {
        std::cout << list[i]->data->showAll() << std::endl;
    }
    
    
    
    return 0;
}

// clear && clear && g++ main.cpp lib/lab_4.cpp lib/bank.cpp -o main -std=c++11 && ./main
