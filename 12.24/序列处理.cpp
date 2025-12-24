#include <iostream>
#include <algorithm>

bool compare(const int &a,const int&b) {
    return a>b;
}
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int* p=new int[n];
    int sum=0;
    int max=0;
    int min=10001;
    //处理数据
    for (int i=0;i<n;i++) {
        cin>>p[i];
        sum+=p[i];
        //找大小
        if (p[i]>max) max=p[i];
        if (p[i]<min) min=p[i];
    }
    sort(p,p+n,compare);
    //创建一个新数组来存储去重后的数据
    //去重思路：排序后前后的数字不同
    int*arr=new int[n];
    int count=0;//借助计数器来判断到底录了多少个数字
    for (int i=0;i<n;i++) {
        if (i==0||p[i]!=p[i-1]) {
            arr[count]=p[i];
            count++;
        }
    }
    cout<<sum<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    for (int i=0;i<count;i++) {
        cout<<arr[i]<<" ";
    }
    delete[]p;
    delete[]arr;
    return 0;
}