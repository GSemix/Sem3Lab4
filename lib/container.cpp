#include <iostream>
#include "../include/container.h"
#include "../include/bank.h"

//List::List() {}
//
//List::~List () {
//    for (auto i : list) {
//        delete i;
//        list.pop_front();
//    }
//}
//
//Сontribution * List::getItem () {
//    return list[0];
//}
//
//void List::push (Сontribution * item) {
//    list.push_back(item);
//}
//
//void List::pop_back(int number) {
//    for (auto i : list) {                 !!!!!!!!!!!!!!!
//        if i->
//        list.pop_back();
//    }
//}


List::List() {
    count = 0;
    array = new Node;
}

List::~List() {
    delete array;
}

void List::append(int newNumber, Сontribution * newData) { // Добавляет элемент в конец списка
    Node * tmp = new Node;
    tmp->number = newNumber;
    tmp->data = newData;
    tmp->next = nullptr;
    
    if (count == 0) {
        array->number = newNumber;
        array->data = newData;
        array->next = nullptr;
    } else {
        (*this)[-1]->next = tmp;
    }

    count++;
}

Сontribution * List::getItem() {
    return array->data;
}

Node * List::operator[] (int iteration) { // Даёт доступ к объекту под индексом iteration
    if (count != 0) {
        if ((iteration > count - 1) || (iteration < (-1) * count)) {
            throw std::logic_error("out of range!");
        } else {
            if (iteration < 0) {
                iteration = count + iteration;
            }
        
            Node * tmp = array;
    
            for (size_t i = 0; i < count; i++) {
                if (i == iteration) {
                    return tmp;
                } else {
                    tmp = tmp->next;
                }
            }
        }
    } else {
        throw std::logic_error("list is empty!");
    }
}
