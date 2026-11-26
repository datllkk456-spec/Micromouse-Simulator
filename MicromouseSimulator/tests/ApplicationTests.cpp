#include <iostream>
#include <sstream>
#include <string>

#include "app/Application.h"

int main()
{
    Application app;
    std::ostringstream output;
    std::streambuf* originalBuffer = std::cout.rdbuf(output.rdbuf());

    app.initialize();
    app.run();
    app.shutdown();

    std::cout.rdbuf(originalBuffer);

    const std::string expected =
        "Initializing Micromouse Simulator...\n"
        "Micromouse Simulator is running.\n"
        "Shutting down application.\n";

    if (output.str() != expected)
    {
        std::cerr << "Application lifecycle output did not match the expected messages.\n";
        return 1;
    }

    return 0;
}
