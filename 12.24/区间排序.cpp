#include<iostream>
#include<algorithm>


bool compare(const int &a,const int &b) {
    return a<b;
}
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int* p=new int[n];
    for (int i=0;i<n;i++) {
        cin>>p[i];
    }
    int q=0;
    cin>>q;
    for (int i=0;i<q;i++) {
        int l=0,r=0;
        cin>>l>>r;
        sort(p+l-1,p+r,compare);
    }
    for (int i=0;i<n;i++) {
        cout<<p[i]<<" ";
    }
    delete[] p;

    return 0;
}