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
// Consumes height h and base a of a triangle in centimetres and returns it's surface in m2.

//float triangleSurface( float a, float h ) { return 0; }   //stub

/* 
float triangleSurface( float a, float h )   //template
{ 
    ... a h
}
 */

float triangleSurface( float a, float h )
{ 
    return ( ( ( a / 100 ) * ( h / 100 )) / 2 );
}

int main()
{
    /* 
    CheckExpect( triangleSurface( 100 , 100 ), 0.5 );
    CheckExpect( triangleSurface( 200 , 100 ), 1 );
    CheckExpect( triangleSurface( 300 , 500 ), 7.5 );
     */
    displayMessage( "The program calculates surface of a triangle." );
    waitForEnter( "continue" );

    float a;
    displayPrompt( "length of triangle's base in cm" );
    cin >> a;
    if( a <= 0 )
    {
    do
        {
            displayMessage( "The length needs to be higher than 0!" );
            cin.ignore();
            waitForEnter( "continue" );
            displayPrompt( "length of triangle's base in cm" );
            cin >> a;
        } while ( a <= 0 );
    }    

    float h;
    displayPrompt( "triangle's height in cm" );
    cin >> h;
    if( h <= 0 )
    {
        do
        {
            displayMessage( "The height needs to be higher than 0!" );
            cin.ignore();
            waitForEnter( "continue" );            
            displayPrompt( "triangle's height in cm" );
            cin >> h;
        } while ( h <= 0 );
    }
    

    cout << "Triangle's surface is " << triangleSurface( a , h ) << " square meters." << endl;
    cin.ignore();
    waitForEnter( "finish program" );

    return EXIT_SUCCESS;
}
