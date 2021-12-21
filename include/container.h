#pragma once /* Защита от двойного подключения заголовочного файла */
#include "bank.h"

template <typename T>
struct Node {
    int number;
    T data;
    Node<T> * next;
    Node<T> * after;
};

template <typename T>
class List {
    private:
    
        int count = 0;
        Node<T> * array = nullptr;
    
    public:
    
        List() {
            count = 0;
        }
    
        ~List() {
            if (array != nullptr) {
                for (int i = 0; i < count; i++) { // for (auto i : list) {}
                    Node<T> * tmp = array;
                    delete array->data;
                    array = array->next;
                    delete tmp;
                }
            }
        }
    
        Node<T> * operator[] (int iteration) { // Даёт доступ к объекту под индексом iteration
            if (count != 0) {
                if ((iteration > count - 1) || (iteration < (-1) * count)) {
                    throw std::logic_error("out of range!");
                } else {
                    if (iteration < 0) {
                        iteration = count + iteration;
                    }
    
                    Node<T> * tmp = array;
    
                    for (int i = 0; i < count; i++) {
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
        
            return nullptr;
        }
    
        void append(int newNumber, T newData) { // Добавляет элемент в конец списка
            Node<T> * tmp = new Node<T>;
            tmp->number = newNumber;
            tmp->data = newData;
            tmp->next = nullptr;
    
            if (count == 0) {
                array = tmp;
            } else {
                (*this)[-1]->next = tmp;
            }
    
            count++;
        }
    
        int getCount() {
            return count;
        }
    
//    void del (int iteration) {
//        
//    }
};
