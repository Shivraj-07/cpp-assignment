 #include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Stack
{
private:
    string books[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Return Book (Push)
    void push(string book)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow! No space for more books.\n";
            return;
        }
        top++;
        books[top] = book;
        cout << book << " returned successfully.\n";
    }

    // Arrange Book (Pop)
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! No books to arrange.\n";
            return;
        }
        cout << books[top] << " arranged on the shelf.\n";
        top--;
    }

    // Top Book (Peek)
    void peek()
    {
        if (top == -1)
        {
            cout << "No books in the stack.\n";
            return;
        }
        cout << "Top Book: " << books[top] << endl;
    }

    // Display Stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "\nBooks in Stack (Top to Bottom):\n";
        for (int i = top; i >= 0; i--)
        {
            cout << books[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;
    string book;

    do
    {
        cout << "\n===== Library Stack Menu =====\n";
        cout << "1. Return Book (Push)\n";
        cout << "2. Arrange Book (Pop)\n";
        cout << "3. Top Book (Peek)\n";
        cout << "4. Display Stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin.ignore();
            cout << "Enter Book Name: ";
            getline(cin, book);
            s.push(book);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}






 #include <iostream>
using namespace std;

#define MAX 5

class Stack
{
private:
    int stack[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Push Operation
    void push(int value)
    {
        if(top == MAX - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top++;
        stack[top] = value;
        cout << value << " inserted into stack." << endl;
    }

    // Pop Operation
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << stack[top] << " removed from stack." << endl;
        top--;
    }

    // Peek Operation
    void peek()
    {
        if(top == -1)
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        cout << "Top Element = " << stack[top] << endl;
    }

    // Display Operation
    void display()
    {
        if(top == -1)
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        cout << "\nStack Elements (Top to Bottom)\n";

        for(int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n------ STACK MENU ------" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Integer : ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}