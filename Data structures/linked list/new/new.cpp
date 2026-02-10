#include <iostream>
#include "SinglyLinked.h"
using namespace std;




//save this with a header file .h for more shorter good lookiing code ;

int main() {
    singleLinkedList list;

    list.insertLast(50);
    list.insertFirst(72);
    list.insertLast(21);
    list.insertFirst(-2);
    list.insertAt(2, 5);
    list.insertFirst(-100);
    list.deleteFirst();// delete the first element -> it not showing complelty gone
    list.deleteLast();
    list.deleteAt(2);

    list.printList();

    return 0;
}