#ifndef BINARYINSERTIONSORT_H
#define BINARYINSERTIONSORT_H

#include "Ramen.h"

#include <vector>
using namespace std;

int binarySearch(vector<Ramen> a, int item, int low, int high);
void insertionSort(vector<Ramen> &a, int n);

#endif //BINARYINSERTIONSORT_H
