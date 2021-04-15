#include<iostream>
using namespace std;

bool checkExpect(float a, float b)
{
    bool check;
    if(a == b)
    {
        cout << "Test passed successfully.\n";
        check = true;
    }
    else
    {
        cout << "The result is expected to be " << b << " but is " << a << ".\n";
        check = true;
    }
    
    return check;
}

//===procedures===

void displayMessage( string s )
{
    cout << s << endl;
}

void waitForEnter( string s )
{
    cin.ignore();
    cout << "Press ENTER to " << s << "." << endl;\
    cin.get();
}

void displayPrompt( string s )
{
    cout << "Enter a " << s << "." << endl;
}

//===functions===

//Float Float -> Float
//Consumes a and b and returns zero of any ax + b = 0 function.
//float calculateZero(float a, float b) { return 0; }   //stub

/* float calculateZero(float a, float b)   //template
{ ... a b } */

float calculateZero(float a, float b)
{
    return (( b / a ) * -1 );
}


int main()
{
/*     
    checkExpect( calculateZero( 1, 0 ), 0);
    checkExpect( calculateZero( 1, 1 ), -1);
    checkExpect( calculateZero( 2, 1 ), -0.5);
    checkExpect( calculateZero( -1, 0 ), 0);
    checkExpect( calculateZero( -1, 1 ), 1);
    checkExpect( calculateZero( -2, -1 ), -0.5);
*/
    float a;
    float b;
    displayMessage( "The program calculates zero of f(x) = ax + b function." );
    cout << endl;
    displayPrompt( "a" );
    cin >> a;
    cout << endl;
    displayPrompt( "b" );
    cin >> b;
    displayMessage( "The function is: " );
    cout << "f(x) = " << a << "x + " << b << endl;

    if( a != 0)
    {
        displayMessage( "The zero of the function is:" );
        cout << calculateZero( a, b ) << endl;
    }
        else if( b != 0 )
            displayMessage( "The function has no zero." );
            else
                displayMessage( "The function value is always zero." );
    waitForEnter( "quit" );

    return EXIT_SUCCESS;
}
