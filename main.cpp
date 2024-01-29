#include <iostream>

//min and max float values / characteristics?
#include <limits>

using namespace std;

//Write a program to declare three variables of type char, int, and double.
//Assign the maximum allowable value for its type to each variable and output the values
//from the variables.
//Increment each variable by one, and output the results.
//Is the result what you expected? Explain what is happening

void step();

int main() {
    step();

    cout << "Declaring char, int, double variables..." << endl;

    char maxChar;
    int maxInt;
    double maxDouble;

    cout << endl;
    step();

    cout << "Variables declared: " << endl;

    cout << "maxChar: " << maxChar << endl;
    cout << "maxInt: " << maxInt << endl;
    cout << "maxDouble: " << maxDouble << endl;

    cout << endl;
    step();

    cout << "Assigning max values to variables..." << endl;

    maxChar = CHAR_MAX;
    maxInt = INT_MAX;
    maxDouble = numeric_limits<double>::max(); //another way to get max of a type

    cout << endl;
    step();

    cout << "Variables maximised: " << endl;

    cout << "maxChar: " << maxChar << endl;
    cout << "maxInt: " << maxInt << endl;
    cout << "maxDouble: " << maxDouble << endl;

    return 0;
}

int stepCount = 1;

void step() {

    if (stepCount < 10) {
        cout << "== Step 0" << stepCount << " ========" << endl;
    }

    else {
        cout << "== Step " << stepCount << " ========" << endl;
    }

    stepCount++;
}
