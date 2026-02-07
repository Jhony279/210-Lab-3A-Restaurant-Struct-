// COMSC-210 | Lab 3A | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

struct Restruant{
    string name;
    string adress;
    float storeNumber;
    char amountOfDaysOpen;
    bool openLate;
};

// Function Prototypes:

Restruant getRestruantInfo();

// <description>
// arguments: 
// returns: 
int main() {
    Restruant restruant1 = getRestruantInfo();
    return 0;
}

/**
 * @brief Creates a temporary `Restruant` struct by asking user for restruant
 * input from the console to feed into struct members.
 * @return temporary restruant struct members to then pass and use in
 * the main function.
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

    return restruant;
}