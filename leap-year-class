#include <iostream>
using namespace std;

class LeapYear {
public:
    int year;

    void check() {
        if((year%4==0 && year%100!=0) || year%400==0)
            cout<<"it is a leap year";
        else
            cout<<"it is not a leap year";
    }
};

int main() {
    LeapYear l;
    cout<<"enter year: ";
    cin>>l.year;
    l.check();
    return 0;
}
