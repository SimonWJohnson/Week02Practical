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
    int number = 10; // create the originla variable

    // C1. display the contents of number to the screen
    printf("number: %d", number); // %d prints an integer

    // C2. display the address of variable number to the screen
    // &number means 'the address of number'
    // %p prints a pointer/address
    printf("Address of number is: %p\n", &number);

    // C3. call funtion1
    // This sends the value 10 into function1
    // A copy is made

    function1(number);
    
    // C4. display the contents of number to the screen
    // This will still be 10, because function1 only changed the copy
    printf("Value after call to function1 is: %d\n" , number);
    printf("Address of number is: %p\n", &number);
    
    // C5. call function2
    // Here we pass the address of number
    function2(&number);

    // C6. display the contents of number to the 
    // Now this becomes 11, because function2 changed the original through the pointer
    printf("Value of number after call to function2 is: %d\n", number);

    return 0;
}

void function1(int number) // this parameter is a copy
{
    // C7. increment number by 1
    // only the local copy changes
    number++;
    
    // C8. display the contents of number to the screen (should be 11)
    printf("Value of number in function1 is: &d\n", number);
    
    // C9. display the address of number to the screen
    printf("Address of number is: %p\n", &number);

}

void function2(int *numberPtr) 
{
    // numberPtr is a pointer to an integer
    // If numberPtr stores the address of number, then;
        // numberPtr = address
        // *numberPtr = value stored at that address

    // C10. display the address of number to the screen (should be the same address as you displayed first in the main)
    // We print the pointer itself - the address of the original variable
    printf("The address of number is: %p\n", numberPtr);  
    
    // C11. display the value that the pointer numberPtr points to

    printf("The value of number in function2 is: %d\n", *numberPtr);
     
    // C12. increment the value stored in number
    (*numberPtr)++; 

    // C13. display the contents of number to the screen
    printf("The value of the increment in function2 is: %d\n", *numberPtr); // now it prints 11

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
