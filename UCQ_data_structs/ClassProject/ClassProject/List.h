

#ifndef LIST_H
#define LIST_H
#include <list>


//1er problema

template<typename T>

class List {

private:
    std::list<T> elements;

public:

    // Agrega un elemento al final de la lista.
     // element El elemento a agregar.
    
    void PushBack(const T& element);

    
     // Imprime cada elemento de la lista separados por una coma (',')
     // y a�ade un salto de l�nea ('\n') al final.
     
    void Print();
};



// 2do problema 
//
//template<typename T>
//class List {
//private:
//    template<typename U>
//    class Node {
//    public:
//        U data;
//        Node<U>* next;
//
//        Node(U value) : data(value), next(nullptr) {}
//    };
//
//    Node<T>* head;
//
//public:
//    List(T* in_data, int in_size);
//    void Print();
//};




// 3er problema

//template<typename T>
//class List {
//private:
//    template<typename U>
//    class Node {
//    public:
//        U data;
//        Node<U>* next;
//
//        Node(U value) : data(value), next(nullptr) {}
//    };
//
//    Node<T>* head;
//
//public:
//    /**
//     Constructor que recibe un puntero a un array de datos y su tama�o.
//     
//     in_data Puntero al array de datos.
//     in_size Tama�o del array.
//     */
//    List(T* in_data, int in_size);
//
//    /**
//     Invierte el orden de los elementos en la lista.
//      El primer nodo se convierte en el �ltimo y el �ltimo nodo se convierte en el primero.
//     */
//    void Reverse();
//
//    /**
//     Imprime cada elemento de la lista separados por una coma (',')
//y a�ade un salto de l�nea ('\n') al final.
//     */
//    void Print();
//};


// 4to problema
//
//template<typename T>
//class List {
//private:
//    template<typename U>
//    class Node {
//    public:
//        U data;
//        Node<U>* next;
//
//        Node(U value) : data(value), next(nullptr) {}
//    };
//
//    Node<T>* head;
//
//public:
//    /**
//     Constructor que recibe un puntero a un array de datos y su tama�o.
//     
//     in_data Puntero al array de datos.
//     in_size Tama�o del array.
//     */
//    List(T* in_data, int in_size);
//
//    /**
//     Borra de la lista todos los nodos que tengan un valor repetido,
//     dejando �nicamente un nodo por cada valor existente.
//     Para cada valor repetido, borra los nodos encontrados posteriormente.
//     */
//    void Unique();
//
//    /**
//     Imprime cada elemento de la lista separados por una coma (',')
//    y a�ade un salto de l�nea ('\n') al final.
//     */
//    void Print();
//};



#include "List.cpp"


#endif

