#include<iostream>
using namespace std;
class Rectangle {
public:
    Rectangle(double length,double width):length(length),width(width){};
    double CalArea() {
        return width*length;
    }
protected:
    double length,width;
};

class Rectangular:public  Rectangle {
public:
    Rectangular(double length,double width,double height):Rectangle(length, width), height(height) {}
    double CalVolume() {
        return width*length*height;
    }
protected:
    double height;
};


int main(){
    double length,width,height;
    cin>>length>>width;
    Rectangle rectangle(length,width);
    cout<<rectangle.CalArea()<<endl;
    cin>>length>>width>>height;
    Rectangular rectangular(length, width, height);
    cout<<rectangular.CalVolume()<<endl;

    return 0;
}