#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int *p=new int[n];//投票的人数
    int arr[100]={0};//候选人的票数

    //p数组不是必须的，可以直接读入临时变量
    // int arr[100]={0};//候选人的票数
    // int vote;
    // for (int i = 0; i < n; i++) {
    //     cin >> vote;
    //     arr[vote - 1]++;}

    //输入选票并且找出候选人票数
    for(int i=0;i<n;i++) {
        cin>>p[i];
        arr[p[i]-1]++;
    }
    int rank=0;
    int temp=0;
    for (int i=0;i<100;i++) {
        if (temp<=arr[i]) {//票数相同时 输出较大序号
            temp=arr[i];
            rank=i+1;
        }
    }
    cout<<rank;
    delete[] p;
    return 0;
}