#include<iostream>
using namespace std;

// ===Tests===

bool CheckExpect(float a, float b)
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


// ===Procedures===

void waitForEnter( string s )
{
    cout << "Press enter to " << s << ":";
    cin.get();
    cout << endl;
}

void displayMessage( string s )
{
    cout << s << endl;
}

void displayPrompt( string s )
{
    cout << "Write " << s << " and press enter: " << flush;
}

// ===Functions===

// Float Float -> Float
// Consumes height h and base a of a triangle in centimetres and returns it's field in m2.

//float triangleField( float a, float h ) { return 0; }   //stub

/* 
float triangleField( float a, float h )   //template
{ 
    ... a h
}
 */

float triangleField( float a, float h )
{ 
    return ( ( ( a / 100 ) * ( h / 100 )) / 2 );
}

int main()
{
    /* 
    CheckExpect( triangleField( 100 , 100 ), 0.5 );
    CheckExpect( triangleField( 200 , 100 ), 1 );
    CheckExpect( triangleField( 300 , 500 ), 7.5 );
     */
    displayMessage( "The program calculates field of a triangle." );
    waitForEnter( "continue" );

    float a;
    displayPrompt( "length of triangle's base in cm" );
    cin >> a;

    float h;
    displayPrompt( "triangle's height in cm" );
    cin >> h;

    cout << "Triangle's field is " << triangleField( a , h ) << " square meters." << endl;
    cin.ignore();
    waitForEnter( "finish program" );

    return EXIT_SUCCESS;
}
