#ifndef LOGGER_BASE_H
#define LOGGER_BASE_H

#include <stdio.h>
#include <string>

using namespace std;
class Logger {
public:
    // Static method to get the singleton instance
    static Logger& getInstance();
    // Public methods of the Logger class
    void log(const std::string& message);

private:
    // Private constructor to prevent instantiation
    Logger() = default;

    // Delete copy constructor and assignment operator to prevent copying
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // Destructor
    ~Logger() = default;
};

#endif