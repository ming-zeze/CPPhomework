#include<iostream>
#include<algorithm>
using namespace std;

struct shuZu//这个结构体要定义在compare前 否则在调用时找不到
{
    int arr[5];//借助定义结构体 int*p无法拥有arr 用结构体指针动态分配数组
    int id;
    int rank;
};

bool compare(const shuZu& a, const shuZu& b)
{
    //总分
    if (a.arr[3] != b.arr[3]) return a.arr[3] > b.arr[3];
    //数学语文总分
    if (a.arr[4] != b.arr[4]) return a.arr[4] > b.arr[4];
    //a,b的较大值
    int a_max = max(a.arr[0], a.arr[1]);
    int b_max = max(b.arr[0], b.arr[1]);
    return a_max > b_max;
}

int main()
{
    int n = 0;
    cin >> n;
    shuZu* p = new shuZu[n];
    //输入
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].arr[0] >> p[i].arr[1] >> p[i].arr[2];
        p[i].arr[3] = (p[i].arr[0] + p[i].arr[1] + p[i].arr[2]);
        p[i].arr[4] = (p[i].arr[0] + p[i].arr[1]);
        p[i].id = i;
    }
    //排顺次序
    sort(p, p + n, compare);
    //算排名
    p[0].rank = 1;
    for (int i = 1;i < n; i++)
    {
        if (p[i].arr[3] == p[i - 1].arr[3]//总分
            && p[i].arr[4] == p[i - 1].arr[4]//语数
            //最高分
            && max(p[i].arr[0], p[i].arr[1]) == max(p[i - 1].arr[0], p[i - 1].arr[1]))
        {
            p[i].rank = p[i - 1].rank;
        }
        else {
            p[i].rank = i + 1;
        }
    }
    //输出
    int* old_rank = new int[n];
    for (int i = 0; i < n; i++)
    {
        old_rank[p[i].id] = p[i].rank;
    }
    for (int i = 0; i < n; i++)
    {
        cout << old_rank[i] << endl;
    }
    delete[]p;
    delete[]old_rank;
    return 0;
}