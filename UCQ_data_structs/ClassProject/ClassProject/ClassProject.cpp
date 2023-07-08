#include "List.h"
//
int main() {
    List<char> myList = List<char>();  // Crea una instancia de la clase List con tipo de dato char
    myList.PushBack('a');  // Agrega el caracter 'a' a la lista
    myList.PushBack('b');  // Agrega el caracter 'b' a la lista
    myList.PushBack('c');  // Agrega el caracter 'c' a la lista

    myList.Print();  // Imprime los elementos de la lista

    return 0;
}

//
//// 2do problema
//
//int main() {
//    const int arraySize = 5;
//    int myArray[arraySize] = { 1, 3, 5, 7, 9 };
//
//    List<int> myList = List<int>(myArray, arraySize);
//
//    myList.Print();
//
//    return 0;
//}
//
////3er problema
//
//int main() {
//    int arraySize = 5;
//    int myArray[arraySize] = { 9, 7, 5, 2, 1 };
//
//    List<int> myList = List<int>(myArray, arraySize);
//
//    myList.Reverse();
//    myList.Print();
//
//    return 0;
//}


// 4to problema


//int main() {
//    const int arraySize = 8;
//    int myArray[arraySize] = { 1, 1, 2, 3, 4, 2, 3, 1 };
//
//    List<int> myList = List<int>(myArray, arraySize);
//
//    myList.Unique();
//    myList.Print();
//
//    return 0;
//}
