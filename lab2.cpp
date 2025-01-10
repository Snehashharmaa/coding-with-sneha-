// Prisoner Escape
// 1-10 boxes with 1-10 randome #s
//
// Sneha Sharma
//
// box, pn, nb

#include<iostream>
#include<string>
#include<iomanip>
//#include<ctime>
#include<random>
using namespace std;

// Global variables
int pn = 1; // Prisoner number (starting from 1)
int nb = 0; // Current box number
int box[10]; // Array to represent the boxes (1-10)

// Function to shuffle numbers randomly
void shuffleBoxes() {
    random_device rd;
    mt19937 gen(rd());
    iota(begin(box), end(box), 1); // Fill the array with numbers 1-10

    // Shuffle the numbers
    shuffle(begin(box), end(box), gen);
}

// Function to simulate the prisoner's search for their number
void search() {
    nb = pn - 1; // Start from the box corresponding to the prisoner's number
    int attempts = 0;

    cout << "Prisoner " << pn << " search sequence: ";

    // Start searching for the prisoner's number, up to 5 boxes
    for (int i = 1; i <= 5; i++) {
        attempts++;
        cout << box[nb] << " -- ";

        if (box[nb] == pn) {
            // Prisoner found their number
            cout << "\nSolved in " << attempts << " attempts.\n\n";
            return; // Exit the function once the prisoner finds their number
        }

        nb = box[nb] - 1; // Move to the next box based on the current box's number
    }

    // If the prisoner didn't find their number within 5 boxes
    cout << "\nFailed to solve in 5 attempts.\n\n";
}

int main() {
    srand(time(0)); // Seed the random number generator

    shuffleBoxes(); // Randomly shuffle the numbers 1-10 in the boxes

    // Simulate the search for 10 prisoners
    for (pn = 1; pn <= 10; pn++) {
        search();
    }

    return 0;
}