#include <iostream>

using namespace std;

class tollBooth {
private:
    unsigned int totalCars;
    double totalMoney;

public:
    // Constructor initializes both data members to 0
    tollBooth() : totalCars(0), totalMoney(0.0) {}

    // Increments the car total and adds 0.50 to the cash total
    void payingCar() {
        totalCars++;
        totalMoney += 0.50;
    }

    // Increments the car total but adds nothing to the cash total
    void nopayCar() {
        totalCars++;
    }

    // Displays the two totals 
    void display() const {
        cout << "         TOLLBOOTH SUMMARY         " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Total cars passed: " << totalCars << endl;
        cout << "Total money collected: GHc " << totalMoney << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    tollBooth booth;
    char choice;

    cout << "== Tollbooth Monitoring System ==" << endl;
    cout << "Instructions:" << endl;
    cout << "  Press '1' for a Paying Car" << endl;
    cout << "  Press '2' for a Non-Paying Car" << endl;
    cout << "  Press 'Q' or 'q' to Quit and Display Totals" << endl;
    cout << "===================================\n" << endl;

    do {
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                booth.payingCar();
                cout << "-> Registered: Paying Car (+0.50)" << endl;
                break;
            case '2':
                booth.nopayCar();
                cout << "-> Registered: Non-Paying Car" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "\nExiting system..." << endl;
                break;
            default:
                cout << "Invalid input. Please press 1, 2, or Q." << endl;
                break;
        }
    } while (choice != 'q' && choice != 'Q');

    // Displaying the final totals before exiting
    booth.display();

    return 0;
}