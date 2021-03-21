#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


int main() {
    int choice;
    do {
        cout << "1. File\n";
        cout << "2. Edit\n";
        cout << "3. View\n";
        cout << "4. Quit\n";
        cout << "\n";
        int choice;

        cout << "Enter your choice: ";
        cin >> choice;
        system ("CLS");
        switch(choice) {
            case 1:
                cout << "1. File\n";
                cout << "\tNew\n";
                cout << "\tOpen\n";
                cout << "\tSave\n";
                cout << "\n";

                break;
            case 2:
                cout << "2. Edit\n";
                cout << "\tUndo\n";
                cout << "\tRedo\n";
                cout << "\tCopy\n";
                cout << "\tCut\n";
                cout << "\n";
                break;
            case 3:
                cout << "3. View\n";
                cout << "\tToolbars\n";
                cout << "\tStatus bar\n";
                cout << "\n";
                break;
            case 4:
                cout << "You have quited\nLove you";
                return 0;


        }
    }while(choice != 0);

    return 0;
}
