#include <iostream>
#include<algorithm>
using namespace std;

struct shop {
    int price;
    int num;
};

bool compare(const shop &a,const shop &b) {
    return a.price<b.price;
}
int main()
{
    int m=0,n=0;
    cin>>m>>n;
    shop p[1000];
    for (int i=0;i<n;i++) {
        cin>>p[i].price>>p[i].num;
    }
    sort(p,p+n,compare);

    int sumPrice=0;
    int restNum=m;
    for (int i=0;i<n&&restNum>0;i++) {
        //这家店的数目够
        if (p[i].num>restNum) {
            sumPrice+=p[i].price*restNum;
            restNum=0;
        }else {//数目少了 要去下一家
            sumPrice+=p[i].price*p[i].num;
            restNum-=p[i].num;

        }
    }


    cout<<sumPrice;

    return 0;
}