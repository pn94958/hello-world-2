#include<iostream>
#include<cmath>
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

//===Procedures===

void waitForEnter( string s )
{
    cout << "Press ENTER to " << s << ":";
    cin.get();
    cout << endl;
}

void displayMessage( string s )
{
    cout << s << endl;
}

void displayPrompt( string s )
{
    cout << "Input " << s << " and press ENTER: " << flush;
}

//===Functions===

// float -> float
// produces a surface of circle of given radius (M_PI*r^2) 
//double circleS(float r) { return 0; }   //stub

/*
float circleS(float r)   //    template
{
    ... r
}
*/

float circleS(float r)
{
     return ( M_PI * pow(r, 2) );
}

// float -> float
// produce length of a side of a square based on circle with radius r

//float squareSD(float r) { return 0; }   //stub

/*
float squareSD(float r)   //    template
{
    ... r
}
*/

float squareSD(float r)   //    template
{
    return r * 2;
}

// float -> float
// produce surface of a square based on circle with radius r

//float squareS( float r ) { return 0; }   //stub

/*
float squareS( float r )   //    template
{
    ... r
}
*/

float squareS( float r )   //    template
{
    return pow( squareSD( r ), 2);
}


int main()
{
    //=tests=
    /* CheckExpect( circleS( 1 ), M_PI );
    CheckExpect( circleS( 3 ),( M_PI * 9 ));
    CheckExpect( squareSD( 1 ), 2);
    CheckExpect( squareSD( 5 ), 10);
    CheckExpect( squareS( 1 ), 4);
    CheckExpect( squareS( 5 ), 100); */

    displayMessage( "This program calculates surface of a Circle and side and surface of a Square based on it." );
    waitForEnter( "continue" );
    float r;
    displayPrompt( "radius of a circle" );
    cin >> r;
    if( r <= 0 )
    do
    {
        displayMessage( "The radius must be a positive number!" );
        cin.ignore();
        waitForEnter( "continue" );
        displayPrompt( "radius of a circle" );
        cin >> r;
    } while ( r <= 0 );
    
    cout << endl;
    
    cout << "The surface of the circle with radius of " << r << " is " << circleS( r ) << " ." << endl;

    cout << "The side length of a square based on that circle is " << squareSD( r ) << " ." << endl;

    cout << "The surface of a square based on that circle is " << squareS( r ) << " ." << endl;
    cin.ignore();
    waitForEnter( "end the program" );    

    return EXIT_SUCCESS;
}
