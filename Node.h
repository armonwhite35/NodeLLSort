#ifndef NODE_H
#define NODE_H

#include "Ramen.h"

class Node {
public:
    // Node constructor
    Node(Ramen v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    Ramen value;
    Node* next;

};

#endif //NODE_H
