#include <iostream>
#include <string>
using namespace std;
const double pi=3.14;
class circule {
public:
    circule(double r):r(r){}
    double getarea() {
        return pi*r*r;
    }
protected:
    double r;
};

class table {
public:
    table(double height):height(height){}
    double getheight() {
        return height;
    }
protected:
    double height;
};

class roundtable:public circule,public table {
public:
    roundtable(string color,double height,double r):color(color),table(height),circule(r){}
    string getcolor() {
        return color;
    }
private:
    string color;
};

void display( roundtable &s){//显示圆桌数据
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"圆桌的面积："<<s.getarea()<<"，";
    cout<<"高度："<<s.getheight()<<"，";
    cout<<"颜色："<<s.getcolor()<<"。"<<endl;
}
int main(){
    float r,h;
    char color[10];
    while( cin>>r>>h>>color){
        roundtable rt(color,h,r);
        display(rt);
    }
    return 0;
}