#include <iostream>
#include <cmath>
using namespace std;

void displayMenu () {
    cout << "\n\t ----------------------------------------------\n";
    cout << "\t                   CALCULATOR                  \n";
    cout << "\t ----------------------------------------------\n";
    cout << "\t1: Addition\t\t8: sin (degrees)\n";
    cout << "\t2: Subtraction\t\t9: cos (degrees)\n";
    cout << "\t3: Multiplication\t10: tan (degrees)\n";
    cout << "\t4: Division\t\t11: Inverse of sin\n";
    cout << "\t5: Exponent\t\t12: Inverse of cos\n";
    cout << "\t6: Square\t\t13: Inverse of tan\n";
    cout << "\t7: log\t\t\t0: Exit\n";
}

float toRadians(float degrees) {
    return degrees * M_PI / 180.0;
}

float toDegrees(float radians) {
    return radians * 180.0 / M_PI;
}

int main() {
    float x, y;
    int choice;

    do {
        displayMenu();
        cout << "\n\t Enter the function that you want to perform: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "\n Enter 1st number: "; cin >> x;
                cout << " Enter 2nd number: "; cin >> y;
                cout << " Result = " << x + y << endl;
				 break;
            case 2:
                cout << "\n Enter 1st number: "; cin >> x;
                cout << " Enter 2nd number: "; cin >> y;
                cout << " Result = " << x - y << endl; 
				break;
            case 3:
                cout << "\n Enter 1st number: "; cin >> x;
                cout << " Enter 2nd number: "; cin >> y;
                cout << " Result = " << x * y << endl; 
				break;
            case 4:
                cout << "\n Enter 1st number: "; cin >> x;
                cout << " Enter 2nd number: "; cin >> y;
                if (y != 0) cout << " Result = " << x / y << endl;
                else cout << " Error: Division by zero!" << endl; 
				break;
            case 5:
                cout << "\n Enter base number and exponent: "; cin >> x >> y;
                cout << " Result = " << pow(x, y) << endl; break;
            case 6:
                cout << "\n Enter the number: "; cin >> x;
                cout << " Result = " << sqrt(x) << endl; break;
            case 7:
                cout << "\n Enter the number: "; cin >> x;
                cout << " Result = " << log10(x) << endl; break;
            case 8:
                cout << "\n Enter angle in degrees: "; cin >> x;
                cout << " Result = " << sin(toRadians(x)) << endl; break;
            case 9:
                cout << "\n Enter angle in degrees: "; cin >> x;
                cout << " Result = " << cos(toRadians(x)) << endl; break;
            case 10:
                cout << "\n Enter angle in degrees: "; cin >> x;
                cout << " Result = " << tan(toRadians(x)) << endl; break;
            case 11:
                cout << "\n Enter value for inverse sin (-1 to 1): "; cin >> x;
                if (x >= -1 && x <= 1)
                    cout << " Result = " << toDegrees(asin(x)) << endl;
                else
                    cout << " Error: Input out of range!" << endl; break;
            case 12:
                cout << "\n Enter value for inverse cos (-1 to 1): "; cin >> x;
                if (x >= -1 && x <= 1)
                    cout << " Result = " << toDegrees(acos(x)) << endl;
                else
                    cout << " Error: Input out of range!" << endl; break;
            case 13:
                cout << "\n Enter value for inverse tan: "; cin >> x;
                cout << " Result = " << toDegrees(atan(x)) << endl; break;
            case 0:
                break;
            default:
                cout << " Invalid choice!" << endl; break;
        }
    } while (choice != 0);

    return 0;
}
