Fibonacci Sequence Generator in C++

This repository contains a simple C++ program to generate the Fibonacci sequence up to a specified limit.

Description
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. This C++ program calculates the Fibonacci sequence up to a specified limit using an iterative approach.

The fibonacci function takes an integer n as input and returns a vector containing the Fibonacci sequence up to the n-th term. It uses a vector obliczenia to store the digits of each Fibonacci number, performing addition with carryover to handle large numbers.

Usage
To use this program, simply compile the fibonacci.cpp file and run the compiled executable. By default, it generates the Fibonacci sequence up to the 100th term. You can modify the N variable in the main function to generate the sequence up to a different limit.

The program then outputs the Fibonacci sequence for the specified limit, along with the number of digits in the final Fibonacci number.

Example Output
For N = 100, the output would be:

F(100) = 354224848179261915075
Number of digits: 21
