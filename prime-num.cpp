#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 1;
    cout << "Enter number: ";
    cin >> num;

    if(num <= 1) flag = 0;

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "it is a prime number";
    else
        cout << "it is not a prime number";

    return 0;
}
