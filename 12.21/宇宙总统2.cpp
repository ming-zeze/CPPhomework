#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

struct person {
    string name;
    int num;
};

bool compare(const person &a,const person &b) {
    if (a.num!=b.num) {
        return a.num>b.num;
    }
    return a.name>b.name;
}

int main() {
    int n=0;
    cin>>n;
    person human[1000];
    int count=0;
    for (int i=0;i<n;i++) {
       string name;
        cin>>name;
        //看是否榜上有名
        bool flag=false;
        for (int j=0;j<count;j++) {
            //有人就加
            if (name==human[j].name) {
                human[j].num++;
                flag=true;
                break;
            }
        }//没有就加人
        if (!flag){
            human[count]={name,1};
            count++;
        }
    }
    sort(human,human+count,compare);
    for (int i=0;i<count;i++) {
        cout<<human[i].name<<" "<<human[i].num<<endl;
    }



    return 0;
}