//
//  main.cpp
//  rectangle class
//
//  Created by Buddhika Niroshan on 2024-02-05.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    void recDetails();
    ~Rectangle();
    
};


int main(int argc, const char * argv[]) 
{
    int l,b;
    
    cout<<"Enter Length: ";cin>>l;
    cout<<"Enter Breadth: ";cin>>b;
    
    Rectangle r1(l,b);
    
    r1.recDetails();
    
    
    
    
    
    return 0;
}





//default constructor
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
//peramaiterized constructor
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
//copy constructor
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
    
}

int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
void Rectangle::setLength(int l)
{
    if(l>0)
    {
        length=l;
    }
    else{
        length=1;
    }
}
void Rectangle::setBreadth(int b)
{
    if(b>0)
    {
        breadth=b;
    }
    else{
        breadth=1;
    }
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
void Rectangle::recDetails()
{
    
    cout<<"\n-------------------------\n";
    cout<<"Length: "<<getLength()<<endl;
    cout<<"Breadth: "<<getBreadth()<<endl;
    cout<<"\n-------------------------\n";
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
    cout<<"Is Square: ";
    if(isSquare())
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    
    
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}
