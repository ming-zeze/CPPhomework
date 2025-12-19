#include <iostream>
#include <string>
using namespace std;
class Dog {
public:
    Dog(string name,int age,char sex,double weight):name(name),age(age),sex(sex),weight(weight) {}
    string GetName(){ return name;}
    int GetAge(){return age;}
    char GetSex(){return sex;}
    double GetWeight(){return weight;}
    string speak(){return "Arf!Arf!";}
    ~Dog() {}
private:
    double weight;
    int age;
    string name;
    char sex;
};

int main()
{
    string name;
    int age;
    char sex;
    double weight;
    cin>>name>>age>>sex>>weight;
    Dog dog(name,age,sex,weight);
    cout<<dog.GetName()<<endl;
    cout<<dog.GetAge()<<endl;
    cout<<dog.GetSex()<<endl;
    cout<<dog.GetWeight()<<endl;
    cout<<dog.speak()<<endl;


    return 0;
}