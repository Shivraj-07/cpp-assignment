#include <iostream>
using namespace std;

class Palindrome {
public:
    inline void check(int n) {
        int reverse=0, temp=n;
        while(temp!=0) {
            reverse = reverse*10 + temp%10;
            temp/=10;
        }
        if(reverse==n)
            cout<<"it is palindrome number";
        else
            cout<<"it is not a palindrome number";
    }
};

int main() {
    Palindrome p;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    p.check(n);
    return 0;
}
