// COMSC-210 | Lab 3A | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

// Function Prototypes:

Restruant getRestruantInfo();

struct Restruant{
    string name;
    string adress;
    float storeNumber;
    char amountOfDaysOpen;
    bool openLate;
};

// <description>
// arguments: 
// returns: 
int main() {
    getRestruantInfo();
    return 0;
}

/**
 * @brief Creates a temporary `Restruant` struct by asking user for restruant
 * input from the console to feed into struct members.
 * @return restruant struct members to then pass and use in main function.
*/
Restruant getRestruantInfo(){
    Restruant restruant;

    cout << "-------------- Restruant Information --------------" << endl;
    cout << "Enter the name of the restruant: ";
    getline(cin, restruant.name);
    cout << "Enter the adress of the restruant: ";
    getline(cin, restruant.adress);
    cout << "Does the restruant stay open late? (Enter true or false): ";
    cin >> boolalpha >> restruant.openLate;
    cout << "Enter the amount of days the restruant is open: ";
    cin >> restruant.amountOfDaysOpen;
    cin.ignore(1000, '\n'); // Clear out remaining input before requesting next
    cout << "Enter the phone number of the restruant: ";
    cin >> restruant.storeNumber;
}

// Reminder lines must be 80 characters or less, no more than one empty line, no magic numbers,
// and Reminder to comment code where neccessary.