#include <iostream>
#include <cmath>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#  include "MathFunctions.h"
#endif

int main(int argc, char **argv) {

    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;

    const double inputValue = std::stod(argv[1]);

    #ifdef USE_MYMATH
        std::cout << "use custom lib" << std::endl;
        const double outputValue = mysqrt(inputValue);
    #else
        std::cout << "not use custom lib" << std::endl;
        const double outputValue = sqrt(inputValue);
    #endif

    std::cout << "Usage: " << argv[0] << "--" << argv[1] << "--" << outputValue << " number" << std::endl;

    return 0;
}