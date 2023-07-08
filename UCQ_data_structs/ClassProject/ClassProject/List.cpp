#include "List.h"
#include <iostream>




// 1er problema

template<typename T>
void List<T>::PushBack(const T& element) {
    elements.push_back(element);
}

template<typename T>
void List<T>::Print() {
    for (const auto& element : elements) {
        std::cout << element << ",";
    }
    std::cout << "\n";
}

template class List<char>; 

//2do problema

//template<typename T>
//List<T>::List(T* in_data, int in_size) : head(nullptr) {
//    for (int i = 0; i < in_size; ++i) {
//        Node<T>* newNode = new Node<T>(in_data[i]);
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node<T>* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
//        }
//    }
//}
//
//template<typename T>
//void List<T>::Print() {
//    Node<T>* current = head;
//    while (current != nullptr) {
//        std::cout << current->data << ",";
//        current = current->next;
//    }
//    std::cout << "\n";
//}

// 3er problema

//template<typename T>
//List<T>::List(T* in_data, int in_size) : head(nullptr) {
//    for (int i = 0; i < in_size; ++i) {
//        Node<T>* newNode = new Node<T>(in_data[i]);
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node<T>* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
//        }
//    }
//}
//
//template<typename T>
//void List<T>::Reverse() {
//    if (head == nullptr || head->next == nullptr) {
//        return;  // La lista está vacía o solo tiene un elemento, no es necesario invertir.
//    }
//
//    Node<T>* previous = nullptr;
//    Node<T>* current = head;
//    Node<T>* next = nullptr;
//
//    while (current != nullptr) {
//        next = current->next;
//        current->next = previous;
//        previous = current;
//        current = next;
//    }
//
//    head = previous;  // El último nodo se convierte en el primero.
//}
//
//template<typename T>
//void List<T>::Print() {
//    Node<T>* current = head;
//    while (current != nullptr) {
//        std::cout << current->data << ",";
//        current = current->next;
//    }
//    std::cout << "\n";
//
//}


// 4to problema

//template<typename T>
//List<T>::List(T* in_data, int in_size) : head(nullptr) {
//    for (int i = 0; i < in_size; ++i) {
//        Node<T>* newNode = new Node<T>(in_data[i]);
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node<T>* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
//        }
//    }
//}
//
//template<typename T>
//void List<T>::Unique() {
//    std::unordered_set<T> uniqueSet;  // Conjunto para almacenar valores únicos
//    Node<T>* current = head;
//    Node<T>* previous = nullptr;
//
//    while (current != nullptr) {
//        if (uniqueSet.find(current->data) != uniqueSet.end()) {
//            // El valor ya ha sido encontrado antes, por lo tanto, se debe eliminar el nodo actual.
//            Node<T>* temp = current;
//            current = current->next;
//
//            if (previous != nullptr) {
//                previous->next = current;
//            }
//            else {
//                head = current;
//            }
//
//            delete temp;
//        }
//        else {
//            // El valor no ha sido encontrado antes, se agrega al conjunto.
//            uniqueSet.insert(current->data);
//            previous = current;
//            current = current->next;
//        }
//    }
//}
//
//template<typename T>
//void List<T>::Print() {
//    Node<T>* current = head;
//    while (current != nullptr) {
//        std::cout << current->data << ",";
//        current = current->next;
//    }
//    std::cout << "\n";
//}