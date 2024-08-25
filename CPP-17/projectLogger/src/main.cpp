 #include "../inc/loggerBase.h"

int main() {
    Logger& logger = Logger::getInstance();
    logger.log("This is a singleton logger example.");
    return 0;
}