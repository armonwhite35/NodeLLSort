#include "LinkedList.h"


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList &list) {
    head = list.head;
}
LinkedList::~LinkedList() {
    delete head;
}

LinkedList& LinkedList::operator=(const LinkedList &rheads) {
    head = rheads.head;
    return *this;
}



void LinkedList::InsertionSort() { //(Node *ptr)
    Node *ptr = head;
    Node * currentNode = head->next;
    Node * lastNode = head;

    if (ptr == nullptr || ptr->next == nullptr) {
        return;
    }

    while (currentNode != nullptr) {

        if(lastNode->value < currentNode->value){
            currentNode = currentNode->next;
            lastNode = lastNode->next;
        }
        else{

            if (head->value > currentNode->value) {
                lastNode->next = currentNode->next;
                currentNode->next = head;
                head = currentNode;
            }else {
                ptr = head;
                while (ptr->next->value < currentNode->value && ptr->next != nullptr) {
                    ptr = ptr->next;
                }
                lastNode->next = currentNode->next;
                currentNode->next = ptr->next;
                ptr->next = currentNode;
            }
        }
        currentNode = lastNode->next;
    }
}

void LinkedList::append(Ramen obj) {
    if (head == nullptr){
        Node *tmp = new Node(obj,head);
        head = tmp;
        tmp->next = nullptr;
    } else{
        Node *back = head;
        while (back->next != nullptr){
            back = back->next;
        }
        Node *tmp = new Node(obj, head);
        back->next = tmp;
        tmp->next = nullptr;
    }
}
void LinkedList::printList() {
    Node * tmp;
    tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }


}
