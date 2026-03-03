// Week02Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
The following are function declarations. 
They _declare_ that the functions exist but they do not _define_ what the functions actually do (the definitions appear after the main function).
By declaring these functions here, they may be called in the main before they are defined.

Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/

void function1(int);
void function2(int*);

int main()
{
    //std::cout << "Hello World!\n";
    int number = 10;
    // C1. display the contents of number to the screen
    // C2. display the address of variable number to the screen
    // C3. call funtion1
    // C4. display the contents of number to the screen
    // C5. call function2
    // C6. display the contents of number to the screen

    return 0;
}

void function1(int number) 
{
    // C7. increment number by 1
    // C8. display the contents of number to the screen (should be 11)
    // C9. display the address of number to the screen
}

void function2(int *numberPtr) 
{
    // C10. display the address of number to the screen (should be the same address as you displayed first in the main)
    // C11. display the value that the pointer numberPtr points to
    // C12. increment the value stored in number
    // C13. display the contents of number to the screen
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
