#pragma once /* Защита от двойного подключения заголовочного файла */
#include "bank.h"

//class List {
//private:
//
//    std::deque<Сontribution *> list;
//
//public:
//
//    List();
//    ~List();
//
//    Сontribution * getItem();
//    void push(Сontribution * item);
//    void pop_back(int number);
//};

struct Node {
    int number;
    Сontribution * data;
    Node * next;
};

template <class Eny>
class List {
    private:
    
        int count;
        Node * array; // Сделать для любого типа данных (с помощью template?)
    
    public:
    
        List();
        ~List();
    
        void append(int newNumber, Сontribution * newData);
        Сontribution * getItem();
        Node * operator[] (int iteration);
        
};
