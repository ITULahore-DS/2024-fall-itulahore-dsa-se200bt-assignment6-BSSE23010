#include "functions.h"

void stackMenu() {

    int runAgain = 0;
    while (runAgain >= 0) {
        cout << " !!! Welcome to  !!! " << endl;
        int x;
        cout << "Select your choice\n"
                "\n\t 1. Push stack "
                "\n\t 2. Pop Stack"
                "\n\t 3. Clear Stack"
                "\n\t 4. Peek stack"
                "\n\t 0. Exit"
                " Enter your choice: ";
        cin >> x;
        switch (x) {                    // switch case
            case 1: {
                Stack myStack;

                // Push elements onto the stack
                myStack.push(10);
                myStack.push(20);
                myStack.push(30);
                myStack.printStack();

                break;
            }
            case 2: {
                Stack myStack;

                // Push elements onto the stack
                myStack.push(10);
                myStack.push(20);
                myStack.push(30);
                cout << "Before Pop" << endl;
                myStack.printStack();

                // Pop the top element
                myStack.pop();
                cout << "After Pop" << endl;
                myStack.printStack();

                break;
            }
            case 3: {
                Stack myStack;
                myStack.push(10);
                myStack.push(20);
                myStack.push(30);
                cout << "Before Clear" << endl;
                myStack.printStack();

                // Pop the top element
                myStack.clear();
                cout << "After Clear" << endl;
                myStack.printStack();

                break;
            }
            case 4: {
                Stack myStack;

                // Push elements onto the stack
                myStack.push(10);
                myStack.push(20);
                myStack.push(30);

                myStack.printStack();

                cout << "Peek Element: " << myStack.peek() << endl;
                break;
            }
            case 0: {
                break;
            }
            default: {                                                        // default statement
                cout << "\n !!! INVALID ENTRY !!!" << endl;
            }
        }
        cout << "\n Enter positive number to run again OR negative number to terminate " << endl;
        cin >> runAgain;                                        // input for loop
    }
}

void queueMenu() {

    int runAgain = 0;
    while (runAgain >= 0) {
        cout << " !!! Welcome to  !!! " << endl;
        int x;
        cout << "Select your choice\n"
                "\n\t 1. Enqueue "
                "\n\t 2. Dequeue"
                "\n\t 3. Peek stack"
                "\n\t 0. Exit"
                " Enter your choice: ";
        cin >> x;
        switch (x) {                    // switch case
            case 1: {

                Queue myQueue;

                // Push elements onto the stack
                myQueue.enqueue(10);
                myQueue.enqueue(20);
                myQueue.enqueue(30);
                myQueue.printQueue();
                break;
            }
            case 2: {


                // Push elements onto the stack
                Queue myQueue;

                // Push elements onto the stack
                myQueue.enqueue(10);
                myQueue.enqueue(20);
                myQueue.enqueue(30);

                // Pop the top element
                cout << "Before Dequeue" << endl;
                myQueue.printQueue();

                // Pop the top element
                myQueue.dequeue();

                cout << "After Dequeue" << endl;
                myQueue.printQueue();


                break;
            }
            case 3: {
                Queue myQueue;

                // Push elements onto the stack
                myQueue.enqueue(10);
                myQueue.enqueue(20);
                myQueue.enqueue(30);

                // Pop the top element
                cout << "Before Dequeue" << endl;
                myQueue.printQueue();
                cout << "Peek Element of the queue : " << myQueue.peek() << endl;
                break;
            }
            case 0: {
                break;
            }
            default: {                                                        // default statement
                cout << "\n !!! INVALID ENTRY !!!" << endl;
            }
        }
        cout << "\n Enter positive number to run again OR negative number to terminate " << endl;
        cin >> runAgain;                                        // input for loop
    }
}

int main() {
    cout << " !!! Welcome to Assignment 6 !!! " << endl;
    int x;
    cout << "Select your choice\n"
            "\n\t 1. Stack Menu"
            "\n\t 2. Queue Menu"
            "\n Enter your choice: ";
    cin >> x;
    if (x == 1) {
        stackMenu();
    } else if (x == 2) {
        queueMenu();
    } else
        cout << "Invalid Choice" << endl;
    return 0;
}