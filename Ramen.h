//
// Created by armon on 4/16/2020.
//

#ifndef BINARYINSERTIONSORT_RAMEN_H
#define BINARYINSERTIONSORT_RAMEN_H

#include <string>
#include <vector>
#include "ostream"
#include "fstream"
#include "iostream"

using namespace std;

class Ramen {
private:
    int rNum;
    string brand;
    string variety;
    string style;
    string country;
    double stars;
public:
    Ramen(int r=0, string b="", string v="", string sty="", string c="", double str=0);
    bool operator<(Ramen &rhs) const;
    bool operator>(Ramen &rhs) const;
    bool operator==(Ramen &rhs) const;
    vector<Ramen> inRead(string filename, int entries);
    friend ostream& operator<<(ostream& os, const Ramen &rhs);
};


#endif //BINARYINSERTIONSORT_RAMEN_H
