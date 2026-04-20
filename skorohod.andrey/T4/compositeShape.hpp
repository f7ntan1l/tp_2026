#ifndef COMPOSITE_SHAPE_HPP
#define COMPOSITE_SHAPE_HPP

#include <vector>
#include "shape.hpp"

class CompositeShape : public Shape
{
    public:
    CompositeShape();
    ~CompositeShape() = default;

    double getArea() const; 
    Point getCenter() const;
    void move(double, double);
    void scale(double);
    std::string getName() const;

    private:
    std::vector<Shape> shapeContainer_;
    Point center_;
};

#endif