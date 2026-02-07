// COMSC-210 | Lab-3A | Johnathan Perez Baltazar

#include <iostream>
#include <iomanip>
using namespace std;

struct Restruant{               // Struct to hold restruant information
    string name;
    string adress;
    long long storeNumber;
    char amountOfDaysOpen;
    bool openLate;
};

const int daysIneWeek = 7;      // Amount of days in a week
const int restruantStored = 4;  // The amount of restruants to save info for

Restruant getRestruantInfo();
void displayRestruantInfo(Restruant);

/**
 * @brief Where the main code will execute other functions
 * @return `Literal` 0
*/ 
int main() {
    Restruant savedRestruant[restruantStored];

    // Loops through the amount of restruants to be stored
    for (int i = 0; i < restruantStored; i++){
        savedRestruant[i] = getRestruantInfo();
    }

    // Loops through the amount of restruants to be stored
    // and displays the information of each restruant
    for (int i = 0; i < restruantStored; i++){
        displayRestruantInfo(savedRestruant[i]);
    }
    
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

    cout << "\n------------ Enter Restruant Information ------------" << endl;
    cout << "Enter the name of the restruant: ";
    getline(cin, restruant.name);
    cout << "What is the adress of the restruant: ";
    getline(cin, restruant.adress);

    // Filters the users input to make sure true or false is entered
    bool valiInput = false;
    while (!valiInput){     
        cout << "Does the restruant close late? (Enter true or false): ";
        if (cin >> boolalpha >> restruant.openLate){
            // If the user enters true or false then the loop will end
            if (restruant.openLate == true || restruant.openLate == false){
                valiInput = true;
            } else { // If the user enters a number the loop continues
                cout << "Invalid input try agaian\n";
            }
        } else { // If user enters a non numeric value the loop continues
            cout << "Invalid input try agaian\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    cout << "How many days a week is the restruant open: ";
    cin >> restruant.amountOfDaysOpen;
    // Filters the users input to make sure a number from 1-7 is entered
    while ((restruant.amountOfDaysOpen - '0') > daysIneWeek ||  
            isalpha(restruant.amountOfDaysOpen)){
        cout << "Invalid input enter a number from 1- 7\n";

        // Remove all prevous input before asking user for new input
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "How many days a week is the restruant open: ";
        cin >> restruant.amountOfDaysOpen;
    }
    cin.ignore(1000, '\n'); // Clear out remaining input before requesting next
    
    cout << "What is the restruants phone number: ";
    cin >> restruant.storeNumber;
    cin.clear();
    cin.ignore(1000, '\n');

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