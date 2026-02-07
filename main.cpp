// COMSC-210 | Lab 3A | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

// Function Prototypes:

void getRestruantInfo();

struct Restruant{
    string name;
    string adress;
    float storeNumber;
    float amountOfDaysOpen;
    bool openLate;
};

// <description>
// arguments: 
// returns: 
int main() {
    getRestruantInfo();
    return 0;
}

// Function Definitions:

void getRestruantInfo(){
    Restruant restruant;
    cout << "------------------- Restruant Information -------------------" << endl;
    cout << "Enter the name of the restruant: ";
    getline(cin, restruant.name);
    cout << "Enter the adress of the restruant: ";
    getline(cin, restruant.adress);
    cout << "Enter the phone number of the restruant: ";
    cin >> restruant.storeNumber;
    cout << "Enter the amount of days the restruant is open: ";
    cin >> restruant.amountOfDaysOpen;
    cout << "Does the restruant remain open during late hours?: ";
    cin >> restruant.openLate;
}

// Reminder lines must be 80 characters or less, no more than one empty line, no magic numbers,
// and Reminder to comment code where neccessary.