# Pointers-EXP-9

## APPARATUS-Programiz

## Aim:
To perform addition and subtraction of array elements using pointers in C++.

## Algorithm:

Start the program.

Declare and initialize an integer array with 5 elements: {10, 20, 30, 40, 50}.

Declare a pointer ptr and assign it the address of the 4th index element (arr[4]).

Declare another pointer ptr1 and assign it the address of the 2nd index element (arr[2]).

Dereference both pointers and perform addition: (*ptr) + (*ptr1).

Dereference both pointers and perform subtraction: (*ptr) - (*ptr1).

Display the results for addition and subtraction.

End the program.

## Conclusion:
The program successfully demonstrates the use of pointers to access array elements and perform arithmetic operations. By dereferencing pointers, the program retrieves the values stored in the array and computes their sum and difference correctly.

## Aim:
To demonstrate pointer arithmetic in C++ by observing address changes when incrementing pointers to variables of different data types.

## Algorithm:

1)Start the program.

2)Declare and initialize:

3)An integer variable a with value 20.

4)A boolean variable c1 with character '0'.

5)A floating-point variable b with value 10.2.

6)A string variable str1 with "Hello".

7)Create an integer pointer ptr pointing to a and display its address. Increment ptr and display the new address.

8)Create a boolean pointer ptr1 pointing to c1 and display its address. Increment ptr1 and display the new address.

9)Create a float pointer ptr2 pointing to b and display its address. Increment ptr2 and display the new address.

10)Create a string pointer ptr3 pointing to str1 and display its address. Increment ptr3 and display the new address.

End the program.

## Conclusion:
The program successfully demonstrates that incrementing a pointer moves it forward in memory by a number of bytes equal to the size of its pointed data type:

Integer pointer increment moves by 4 bytes (on most systems).

Boolean pointer increment moves by 1 byte.

Float pointer increment moves by 4 bytes.

String pointer increment moves by the size of a std::string object (commonly 32 or 24 bytes, system-dependent).

This shows that pointer arithmetic depends on the data type size of the variable it points to.


