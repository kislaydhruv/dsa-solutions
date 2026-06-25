#include <bits/stdc++.h>
using namespace std;

// Logger class
class Logger {
private:
    string path; // to store the path of file

public:
    // Constructor
    Logger(const string& path) {
        this->path = path;

        // Create the file if it does not exist (opening in append creates it)
        ofstream tmp(path, ios::app);
        tmp.close();
    }

    // Log the message in the file
    void log(const string& message) {
        ofstream out(path, ios::app); // append mode

        if (!out.is_open()) {
            cout << "Failed to log this message: " << message << "\n";
            return;
        }

        out << message << "\n";
        out.close();
    }
};

int main() {
    // Create a Logger instance with a specified log file path
    Logger myLogger("application.log");

    // Log some messages
    myLogger.log("Application started...");
    myLogger.log("User logged in.");
    myLogger.log("Error: Unable to connect to the database.");
    myLogger.log("Application closed.");

    cout << "Logs have been written successfully.\n";
    return 0;
}