#include <iostream>
#include <string>
using namespace std;
string shift(int n,int B) {
    //先构建逆向的字符
    string a;
    while (n>0) {
        int digit=n%B;
        if (digit<10) {
            a+=char('0'+digit);
        }else {
            a+=char('A'+digit-10);
        }
        n/=B;
    }
    //反转字符串
    string b;
    for (int i=a.length()-1;i>-1;i--) {
        b+=a[i];
    }
    return b;
}
bool isHuiWenShu(const string &a) {
    int len=a.length();
    bool flag=true;
    for (int i=0;i<len/2;i++) {
        if (a[i]!=a[len-i-1]) {
            flag=false;
            break;
        }
    }
    return flag;
}

int main() {
    int B=0;
    cin>>B;
    for (int i=1;i<301;i++) {
        int square=i*i;
        string a=shift(i,B);
        string A=shift(square,B);
        if (isHuiWenShu(A)) {
            cout<<a<<" "<<A<<endl;
        }
    }


    return 0;
}