#include<iostream>
using namespace std;

//===Tests===

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

//===Procedures===

void displayMessage( string s )
{
    cout << s << endl;
}

void displayPrompt( string s )
{
    cout << "Input " << s << " and press Enter." << endl;
}

void waitForEnter( string s )
{
    cout << "Press Enter to " << s << ".";
    cin.get();
}

//===Functions===

// float float -> float
// calculate velocity v=s/t basing on input distance travelled s and time t.
// float calculateVelocity( float s, float t ) { return 0; } //stub
/* 
float calculateVelocity( float s, float t )   //template
{
    ... s t
}
 */

float calculateVelocity( float s, float t )   //template
{
    return ( s / t );
}

int main()
{
    //checkExpect( calculateVelocity( 10, 1 ), 10 );
    //checkExpect( calculateVelocity( 10, 5 ),  2 );
    //checkExpect( calculateVelocity(  0, 5 ),  0 );

    displayMessage( "The program calculates velocity based on distance travelled and travel time." );

    float s;
    displayPrompt( "travelled distance in metres (without unit)" );
    cin >> s;

    float t; 
    displayPrompt( "time in seconds (without unit)" );
    cin >> t;
    if ( 0 == t )
    do
    {
        displayMessage( "time must not be zero!" );
        displayPrompt( "time in seconds (without unit)" );
        cin >> t;
    } while ( 0 == t );
    
    float v;
    v = calculateVelocity( s , t );
    displayMessage( "The velocity is:" );
    cout << v << "m/s" << endl;
    waitForEnter( "exit program" );
    cin.ignore();
    return EXIT_SUCCESS;
}
