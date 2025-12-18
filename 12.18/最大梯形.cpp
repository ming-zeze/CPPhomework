#include <iostream>
using namespace std;
class Tixing{
public:
    void set() {
        cin>>a>>b>>h;
    }
    double area() {
        return (a+b)*h/2.0;
    }
private:
    int a=0,b=0,h=0;
};
int main() {
    int n=0;
    cin>>n;
    Tixing tx;
    double max_area=0;
    for (int i=0;i<n;i++) {
        tx.set();
        double area=tx.area();
        if (area>max_area) {
            max_area=tx.area();
        }
    }
    printf("%.1f",max_area);
    return 0;
}