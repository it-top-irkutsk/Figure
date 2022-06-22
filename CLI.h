#ifndef POLYMORPH_CLI_H
#define POLYMORPH_CLI_H

#include <iostream>
#include <string>

using namespace std;

class CLI {
private:
    static void ShowLine(string typeMessage, string message) {
        cout << "[" << typeMessage << "]: " << message << endl;
    }

    static void Show(string typeMessage, string message) {
        cout << "[" << typeMessage << "]: " << message;
    }

public:
    static void PrintInfo(string message) {
        ShowLine("INFO", message);
    }
    static void PrintError(string message) {
        ShowLine("ERROR", message);
    }

    static string Input(string message) {
        string temp;
        Show("INPUT", message);
        cin >> temp;
        return temp;
    }
};


#endif //POLYMORPH_CLI_H
