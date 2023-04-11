#include "chasem_marbles.h"

#include <iostream>
#include <string>
#include <vector>

int main() {

    cout << "We place three marbles in a jar." << endl;
    // creating some marble objects for testing, represents putting them in the jar
    Marble marble_1("red/white", "aggie", 25.0);
    Marble marble_2("blue/green", "opaque", 30.2);
    Marble marble_3("green", "striped", 23.9);
    Marble marble_4("green", "onionskin", 25.0);
    Marble marble_5("rainbow", "opaque", 28.2);


    // instantiating a jar and adding 3 marbles
    Jar jar;
    jar.addMarble(marble_1);
    jar.addMarble(marble_2);
    jar.addMarble(marble_3);

    cout << "The jar contains the following marbles." << endl;
    //list marbles
    jar.listMarbles();
    cout<<endl;

    // remove marbles
    Marble removedMarble = jar.removeMarble();

    cout << "We remove the last marble put in." << endl;
    cout << "The marble removed is " << removedMarble.getColor() << " [color], "
    << removedMarble.getStyle() << " [style], and " << removedMarble.getSize() << "mm [size] " << endl;

    cout<<endl;

    cout << "After removal, the jar now contains the following marbles." << endl;
    jar.listMarbles();

    cout << "\nWe place two additional marbles in the jar," << endl;
    jar.addMarble(marble_4);
    jar.addMarble(marble_5);
    jar.listMarbles();

    cout << "\nWe shake the jar." << endl;
    jar.shakeJar();
    jar.listMarbles();

    cout << "\nWe pull a random marble from the jar." << endl;

    Marble removedMarble2 = jar.removeMarble();

    cout << "The marble removed is " << removedMarble2.getColor() << " [color], "
         << removedMarble2.getStyle() << " [style], and " << removedMarble2.getSize() << "mm [size]\n " << endl;

    jar.listMarbles();

    return 0;
}
