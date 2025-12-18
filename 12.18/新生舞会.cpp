#include <iostream>
#include<string>
using namespace std;

class Student {
public:
    void get() {
        cin>>name>>id>>sex;
    }
    string showID() { return id;}
    string showNAME() { return name;}
    char showSEX() { return sex;}
private:
    string name;
    string id;
    char sex;
};

char find_sex(Student stu[],int n,const string &information) {
    for (int i=0;i<n;i++) {
        if (stu[i].showID()==information||stu[i].showNAME()==information) {
            return stu[i].showSEX();
        }
    }
}

bool is_balance(Student stu[],int n,const string &a,const string &b) {
    char sexA=find_sex(stu,n,a);
    char sexB=find_sex(stu,n,b);
    return sexA!=sexB;
}
int main() {
    //输入学生的信息
    int n=0;
    cin>>n;
    Student* stu=new Student[n];
    for (int i=0;i<n;i++) {
        stu[i].get();
    }

    //匹配信息
    int m=0;
    cin>>m;
    for (int i=0;i<m;i++) {
        string a,b;
        cin>>a>>b;
        if (is_balance(stu,n,a,b)) {
            cout<<"Y"<<endl;
        }else {
            cout<<"N"<<endl;
        }
    }
    delete[] stu;
    return 0;
}