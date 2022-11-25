//
// Created by armon on 4/16/2020.
//

#include <fstream>
#include "Ramen.h"
#include "iostream"
#include "fstream"
#include "istream"
#include <string>
#include "sstream"
#include "vector"

Ramen::Ramen(int r, string b, string v, string sty, string c, double str) {
    rNum = r;
    brand = b;
    variety = v;
    style = sty;
    country = c;
    stars = str;
}

bool Ramen::operator<(Ramen &rhs) const {
    if (rNum < rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

bool Ramen::operator>(Ramen &rhs) const {
    if (rNum > rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

bool Ramen::operator==(Ramen &rhs) const {
    if (rNum == rhs.rNum) {
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream &os, const Ramen &rhs) {
    os << rhs.rNum <<", " << rhs.brand <<", " << rhs.variety <<", " << rhs.style <<", " << rhs.country <<", " << rhs.stars << endl;
    return os;
}

vector<Ramen> Ramen::inRead(string filename, int entries){
    vector<Ramen> ramenObj(entries);
    int counter = 0;
    ifstream in;
    string line;
    in.open(filename);
    if (!in.good()) {
        std::cout << "Unable to open file: " << filename << endl;
    }
    getline(in, line);
    while( counter <= entries){
        Ramen nthObject;
        string substring;

        getline(in, substring, ',');//review #
        int tmp1;
        istringstream(substring) >> tmp1;
        nthObject.rNum = tmp1;
        getline(in, substring, ',');//Brand
        nthObject.brand = substring;
        getline(in, substring, ',');//variety
        nthObject.variety = substring;
        getline(in, substring, ',');//style
        nthObject.style = substring;
        getline(in, substring, ',');//country
        nthObject.country = substring;
        getline(in, substring, ',');//stars
        double tmp2;
        istringstream(substring) >> tmp2;
        nthObject.stars = tmp2;

        ramenObj.push_back(nthObject);
        cout << nthObject;

        counter++;
    }
    return ramenObj;
}
