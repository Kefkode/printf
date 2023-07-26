INTRODUCTION
This is a  collaborative project bordering on printf function in c programming. Specifically, it entails the writing ofuser-defined printf funtion similar to that of the standard printf function.

COLLABORATORS ON THIS PROJECT
>Victor Nna (https://github.com/NnaIzu)
>Kefuoe Mosunyane (https://github.com/Kefkode)

In fulfilling the requirement of this project, the following tasks were assigned to the collaborators:

Task 0
Write a function that produces output according to a format.

Prototype: int \_printf(const char \*format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%

The following are not allowed:
+ reproductioin of the buffer handling of the C library printf function
+ Handling of the flag characters
+ Handling of field width
+ Handling precision
+ Handling length modifiers

Task 1

For this task, the function is expected to handle the following conversion specifiers:
+ d 
+ i

The following handling is not required:
+ Field width
+ Precision
+ Length Modifier

Task 2

Here the function handles the "b"(the unsigned int argument converted to binary) conversion specifier.

Task 3
The function handles the following conversion specifiers in this task:
+ Flag characters
+ Field width
+ Precision
+ Length modifiers

Task 4
Here, the local buffer 1024 chars is used in order to call write as little as possible

Task 5
The function in this task handles the following custom conversion specifier:
+ s: to print the string
+ Non printable characters (0 < ASCII value < 32 or >= 127) are printed.

Task 6
This task handles the conversion specifier "p" excluding the following handling:
+ Flag characters
+ Field width
+ Precision
+ Length modifiers

Task 7
The function handles the following flag characters for non-custom conversion specifiers: '+', 'space', and '#'.

Task 8
The function handles the 'l' and 'h' length modifieres for non-custom conversions specifiers.

Task 9
Here, the function handles the field width for non-custom conversion specifiers.

Task 10
The function in this task handles the precision for non-custom conversion specifiers.

Task 11
The function in this task handles the 0 flag character for non-custom conversion specifiers.

Task 12
The function in this task handles the '-' flag character for non-custom conversion specifiers.

Task 13
The function in this task handles the 'r' custom conversion specifier (which prints the reversed string)

Task 14
The function in task handles the 'R' custom conversion specifier

Task 15
In this task, collaborators were expected to check to ascertain the all the above indicated functions and codes works as expected.
