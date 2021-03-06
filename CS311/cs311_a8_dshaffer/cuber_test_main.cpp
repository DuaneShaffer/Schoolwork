// cuber_test_main.cpp
// Glenn G. Chappell
// 2 Dec 2017
//
// For CS 311 Fall 2017
// Tests for class Cuber: main program
// For Assignment 8, Exercise 8
// Uses the "Catch" unit-testing framework
// Requires cuber_test_suites.cpp, catch.hpp, cuber.h

#define CATCH_CONFIG_FAST_COMPILE
                             // Disable some features for faster compile
#define CATCH_CONFIG_RUNNER  // We write our own main
#include "catch.hpp"         // For the "Catch" unit-testing framework
#include <iostream>          // For std::cout, endl, cin


// Main program
// Run all tests. Prompt for ENTER before exiting.
int main(int argc, char *argv[])
{
    Catch::Session session;  // Primary Catch object
    int catchresult;         // Catch return code; for return by main

    // Handle command line
    catchresult = session.applyCommandLine(argc, argv);

    if (!catchresult)  // Continue only if no command-line error
    {
        // Run test suites
        std::cout << "BEGIN tests for class Cuber"
                  << " - CS 311 Assn 8, Ex B"
                  << std::endl
                  << std::endl;
        catchresult = session.run();
        std::cout << "END tests for class Cuber"
                  << " - CS 311 Assn 8, Ex B"
                  << std::endl
                  << std::endl;
    }

    // Wait for user
    std::cout << "Press ENTER to quit ";
    while (std::cin.get() != '\n') ;

    // Program return value is return code from Catch
    return catchresult;
}

