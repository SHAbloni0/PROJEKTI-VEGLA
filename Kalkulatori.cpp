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
            cin >> num1;  //vetem nje numer per Rrenje katrore
        }
        
        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                if (static_cast<int>(num2) != 0)
                    cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                else
                    cout << "Error: Modulus by zero!" << endl;
                break;
            case 7:
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Negative number!" << endl;
                break;
            case 8:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }




    } while (choice != 8);
}