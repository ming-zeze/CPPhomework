#include <iostream>
using namespace std;

class plane {
public:
    plane(double aerofoil,double airframe,double empennage,double voyage,int passenger) {
        this->aerofoil=aerofoil;
        this->airframe=airframe;
        this->empennage=empennage;
        this->voyage=voyage;
        this->passenger=passenger;
    }
    virtual void display() {
        cout<<aerofoil<<" "<<airframe<<" "<<empennage<<" "<<voyage<<" "<<passenger;
    };
    virtual ~plane(){}
private:
    double aerofoil, airframe, empennage, voyage;
    int passenger;
};

class fighter:public plane {
public:
    fighter(double aerofoil,double airframe,double empennage,double voyage,int passenger,int daodan):plane(aerofoil,airframe,empennage,voyage,passenger), daodan(daodan) {}

    virtual void display() {
        cout<<"This is a fighter!"<<endl;
        plane::display();
        cout<<" "<<daodan<<endl;
    }
private:
    int daodan;
};

class bomber:public plane {
public:
    bomber(double aerofoil,double airframe,double empennage,double voyage,int passenger,int zaidan):plane(aerofoil,airframe,empennage,voyage,passenger), zaidan(zaidan) {}

    virtual void display() {
        cout<<"This is a bomber!"<<endl;
        plane::display();
        cout<<" "<<zaidan<<endl;
    }
private:
    int zaidan;
};


int main(){
    double aerofoil, airframe, empennage, voyage;//机翼、机身、尾翼、航程
    int passenger;//乘员数
    int daodan;//导弹数
    int zaidan;//载弹量
    plane *vp;
    char type;
    while(cin>>type)
    {
        if(type=='f'){
            cin>>aerofoil>>airframe>>empennage>>voyage>>passenger>>daodan;
            fighter fighter1(aerofoil,airframe,empennage,voyage,passenger,daodan);//创建歼击机
            vp=&fighter1;
            vp->display();//显示歼击机
        }
        else if(type=='b'){
            cin>>aerofoil>>airframe>>empennage>>voyage>>passenger>>zaidan;
            bomber bomber1(aerofoil,airframe,empennage,voyage,passenger,zaidan);//创建轰炸机
            vp=&bomber1;
            vp->display();//显示轰炸机
        }
        else break;
    }
    return 0;
}