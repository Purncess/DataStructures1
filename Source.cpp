#include<iostream>
usingnamespace std;
#include"doublylinkedlist.h"
int main() { 
    // test case 1
    // Create a doubly linked list
    DoublyLinkedList Dll_1;
    // Each node contains only one integer of a string
    Node n11(10);
    Node n12(20);
    Node n13(30);
    Node n14(40);
    Node n15(50);
    // a doubly linked list of integers by inserting nodes
    Dll_1.addNewNodeToFront(&n11);        
    Dll_1.addNewNodeToBack(&n12);
    Dll_1.addNewNodeToFront(&n13);
    Dll_1.addNewNodeToBack(&n14);
    Dll_1.addNewNodeToFront(&n15); 
    Dll_1.drawDoublyLinkedList();
    cout << endl;
    system("PAUSE");
    return 0;
}
