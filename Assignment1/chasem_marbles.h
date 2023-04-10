#ifndef CHASEM_MARBLES_H
#define CHASEM_MARBLES_H

#endif //CHASEM_MARBLES_H

#include <iostream>
#include <string>
#include <vector> // contiguous memory structure

using namespace std;

class Marble {

public:
    // declaration and initialization follows same order
    Marble(const string& color, const string& style, float size)  // string passed by reference like assembly arrays
        : _color(color), _style(style), _size(size) {}

    //public getters
    string getColor() const { return _color; }
    string getStyle() const { return _style; }
    float getSize() const { return _size; }

private:
    string _color;
    string _style;
    float _size;

};

class Jar {

public:
    vector<Marble> _marbleJar;

    void addMarble(const Marble& marble) {
        _marbleJar.push_back(marble);
    }



};