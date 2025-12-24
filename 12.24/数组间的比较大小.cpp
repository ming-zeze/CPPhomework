#include <iostream>
using namespace std;
int main()
{
    int a[10]={0};
    int b[10]={0};
    for (int i=0;i<10;i++) {
        cin>>a[i];
    }
    for (int i=0;i<10;i++) {
        cin>>b[i];
    }
    //comapre
    int count1=0;
    int count2=0;
    int count3=0;
    for (int i=0;i<10;i++) {
        if (a[i]>b[i]) count1++;
        if (a[i]==b[i]) count2++;
        if (a[i]<b[i]) count3++;
    }
    cout<<count1<<" "<<count2<<" "<<count3<<endl;
    if (count1>count3) {
        cout<<"a>b";
    }else if (count1<count3) {
        cout<<"a<b";
    }else {
        cout<<"a=b";
    }

    return 0;
}