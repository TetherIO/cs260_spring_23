## Bag of Marbles
### Max Chase

The purpose of this assignment was to represent a marble and bag (in my case a jar) in a simple way using c++. With this in mind, I created a header file that contained two classes to be used in my source tester file. The two classes are Jar and Marble. The marble class takes three parameters that relate to color, style, and size in mm. It includes getters but not setters and the data members are private. The Jar class does not use a constructor but instead initializes a private data memeber, a vector attribute, which represents a physical container, the jar. I have methods to add and remove marbles from the vector structure; in addition, I have a method that uses a simple loop to display the marbles currently in the jar.

This is my first c++ program in 10+ years -- which required a lot of looking up of concepts and reading from Tony Gaddis' Starting Out with C++ textbook. I can reimplement in Python if it's too basic.

*some way of representing marbles (what makes up a marble in this program?)*

`Marble marble_1("red/white", "aggie", 25.0);`

`    Marble(const string& color, const string& style, float size)  // string passed by reference like assembly arrays
        : _color(color), _style(style), _size(size) {}`
        
*a way to add new marbles into the bag (how do we interact with marbles and add them into the bag?)*

`    void addMarble(const Marble& marble) {
        _marbleJar.push_back(marble);
    }`
    
*a way to remove a marble out of the bag (perhaps a random marble taken out of the bag?)*
`    Marble removeMarble() {
        Marble _marbleRemoved = _marbleJar.back();
        _marbleJar.pop_back();
        return _marbleRemoved;
    }`
    
*a few ways that we could use to show that our implementation should be working correctly (tests)*

Please see the main source file as its only purpose is to run a couple trivial tests

<img src="https://github.com/TetherIO/cs260_spring_23/blob/main/Assignment1/MaxChaseAssignment1Design.jpg?raw=true" width="600">
