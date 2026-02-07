// COMSC-210 | Lab 3A | Johnathan Perez Baltazar

#include <iostream>
#include <iomanip>
using namespace std;

struct Restruant{
    string name;
    string adress;
    long long storeNumber;
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

    // Filters the users input to make sure true or false is entered
    bool valiInput = false;
    while (!valiInput){     
        cout << "Does the restruant close late? (Enter true or false): ";
        if (cin >> boolalpha >> restruant.openLate){
            if (restruant.openLate == true || restruant.openLate == false){
                valiInput = true;
            } else {
                cout << "Invalid input try agaian\n";
            }
        } else {
            cout << "Invalid input try agaian\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    cout << "How many days a week is the restruant open: ";
    cin >> restruant.amountOfDaysOpen;
    while ((restruant.amountOfDaysOpen - 0) > 7 ||  isalpha(restruant.amountOfDaysOpen)){
        cout << "Invalid input enter a number from 1- 7\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "How many days a week is the restruant open: ";
        cin >> restruant.amountOfDaysOpen;
    }
    
    cin.ignore(1000, '\n'); // Clear out remaining input before requesting next
    cout << "What is the restruants phone number: ";
    cin >> restruant.storeNumber;

    return restruant;
}

/**
 * @brief Prints out the passed information of the `Restruant` struct.
 * @return Nothing
*/
void displayRestruantInfo(Restruant restruantInfo){
    
    cout << "\n------------------  Restruant: " << restruantInfo.name 
            << " - information  ------------------\n";
    cout << " - Adress: " << restruantInfo.adress << endl;
    cout << " - Phone Number: " << restruantInfo.storeNumber << endl;
    cout << " - Days open a week: " << restruantInfo.amountOfDaysOpen << endl;
    cout << " - Restruant stays open late? - " 
            << (restruantInfo.openLate ? "Yes\n" : "No\n") << " ";
}