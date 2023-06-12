#include <iostream>
using namespace std;

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

    virtual double getArea() = 0;   // ohne = 0 kann die Funktion verwendet werden, muss aber nicht ( =0; must be overwritten)

    void printArea()
    {
        cout << "Total area: " << this->getArea() << endl;
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

    /* this function overrides base class function */
    double getArea() override           
    {
        return (m_width * m_height);
    }


private:
    double m_density;
};

class Triangle : public Shape
{
    public:
    Triangle(double width, double height)
    : Shape(width, height)
    {
    }

    double getArea() override
    {
        return (m_width * m_height) / 2;
    }
    
};

int main()
{
    Rectangle myRectangle(5.0, 7.0);
    myRectangle.printArea();

    Triangle myTriangle(5.0, 7.0);
    myTriangle.printArea();
}