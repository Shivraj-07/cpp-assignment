#include <iostream>
using namespace std;

class Medical {
public:
    float bill;

    Medical(float amount) {
        bill = amount;
        cout << "MEDICAL BILL IS:  = " << bill;
    }
};

int main() {
    float amt;
    cout<<"Enter bill amount: ";
    cin>>amt;

    Medical m(amt);
    return 0;
}
