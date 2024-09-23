#include "Linked_List.h"
#include <iostream>

int main() {
    Linked_List list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.show();  

    list.deleteAt(1); 
    list.show();  

    return 0;
}
