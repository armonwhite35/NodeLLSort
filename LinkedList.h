#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
#include "Ramen.h"
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);

    //Assignment Operator
    LinkedList &operator=(const LinkedList & rhs);

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    void append(Ramen obj);
    bool Delete (Ramen obj);
    Ramen find (Ramen obj);
    void printList();
    void InsertionSort();

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H