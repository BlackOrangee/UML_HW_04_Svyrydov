#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Log
{
private:
	static Log* instance;

	vector<string> list;

	Log() {}

	Log operator= (Log*) {};

public:
	// Returns the single instance of the Log class or creates it if it doesn't exist.
	static Log& getInstance();

	// Writes a log entry to the list.
	void writeLog(string);

	// Returns log list array
	vector<string> getLogs();
};

