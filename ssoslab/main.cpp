#include <iostream>

using namespace std;

int main(){

    #include<iostream>
    #include<fstream>
    #include<string>
    #include<sstream>
    #include<vector>
    #include<map> 
    using namespace std;
    int main() {

    ifstream inputFile("input.asm");
    map symbolTable;
    vector instructions;
    string line;
    while (getline(inputFile, line)) {
    vector tokens;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
        tokens.push_back("");
        } else {
        tokens.push_back(line.substr(i));
        break;
        }
    }

    if (tokens[0].back() == ':') {
        symbolTable[tokens[0].substr(0, tokens[0].length() - 1)] = instructions.size();
    } else {
        instructions.push_back(line);
    }
    }

    inputFile.close();
    ofstream outputFile("output.txt");
    for (map::iterator it = symbolTable.begin(); it != symbolTable.end(); it++) {
    outputFile << it->first << " " << it->second << endl;
    }
    for (int i = 0; i < instructions.size(); i++) {
    outputFile << instructions[i] << endl;
    }
    outputFile.close();
    return 0;
}
