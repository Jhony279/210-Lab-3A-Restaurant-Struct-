// COMSC-210 | Lab 3A | Johnathan Perez Baltazar

#include <iostream>
#include <iomanip>
using namespace std;

struct Restruant{
    string name;
    string adress;
    int storeNumber;
    char amountOfDaysOpen;
    bool openLate;
};

// Function Prototypes:

Restruant getRestruantInfo();
void displayRestruantInfo(Restruant);

// <description>
// arguments: 
// returns: 
int main() {
    Restruant restruant1 = getRestruantInfo();

    displayRestruantInfo(restruant1);
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

    cout << "------------- Enter Restruant Information -------------" << endl;
    cout << "Enter the name of the restruant: ";
    getline(cin, restruant.name);
    cout << "What is the adress of the restruant: ";
    getline(cin, restruant.adress);
    cout << "Does the restruant stay open late? (Enter true or false): ";
    cin >> boolalpha >> restruant.openLate;
    cout << "How many days a week is the restruant open: ";
    cin >> restruant.amountOfDaysOpen;
    cin.ignore(1000, '\n'); // Clear out remaining input before requesting next
    cout << "What is the restruants phone number: ";
    cin >> restruant.storeNumber;

    return restruant;
}

void displayRestruantInfo(Restruant restruantInfo){
    
    cout << "\n------------------  Restruant: " << restruantInfo.name 
        << " - information  ------------------" << setw(2) << endl;
    cout << "Adress: " << restruantInfo.adress << endl;
    cout << "Phone Number: " << restruantInfo.storeNumber << endl;
    cout << "Days open a week: " << restruantInfo.amountOfDaysOpen << endl;
    cout << "Store stays open late? : " << (restruantInfo.openLate ? "Yes" : "No");
}