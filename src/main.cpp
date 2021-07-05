#include <iostream>
#include "DirectoryScanner.h"

void exitWithError(const std::string_view& message)
{
    std::cerr << message << std::endl;
    std::exit(-1);
}

int main(int ac, char**av)
{
    if (ac != 2) {
        exitWithError("I need a directory path!");
    }

    try {
        DirectoryScanner directoryScanner(av[1]);
        directoryScanner.scan();
    }
    catch (std::exception& e) {
        exitWithError(e.what());
    }
    return 0;
}
