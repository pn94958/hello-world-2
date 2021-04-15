#include<iostream>
using namespace std;

// ===Tests===

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

// Float Float -> Float
// returns gross price from consumed net price and tax rate

//float grossPrice( float p, float t ) { return 0; }    //stub
/* 
float grossPrice( float p, float t )   //template
{
    ... p t
}
 */

float grossPrice( float p, float t )
{
    return ( p + ( p * t / 100 ));
}

int main()
{
    //checkExpect( grossPrice( 100, 22 ), 122 );
    //checkExpect( grossPrice( 100, 0  ), 100 );
    //checkExpect( grossPrice(   0, 22 ),   0 );

    displayMessage( "The program calculates gross price basing on net price and tax rate." );

    float p;
    displayPrompt( "price" );
    cin >> p;

    float t;
    displayPrompt( "tax rate" );
    cin >> t;

    displayMessage( "The gross price is: " );
    cout << grossPrice( p , t) << endl;

    cin.ignore();
    waitForEnter( "finish program" );

    return EXIT_SUCCESS;
}
