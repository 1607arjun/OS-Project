# OS-Project


# Question 1
The Fibonacci sequence is the series of numbers 0, 1, 1, 2, 3, 5, 8, .... Formally, it can be
expressed as:
f ib0 = 0
f ib1 = 1
f ibn = f ibn−1 + f ibn−2
Write a multithreaded program that generates the Fibonacci sequence. This program should work
as follows: On the command line, the user will enter the number of Fibonacci numbers that the
program is to generate. The program will then create a separate thread that will generate the
Fibonacci numbers, placing the sequence in data that can be shared by the threads (an array is
probably the most convenient data structure). When the thread finishes execution, the parent
thread will output the sequence generated by the child thread. Because the
parent thread cannot begin outputting the Fibonacci sequence until the child thread finishes, the
parent thread will have to wait for the child thread to finish.
    
 # Question 2
 Consider a scenario of demand paged memory. Page table is held in registers. It takes 8
milliseconds to service a page fault if an empty page is available or the replaced page is
not modified and 20 milliseconds if the replaced page is modified. Memory access time is
100 nanoseconds. Assume that the page to be replaced is modified 70 percent of the time.
Generate a solution to find maximum acceptable page-fault rate for access time that is not
more than 200 nanoseconds.
    
