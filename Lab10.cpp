#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    regex snakeCaseRegex("^[a-z]+(_[a-z]+)*$");

    string userInput;
    cout << "Enter an identifier to check if it's in Snake_Case: ";
    cin >> userInput;

    if (regex_match(userInput, snakeCaseRegex)) {
        cout << "The identifier is valid Snake_Case." << endl;
    }
    else {
        cout << "The identifier is NOT valid Snake_Case." << endl;
    }

    return 0;
}