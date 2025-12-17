#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    // 候选人票数统计（索引0对应编号1，共100位候选人）
    int votes[100] = {0};

    // 直接读入投票并统计（优化掉动态数组）不关心有多少票 只在乎有多少种 每种有多少个
    for (int i = 0; i < n; i++) {
        int candidate;
        cin >> candidate;
        votes[candidate - 1]++;
    }

    int winner = 0;    // 获胜者编号
    int maxVotes = 0;  // 最高票数

    // 找出获胜者：票数相同时，编号大的胜出（关键：使用 <=）
    for (int i = 0; i < 100; i++) {
        if (maxVotes <= votes[i]) {
            maxVotes = votes[i];
            winner = i + 1;
        }
    }
    cout << winner;

    return 0;
}