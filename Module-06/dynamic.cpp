
class Shape {
public:
    virtual ~Shape() {}
    virtual void draw() const = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle!" << std::endl;
    }
    void setRadius(double r) {
        radius = r;
    }
private:
    double radius;
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle!" << std::endl;
    }
    void setWidth(double w) {
        width = w;
    }
private:
    double width;
};

void printShapeInfo(Shape* shape) {
    shape->draw(); // Calls the correct draw() function (polymorphism)
    
    // Now we want to access specific features of Circle or Rectangle
    if (Circle* c = dynamic_cast<Circle*>(shape)) {
        c->setRadius(10.0); // Downcasting to Circle-specific functionality
    } else if (Rectangle* r = dynamic_cast<Rectangle*>(shape)) {
        r->setWidth(5.0); // Downcasting to Rectangle-specific functionality
    } else {
        std::cout << "Unknown shape type" << std::endl;
    }
}
