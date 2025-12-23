#include <iostream>
#include <cmath>
using namespace std;
int manhadinDintance(int x1,int y1,int x2,int y2) {
    return abs(x1-x2)+abs(y1-y2);
}
struct point {
    int x,y;
};

int main() {
    //人的位置
    point people;
    cin>>people.x>>people.y;
    //景点的个数
    int n;
    cin>>n;
    point p[100];
    //存入景点的位置
    for (int i=0;i<n;i++) {
        cin>>p[i].x>>p[i].y;
    }
    //计算曼哈顿距离
    int minDistance=2000;//开始时不能另其等于0，任何数都大于零，只能输出原值
    int nearestpoint=-1;//还要记录下去的最小距离时是哪一个i
    for (int i=0;i<n;i++) {
        int distance=manhadinDintance(people.x,people.y,p[i].x,p[i].y);
        //当最小距离大于当前距离时更新
        if (minDistance>distance&&distance!=0) {
            minDistance=distance;
            nearestpoint=i;
        }
        //当最小距离等于当前距离时，判断哪个离入口近
        else if (minDistance==distance) {
            int a=manhadinDintance(0,0,p[nearestpoint].x,p[nearestpoint].y);
            int b=manhadinDintance(0,0,p[i].x,p[i].y);
            if (a>b) {
                nearestpoint=i;
            }
        }
    }

    cout<<p[nearestpoint].x<<" "<<p[nearestpoint].y;
    return 0;
}