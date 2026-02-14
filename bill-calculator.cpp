#include <iostream>
using namespace std;

class Bill {
public:
    float units, bill;

    void calculate() {
        cout << "Enter units: ";
        cin >> units;

        bill = units * 5;
        bill = bill - (bill * 0.02);

        cout << "electricity bill = " << bill;
    }
};

int main() {
    Bill b;
    b.calculate();
    return 0;
}
