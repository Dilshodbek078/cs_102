#include <iostream>
using namespace std;

    int main() {
        char light;
        cout << "Enter traffic light (g/y/r): ";
        cin >> light;

        if (light == 'g' || light == 'G') {
            cout << "Go!" << endl;
        }
        else if (light == 'y' || light == 'Y') {
            cout << "Get ready!" << endl;
        }
        else if (light == 'r' || light == 'R') {
            cout << "Stop" << endl;
        }
        else {
            cout << "Invalid input!" << endl;
        }

        return 0;
    }
