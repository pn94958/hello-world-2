#include<iostream>
#include<cstring>

using namespace std;

const int MAX_N = 15;
const int MAX_I = 3;

struct person
{
    char name[ MAX_N ];
    char surname[ MAX_N ];
    int age;
    int health;
    int combat = 3;
    char id_number[ MAX_I ];
};

void show_info( person info )
{
    cout << "\nName: " << info.name;
    cout << "\nSurname: " << info.surname;
    cout << "\nAge: " << info.age;
    cout << "\nHealth points: " << info.health;
    cout << "\nID: " << info.id_number;
}

void show_info_p( const person* info )
{
    cout << "\nName: " << info -> name;
    cout << "\nSurname: " << info -> surname;
    cout << "\nAge: " << info -> age;
    cout << "\nHealth points: " << info -> health;
    cout << "\nID: " << info -> id_number;
}

void set_statistics_p( person* stats )
{
    cout << "\nEnter name: ";
    cin >> stats -> name;
    cout << "\nEnter surname: ";
    cin >> stats -> surname;
    cout << "\nEnter Age: ";
    cin >> stats -> age;
    cout << "\nEnter Health points: ";
    cin >> stats -> health;
    cout << "\nEnter ID: ";
    cin >> stats -> id_number;
    cout << "\nEnter... combat skill value: ";
    cin >> stats -> combat;
}

void kill_p( person & die )
{
    die.health = 0;
    cout << "\n" << die.name << " " << die.surname << " was killed!";
}

int main() {
    person p;
    p.age = 20;
    p.health = 9;
    
    strcpy( p.name, "Jenny");
    strcpy( p.surname, "Smith");
    strcpy( p.id_number, "413");

    cout << "\nCurrent statistics of person P:";

    show_info( p );

    cout << "\nCreating a pointer to person P.";

    person* p_point;
    p_point = &p;
    (*p_point).health = 8;

    cout << "\nPointed person was lightly injured.";
    cout << "\nCurrent statistics of person P:";

    show_info( p );

    cout << "\nHealing the pointed person:";
    p_point -> health++;
    cout << "\nCurrent statistics of person P:";

    show_info_p( &p );

    cout << "\nA NEW LIFE IS CREATED!!!";
    person b;
    person* b_point;
    b_point = &b;
    set_statistics_p( &b );
    cout << "\nCurrent statistics of person B:";
    show_info_p( &b );

    cout << "\nAn act of violence is comitted!";

    if( b.combat > p.combat)
        kill_p( p );
    else
        kill_p( b );
    cout << "\nCurrent statistics of person P:";
    show_info_p( &p );
    cout << "\nCurrent statistics of person B:";
    show_info_p( &b );
    return EXIT_SUCCESS;
}
