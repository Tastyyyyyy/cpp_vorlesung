#include <iostream>
using namespace std;

//  Base class
class Shape
{
public:
    Shape(double width, double height)
    : m_width(width)
    , m_height(height)
    {
    }

    ~Shape()
    {
    }

    void setWidth(double width)
    {
        m_width = width;
    }

    void setHeight(double height)
    {
        m_height = height;
    }
    

// sollen von child class geändert werden können
protected:
    double m_width;
    double m_height;
};

// Spezielle Klasse (base class)
class Rectangle : public Shape
{
public:
    Rectangle(double width, double height)
    : Shape(width, height)
    , m_density(3.0)
    {
    }

    double getArea()
    {
        return (m_width * m_height);
    }

private:
    double m_density;
};

int main()
{
    Rectangle myRectangle(3.0, 4.0);
    myRectangle.setHeight(5.0);
    // Print area
    cout << myRectangle.getArea() << endl;
}