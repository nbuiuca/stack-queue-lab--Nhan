/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Michelle Talley University of Central Arkansas
*
* @author: <Nhan Bui>
* @course: Data Structures (CSCI 2320)
*
* @file main.cpp
* @brief Driver program for Stack and Queue Lab
-----------------------------------------------------------------------
*/ 
#include <iostream>
#include <string>
#include <vector>
#include <iterator> 

#include "Stack.h"
#include "Queue.h"

/*
TODO: Students to implement the following in Stack.h

empty()
size()
top()
push()
pop()

toString()
print()
overriding the << operator
*/

/*
TODO: Students to implement the following in Queue.h

empty()
size()
front()
enqueue()
dequeue()

toString()
print()
overriding the << operator
*/

/*
TODO: Students to implement the greeting and salutation in main.cpp
*/

int main()
{
    std::cout << "Welcome to the Stack and Queue test program." << std::endl;
    Stack<int> myIntStack1;
    Stack<std::string> myStringStack1;
    Queue<int> myIntQueue1;
    Queue<std::string> myStringQueue1;

    // Add the welcome message

    //--------------------------------------------------------------------------------
    // Try some stack operations
    //--------------------------------------------------------------------------------

    std::cout << std::endl
              << "Test some integer stacks..." << std::endl;

    // Add some elements to the stack of integers
    myIntStack1.push(10);
    myIntStack1.push(20);
    myIntStack1.push(30);
    myIntStack1.push(5);
    std::cout << "Integer stack 1 (via print): " << std::endl;
    myIntStack1.print();

    // Print the stack
    std::cout << "Integer stack 1 (via iterators): ";
    for (int val : myIntStack1)
        std::cout << val << ' ';
    std::cout << '\n';

    // Print the top of the stack
    std::cout << "Top element: " << myIntStack1.top() << std::endl;
    
    // Pop elements from the stack
    std::cout << "Pop: " << myIntStack1.top() << std::endl;
    myIntStack1.pop();
    std::cout << "Integer stack 1: ";
    myIntStack1.print();
    std::cout << "Pop: " << myIntStack1.top() << std::endl;
    myIntStack1.pop();
    std::cout << "Integer stack 1: " << std::endl;
    myIntStack1.print();
    std::cout << "Length of stack 1 is " << myIntStack1.size() << std::endl;

    // Check if the stack is empty
    if (myIntStack1.empty())
    {
        std::cout << "Stack 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Stack 1 is not empty" << std::endl;
    }

    std::cout << "Pop: " << myIntStack1.top() << std::endl;
    myIntStack1.pop();
    std::cout << "Pop: " << myIntStack1.top() << std::endl;
    myIntStack1.pop();
    std::cout << "Integer stack 1 (via toString):" 
              << myIntStack1.toString() << ":" << std::endl;

    // Check if the stack is empty
    if (myIntStack1.empty())
    {
        std::cout << "Stack 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Stack 1 is not empty" << std::endl;
    }

    std::cout << std::endl << "Refill integer stack 1." << std::endl;
    // Create a new stack by copying an old one
    myIntStack1.push(10);
    myIntStack1.push(20);
    myIntStack1.push(30);
    std::cout << "Integer stack 1: " << std::endl;
    myIntStack1.print();

    std::cout << "Copy integer stack 1 to integer stack 2 (via constructor)." 
              << std::endl;
    Stack<int> myIntStack2(myIntStack1);
    std::cout << "Integer stack 2: " << std::endl;
    myIntStack2.print();
    std::cout << "Copy integer stack 1 to integer stack 2 (via assignment)." 
              << std::endl;
    myIntStack2 = myIntStack1;
    std::cout << "Integer stack 2: " << std::endl;
    myIntStack2.print();

    std::cout << "Pop 2 elements off the top of integer stack 1." << std::endl;
    myIntStack1.pop();
    myIntStack1.pop();
    std::cout << "Integer stack 1:" 
              << myIntStack1.toString() << ":" << std::endl;
    std::cout << "Integer stack 2:" 
              << myIntStack2.toString() << ":" << std::endl;

    std::cout << "Integer stack 2 (via std cout): "
              << myIntStack2 << ":" << std::endl;

    std::cout << std::endl
              << "Test some exceptions..." << std::endl;

    myIntStack1.pop();

    if (myIntStack1.empty())
    {
        std::cout << "Stack 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Stack 1 is not empty" << std::endl;
    }

    try
    {
        // use 2 statements to avoid awkward buffering issue on Windows
        std::cout << "Top element: " << std::endl;
        myIntStack1.top();
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        // use 2 statements to avoid awkward buffering issue on Windows
        std::cout << "Pop element: " << std::endl;
        myIntStack1.pop();
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Try our stack on strings
    std::cout << std::endl
              << "Test some string stacks..." << std::endl;
    myStringStack1.push("spam?");
    myStringStack1.push("some");
    myStringStack1.push("have");
    myStringStack1.push("Please, may I");
    std::cout << "String stack 1: " << myStringStack1 << std::endl;
    myStringStack1.pop();
    std::cout << "String stack 1: " << myStringStack1 << std::endl;
    myStringStack1.pop();
    std::cout << "String stack 1: " << myStringStack1 << std::endl;

    //--------------------------------------------------------------------------------
    // Try some queue operations
    //--------------------------------------------------------------------------------

    std::cout << std::endl
              << "Test some integer queues..." << std::endl;

    // Add some elements to the queue of integers
    myIntQueue1.enqueue(10);
    myIntQueue1.enqueue(20);
    myIntQueue1.enqueue(30);
    myIntQueue1.enqueue(5);
    std::cout << "Integer queue 1 (via print): " << std::endl;
    myIntQueue1.print();

    // Print the queue
    std::cout << "Integer queue 1 (via iterators): ";
    for (int val : myIntQueue1)
        std::cout << val << ' ';
    std::cout << '\n';

    // Print the front of the queue
    std::cout << "Front element: " << myIntQueue1.front() << std::endl;

    // Pop elements from the queue
    std::cout << "Dequeue: " << myIntQueue1.front() << std::endl;
    myIntQueue1.dequeue();
    std::cout << "Integer queue 1: ";
    myIntQueue1.print();
    std::cout << "Dequeue: " << myIntQueue1.front() << std::endl;
    myIntQueue1.dequeue();
    std::cout << "Integer queue 1: ";
    myIntQueue1.print();
    std::cout << "Length of queue 1 is " << myIntQueue1.size() << std::endl;

    // Check if the queue is empty
    if (myIntQueue1.empty())
    {
        std::cout << "Queue 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Queue 1 is not empty" << std::endl;
    }

    std::cout << "Dequeue: " << myIntQueue1.front() << std::endl;
    myIntQueue1.dequeue();
    std::cout << "Dequeue: " << myIntQueue1.front() << std::endl;
    myIntQueue1.dequeue();
    std::cout << "Integer queue 1 (via toString):" 
              << myIntQueue1.toString() << ":" << std::endl;

    // Check if the queue is empty
    if (myIntQueue1.empty())
    {
        std::cout << "Queue 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Queue 1 is not empty" << std::endl;
    }

    std::cout << std::endl
              << "Refill integer queue 1." << std::endl;
    // Create a new queue by copying an old one
    myIntQueue1.enqueue(10);
    myIntQueue1.enqueue(20);
    myIntQueue1.enqueue(30);
    std::cout << "Integer queue 1: " << std::endl;
    myIntQueue1.print();

    std::cout << "Copy integer queue 1 to integer queue 2 (via constructor)."
              << std::endl;
    Queue<int> myIntQueue2(myIntQueue1);
    std::cout << "Integer queue 2: " << std::endl;
    myIntQueue2.print();
    std::cout << "Copy integer queue 1 to integer queue 2 (via assignment)."
              << std::endl;
    myIntQueue2 = myIntQueue1;
    std::cout << "Integer queue 2: " << std::endl;
    myIntQueue2.print();

    std::cout << "Dequeue 2 elements off the front of integer queue 2." << std::endl;
    myIntQueue1.dequeue();
    myIntQueue1.dequeue();
    std::cout << "Integer queue 1:" << myIntQueue1.toString() << ":" << std::endl;
    std::cout << "Integer queue 2:" << myIntQueue2.toString() << ":" << std::endl;

    std::cout << "Integer queue 2 via std cout: "
              << myIntQueue2 << ":" << std::endl;

    std::cout << std::endl
              << "Test some exceptions..." << std::endl;
    myIntQueue1.dequeue();

    if (myIntQueue1.empty())
    {
        std::cout << "Queue 1 is empty" << std::endl;
    }
    else
    {
        std::cout << "Queue 1 is not empty" << std::endl;
    }

    try
    {
        // use 2 statements to avoid awkward buffering issue on Windows
        std::cout << "Front element: " << std::endl;
        myIntQueue1.front();
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        // use 2 statements to avoid awkward buffering issue on Windows
        std::cout << "Dequeue element: " << std::endl;
        myIntQueue1.dequeue();
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Try our queue on strings
    std::cout << std::endl
              << "Test some string queues..." << std::endl;
    myStringQueue1.enqueue("Please, may I");
    myStringQueue1.enqueue("have");
    myStringQueue1.enqueue("some");
    myStringQueue1.enqueue("spam?");
    std::cout << "String queue 1: " << myStringQueue1 << std::endl;
    myStringQueue1.dequeue();
    std::cout << "String queue 1: " << myStringQueue1 << std::endl;
    myStringQueue1.dequeue();
    std::cout << "String queue 1: " << myStringQueue1 << std::endl;
    std::cout << "\nGoodbye!" << std::endl;
    // Add the salutation message
    return 0;
}
