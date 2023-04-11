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


    void addMarble(const Marble& marble) {
        _marbleJar.push_back(marble);
    }

    Marble removeMarble() {
        Marble _marbleRemoved = _marbleJar.back();
        _marbleJar.pop_back();
        return _marbleRemoved;
    }

    void listMarbles() const {
        for (const Marble& marble : _marbleJar) {
            std::cout << "Color: " << marble.getColor()
                      << ", Style: " << marble.getStyle()
                      << ", Size: " << marble.getSize() << std::endl;
        }
    }

private:
    vector<Marble> _marbleJar;


};