#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the file for reading
    ifstream fin("input.txt");

    // Check if the file is opened successfully
    if (!fin) {
        cout << "File not found" << endl;
        return 1; // Return an error code
    }

    // Initialize variables
    string word;
    int count = 0;

    // Read words from the file and count them
    while (fin >> word) {
        count++;
    }

    // Close the file
    fin.close();

    // Display the result
    cout << "Number of words in the file are: " << count << endl;

    return 0;
}
