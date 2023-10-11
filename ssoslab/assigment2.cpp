// Finding opcodes in an assembly code
// WAP to search for opcode mnemonics and replace them with respective machine codes in assembly programs. 

// using vector without string 

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    vector<string> opcode = {"LDA", "STA", "LDCH", "STCH", "ADD", "SUB", "MUL", "DIV", "COMP", "J", "JEQ", "JLT", "JGT", "JSUB", "RSUB", "TIX", "TD", "RD", "WD"};
    vector<string> machinecode = {"00", "0C", "50", "54", "18", "1C", "20", "24", "28", "3C", "30", "34", "38", "48", "4C", "2C", "E0", "D8", "DC"};
    string line;
    while (getline(fin, line))
    {
        string word;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                if (word == "START")
                {
                    fout << line << endl;
                    break;
                }
                else
                {
                    fout << line << endl;
                    break;
                }
            }
            else
            {
                word += line[i];
            }
        }
        if (word == "START")
        {
            fout << line << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < opcode.size(); i++)
            {
                if (word == opcode[i])
                {
                    fout << machinecode[i] << " ";
                    break;
                }
            }
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == ' ')
                {
                    word = "";
                    for (int j = i + 1; j < line.length(); j++)
                    {
                        if (line[j] == ' ')
                        {
                            break;
                        }
                        else
                        {
                            word += line[j];
                        }
                    }
                    for (int j = 0; j < opcode.size(); j++)
                    {
                        if (word == opcode[j])
                        {
                            fout << machinecode[j] << " ";
                            break;
                        }
                    }
                }
            }
            fout << endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}

