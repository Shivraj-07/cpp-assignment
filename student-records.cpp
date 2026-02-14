#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void input() {
        cin >> roll >> name;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s[10];

    for(int i=0;i<10;i++) {
        cout << "Enter roll and name: ";
        s[i].input();
    }

    cout << "\nStudent Records:\n";
    for(int i=0;i<10;i++) {
        s[i].display();
    }

    return 0;
}
