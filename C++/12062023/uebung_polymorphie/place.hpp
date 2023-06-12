#ifndef PLACE_HPP_INCLUDED
#define PLACE_HPP_INCLUDED

#include <string>

class Place
{
    public:
        Place(int x, int y, std::string name)
        : m_x(x)
        , m_y(y)
        , m_name(name)
        {
        }

        virtual ~Place()
        {
        }

        void printPlace();

    protected:
        int m_x;
        int m_y;
        std::string m_name;
};

#endif /* PLACE_HPP_INCLUDED */