#include <iostream>
using namespace std;

class Prime {
public:
    int num;

    void check() {
        int flag = 1;
        for(int i=2;i<=num/2;i++) {
            if(num%i==0) {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"it is a prime number";
        else
            cout<<"it is not a prime number";
    }
};

int main() {
    Prime p;
    cout<<"Enter number: ";
    cin>>p.num;
    p.check();
    return 0;
}
