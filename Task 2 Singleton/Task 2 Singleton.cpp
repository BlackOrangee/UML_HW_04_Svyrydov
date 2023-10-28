// Task 2 Singleton
//

#include <iostream>
#include "Log.h"

using namespace std;

Log* Log::instance = nullptr;

void PrintVector(vector<string>& list);

int main()
{
    Log& log = Log::getInstance();

    // Add log entries to log
    log.writeLog("Log entry 1");
    log.writeLog("Log entry 2");
    log.writeLog("Log entry 3");

    // Get logs from log and print them
    vector<string> logList = log.getLogs();
    cout << "Log from log instance:" << endl;
    PrintVector(logList);

    // Create a second instance of Log
    Log& log2 = Log::getInstance();

    // Add log entries to log2
    log2.writeLog("Log entry A");
    log2.writeLog("Log entry B");

    // Get logs from log2 and print them
    vector<string> logList2 = log2.getLogs();
    cout << "Log from log2 instance:" << endl;
    PrintVector(logList2);

    // Both log and log2 are the same instance, so they share the same logs
}

void PrintVector(vector<string>& list)
{
    for (string s : list)
    {
        cout << s << endl;
    }
}
