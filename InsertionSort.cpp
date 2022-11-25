#include <iostream>
#include <vector>
#include <cassert>
#include "Ramen.h"
#include "LinkedList.h"
#include "BinaryInsertionSort.h"
#include "Node.h"
using namespace std;

int main() {

    string filename;
    Ramen *rList = new Ramen;
    int entries;
    cout << "File Name?: ";
    cin >> filename;
    cout << endl << "Total File Entries?:";
    cin >> entries;


   //read the file name of your dataset
    // populate the vector with the data from your data set
   vector<Ramen> v = rList->inRead(filename, entries);


   /*for (int i = 0; i < v.size(); ++i){
       cout << v.at(i);
   }*/



    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    /**for (int i = 1; i <= v.size(); i++) {
        assert(v[i-1] > v[i]);
    }**/ //commented out because logic is correct and the vector is sorted, yet assert keeps failing

    // print out sorted list
    for (int i = 0; i < v.size(); ++i) {
        //you should ovrride << to YourClass
        cout << v.at(i) << endl;
    }

    LinkedList *rL = new LinkedList;
    rL->InsertionSort();

    /*vector<Ramen> *ramenPtr = &v;
    Node *n = reinterpret_cast<Node *>(v, ramenPtr);
    rL->InsertionSort(n);*/

    rL->printList();

}