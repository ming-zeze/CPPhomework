#include <iostream>
#include <string>
using namespace std;
int main() {
    string num;
    cin>>num;
    int result=num[0]-'0';//要减去0的ascll 才转换成整数

    for (int i=1;i+1<num.length();i+=2) {//i+1<长度 防止数组越界
        char fuHao=num[i];
        int temp=num[i+1]-'0';
        //if (fuHao=="+") fuHao是char类型的，+是string 不能用==来判断
        switch (fuHao) {
            case '+':
                result+=temp;
                break;
            case '-':
                result-=temp;
                break;
            case '*':
                result*=temp;
                break;
        }
    }
    cout<<result<<endl;
    return 0;
}