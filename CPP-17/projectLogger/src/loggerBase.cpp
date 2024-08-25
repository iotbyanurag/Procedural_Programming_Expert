#include <iostream>
#include "../inc/loggerBase.h"

using namespace std;

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message) {
std::cout << "Log: " << message << std::endl;
} 