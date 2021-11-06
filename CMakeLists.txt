cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Tutorial VERSION 1.0.0)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

# Then, configure a header file to pass the version number to the source code
configure_file(TutorialConfig.h.in TutorialConfig.h)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Execute main file
add_executable(Tutorial Tutorial.cpp)

# Optional include libaries
if(USE_MYMATH)
     # Add the MathFunctions library
     add_subdirectory(MathFunctions)
     list(APPEND EXTRA_LIBS MathFunctions)
     list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

# Add the binary tree to the search path for include files
# So that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${EXTRA_INCLUDES}"
                          )
# define import lib
install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
        DESTINATION include
        )