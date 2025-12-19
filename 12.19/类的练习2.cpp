#include <iostream>
#include <string>
using namespace std;
class Date{
public:
    Date():year(1900),month(1),day(1){ }
    Date(int year,int month,int day):year(year),month(month),day(day){ }
    void show() {
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
    void init(int year,int month,int day) {
        this->year=year;
        this->month=month;
        this->day=day;
    }
private:
    int year;
    int month;
    int day;

};

int main()
{
    Date d1;
    Date d2(2100,12,12);
    d1.show();
    d2.show();
    int year;
    int month;
    int day;
    cin>>year>>month>>day;
    d1.init(year,month,day);
    d1.show();

    return 0;
}