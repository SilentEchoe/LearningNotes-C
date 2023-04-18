#include <iostream>
#include <iostream>

class Log
{
public:
    // Create constants for each of the Log Levels
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    // Create a SetLevel() function to set the Log Level
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    // Create a Warn() function to log warnings
    void Warn(const char *message)
    {
        std::cout << "[WARNING]: " << message << std::endl;
    }

    // Create an Error() function to log errors
    void Error(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
        {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }

    // Create an Info() function to log information
    void Info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
        {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }
};
int main()
{
    Log kog;
    kog.SetLevel(kog.LogLevelError);
    kog.Warn("Wring: Hello");
    kog.Info("Info List");
    kog.Error("Error: Hello");

    return 0;
}