#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int listNo;
    
    cout << "Enter the number of students in the list (1-25): ";
    cin >> listNo;
    while (listNo < 1 || listNo > 25) {
        cout << "Please enter a number between 1 and 25: ";
        cin >> listNo;
    }

    vector<string> list(listNo);

  
    for (int i = 0; i < listNo; i++) { 
        cout << "Student " << i + 1 << ": ";
        cin >> list[i];
    }

    string front = *min_element(list.begin(), list.end());
    string end = *max_element(list.begin(), list.end());


    cout << "\nThe first name in the line is: " << front << endl;
    cout << "The last name in the line is: " << end << endl;

    return 0;
}

