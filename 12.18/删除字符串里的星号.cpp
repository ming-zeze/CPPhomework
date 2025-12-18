#include <iostream>
#include <string>
using namespace std;
int main() {
    string m,result;
    cin>>m;
    //确定非*的长度
    int n=m.length();
    int left=0,right=n-1;
    while (m[left]=='*'&&left<n) {
        left++;
    }          //要区分"*" '*'
    while (m[right]=='*'&&right<n) {
        right--;
    }
    //删去中间的*
    for (int i=0;i<n;i++) {
        if (i<left||i>right) {
            result+=m[i];
        }
        else if (m[i]!='*') {
            result+=m[i];
        }
    }
    cout<<result<<endl;

    return 0;
}