#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month == 1)
        cout << "January 1 - New Year" << endl;
    else if (month == 3)
        cout << "March 21 - Navruz" << endl;
    else if (month == 5)
        cout << "May 9 - Day of Remembrance and Honour" << endl;
    else if (month == 9)
        cout << "September 1 - Independence Day" << endl;
    else if (month == 10)
        cout << "October 1 - Teachers' and Mentors' Day" << endl;
    else if (month == 12)
        cout << "December 8 - Constitution Day" << endl;
    else
        cout << "No national holiday in this month." << endl;

    return 0;
}
