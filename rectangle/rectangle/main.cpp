//
//  main.cpp
//  rectangle
//
//  Created by Buddhika Niroshan on 2024-03-13.
//

#include <iostream>
using namespace std;


//Rectangle class
class Rectangle
{
private:
    int length;
    int breadth;
    
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

//Cuboid class using Inheritance method
class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        height=h;
    }
    int getHeight(){return height;}
    void setHeight(int h){height=h;}
    int volume(){return getLength()*getBreadth()*height;}
};

int main(int argc, const char * argv[]) {
    
    int h=0,l=0,b=0;
    cout<<"Enter height of Cuboid: ";
    cin>>h;
    Cuboid c(h);
    cout<<"Enter length of Cuboid: ";
    cin>>l;
    c.setLength(l);
    cout<<"Enter breadth of Cuboid: ";
    cin>>b;
    c.setBreadth(b);
    
    cout<<"Volume is "<<c.volume()<<endl;
    
    
    
    return 0;
}

//functions for the rectangle class

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}
