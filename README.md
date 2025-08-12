# Pointers-EXP-9

## APPARATUS-Programiz

## PROGRAM 1

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

## PROGRAM 2

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

## PROGRAM 3

## Aim
To display the elements of an integer array in reverse order using pointers in C++.

## Algorithm
Start the program.

Declare and initialize an integer array arr with 5 elements {10, 20, 30, 40, 50}.

Create a pointer ptr and assign it the address of the first element of the array.

Use a for loop starting from the last index (i = 4) down to the first (i = 0).

Inside the loop, print the element at position ptr[i].

End the program.

## Observation Table
Index (i)	Pointer Expression	Value Printed
4	ptr[4]	50
3	ptr[3]	40
2	ptr[2]	30
1	ptr[1]	20
0	ptr[0]	10

## Conclusion
The program successfully demonstrates accessing array elements in reverse order using pointers. By using ptr[i], the pointer accesses elements relative to the base address without directly using the array name.

## PROGRAM 4

## Aim
To input a string from the user and display it using a pointer to a string in C++.

## Algorithm
Start the program.

Declare a string variable str1 and initialize it as empty.

Prompt the user to enter a string.

Read the string input into str1.

Declare a string pointer str_ptr and assign it the address of str1.

Display the string using the dereferenced pointer *str_ptr.

End the program.



## Conclusion
The program successfully demonstrates how a pointer can be used to store the address of a string variable and access its value using the dereference operator (*). This confirms that pointers can handle complex data types like std::string in C++.



