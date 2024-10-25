// NAME - SIVAPRIYA NAMBIAR 
// PRN - 23070123125
// EXPERIMENT - 18(A) 

// STACK 

#include<iostream>
using namespace std;

int stack[100], n = 100, top = -1;

void push(int val) {
    if (top >= n - 1) {  // Correct condition for Stack Overflow
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top <= -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main() {
    int ch, val;
    cout << "(1) Push in Stack" << endl;
    cout << "(2) Pop from Stack" << endl;
    cout << "(3) Display Stack" << endl;
    cout << "(4) Exit" << endl;

    do {
        cout << "Enter Choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter value to be pushed: " << endl;
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid Choice." << endl;
        }
    } while (ch != 4);

    return 0;
}