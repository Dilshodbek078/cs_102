#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter student grade: ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
        cout << "Invalid grade!" << endl;
        return 0;
    }

    switch (grade / 10) {
        case 10: // For 100
        case 9:  cout << "A" << endl; break;
        case 8:  cout << "B" << endl; break;
        case 7:  cout << "C" << endl; break;
        case 6:  cout << "D" << endl; break;
        default: cout << "F" << endl;
    }

    return 0;
}
