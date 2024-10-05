#include <iostream>
using namespace std;


class Graphic {
public:
    virtual void draw() const {
        cout << "Drawing a generic graphic." << endl;
    }
};


class Line : public Graphic {
public:
    void draw() const override {
        cout << "Drawing a line." << endl;
    }
};


class Rectangle : public Graphic {
public:
    void draw() const override {
        cout << "Drawing a rectangle." << endl;
    }
};


class Circle : public Graphic {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    Line line;
    Rectangle rectangle;
    Circle circle;

    line.draw();     
    rectangle.draw(); 
    circle.draw();    

    return 0;
}
