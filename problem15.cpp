#include <iostream>
using namespace std;

int main() {
    int today, daysAfter;
    cout << "Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
    cin >> today;
    cout << "Enter days after today: ";
    cin >> daysAfter;

    int futureDay = (today + daysAfter) % 7;

    switch (futureDay) {
        case 0: cout << "Future day is Sunday"; break;
        case 1: cout << "Future day is Monday"; break;
        case 2: cout << "Future day is Tuesday"; break;
        case 3: cout << "Future day is Wednesday"; break;
        case 4: cout << "Future day is Thursday"; break;
        case 5: cout << "Future day is Friday"; break;
        case 6: cout << "Future day is Saturday"; break;
    }

    return 0;
}
