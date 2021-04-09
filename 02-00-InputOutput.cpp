#include<iostream>
using namespace std;

//===procedures===

void inputOne()
{
    string t;
    cout << "Input text: ";
    cin >> t;
    cout << endl << "You have entered " << t << ".\n";
}

void inputOneEnter()
{
    string t;
    cout << "Input text: ";
    cin >> t;
    cout << endl << "You have entered " << t << ".\n";
    // ENTER from cin is passed to cin.get().
    cout << "Press ENTER to continue.";
    cin.get();
}

void inputOneEnterI()
{
    string t;
    cout << "Input text: ";
    cin >> t;
    cout << endl << "You have entered " << t << ".\n";
    // ENTER from cin is passed to cin.get().
    cin.ignore();
    // cin.ignore() causes enter to be ignored.
    cout << "Press ENTER to continue.";
    cin.get();
}

void inputAfterOutput()
{
    cout << "Go to the next line." << endl;
    cout << "Press ENTER to continue." << endl;
    cin.get();
}

void takeInput()
{
    string t;
    cout << "Input text: " << endl;
    cin >> t;
    // inputting text in a separate function still passes Enter further.
    cin.ignore();
}

void waitEnter()
{
    cout << "Press ENTER to continue.";
    cin.get();
}

int main()
{
    //inputOne();
    //inputOneEnter();
    //inputOneEnterI();
    //inputAfterOutput();
    takeInput();
    waitEnter();
    return EXIT_SUCCESS;
}
