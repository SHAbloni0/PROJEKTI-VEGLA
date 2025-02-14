#include <iostream>
using namespace std;


void showMenu() {
    cout << "\n===== Advanced Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponentiation" << endl;
    cout << "6. Modulus" << endl;
    cout << "7. Square Root" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose an option: ";
}


int main(){
    int choice;
    double num1, num2;
    
    do {
        showMenu();
        cin >> choice;
        
        if (choice >= 1 && choice <= 6) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        else if (choice == 7) {
            cout << "Enter a number: ";
            cin >> num1;  // Only need one number for square root
        }
        





    } while (choice != 8);
}