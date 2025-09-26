#include <iostream>
using namespace std;
int main() {
    char choice;
    cout << "Enter language (u/e/r/g): ";
    cin >> choice;

    if (choice == 'u')
        cout << "Salom!" << endl;
    else if (choice == 'e')
        cout << "Hello!" << endl;
    else if (choice == 'r')
        cout << "Privet!" << endl;
    else if (choice == 'g')
        cout << "Hallo!" << endl;
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
