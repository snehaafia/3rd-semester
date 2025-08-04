#include <iostream>
using namespace std;


void OddNumbers(int starting, int ending) {
    for (int i = starting; i <= ending; i++) {
        if (i % 2 != 0) {

            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int starting, ending;


    cout << "Starting value: ";
    cin >> starting;

    cout << "Ending value: ";
    cin >> ending;


    OddNumbers(starting, ending);

    return 0;
}
