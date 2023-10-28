#include "Log.h"

// Returns the single instance of the Log class or creates it if it doesn't exist.
Log& Log::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Log();
	}

	return *instance;
}

// Writes a log entry to the list.
void Log::writeLog(string toWrite)
{
	list.push_back(toWrite);
}

// Returns log list array
vector<string> Log::getLogs()
{
	return list;
}

