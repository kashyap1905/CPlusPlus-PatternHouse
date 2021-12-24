#include <iostream>
using namespace std;

char character = '#';

void printPattern (int);
void printWhitespaces (int);
void swapCharacter ();

int main () {

    int totalLines;

    cout << "How many lines to be printed? -- ";
    fflush(stdout);
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n";
    cout << "\n";

    printPattern (totalLines);

    cout << "\n";
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace, printStar;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);

        for (int j = 1; j <= printStar; j++) {

            (j & 1) ? cout << character : cout << " ";
        }

        swapCharacter();
        cout << "\n";
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << " ";
    }
}

void swapCharacter () {

    (character == '#') ? (character = '*') : (character = '#');
}