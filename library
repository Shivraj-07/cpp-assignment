
#include <iostream>
using namespace std;

class Book {
public:
    string name;
    int available;

    void input() {
        cout<<"Enter book name: ";
        cin>>name;
        cout<<"Enter availability (1=available, 0=not): ";
        cin>>available;
    }

    void issue() {
        if(available==1)
            cout<<"Book Issued";
        else
            cout<<"Book Not Available";
    }
};

int main() {
    Book b;
    b.input();
    b.issue();
    return 0;
}
