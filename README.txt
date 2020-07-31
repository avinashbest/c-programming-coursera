*********************************Coursera Notes C Programming Fundamentals:*******************************
__________________________________________________________________________________________________________

#PROGRAM:	1. hello.c
			2. sum.c
			3. avg_float_no.c
			4. circle_area.c
			5. distance_km.c
			6. ASCII_code.c
			7. sizeOf_operator.c
			8. fundamental_INT.c 

# Multiply(*) has higher precedence than binary(+) and binary(-) but the unary(-) and unary(+) higher still.

#PROGRAM:	9. expression_evaluation.c
			10. temp_conversion.c
			11. logical_operator.c
			12. while_loop.c
			13. if_else.c
			14. sin_fun.c
			15. sine_table.c 			/*for loop starting*/
			16. sine_cosine_table.c

# Sequence point	->	;

# Syntax of Conditional Operator:
	variable = (condition) ? expression 1 : expression 2;
					||			 ||				 ||
					if			true			false

#PROGRAM:	17. switch_case.c
			18. time_func.c
			19.	character_reader.c

# Why function are so important?
	1. Reuse - libraries

	2. encapsulation - structure of code

	3. one thing well

	4. keep to one page

	5. test (pre, post)

# A function is a form of encapsulation. It allows you to structure a big piece of code. You structured into a bunch of functions, functions call other functions, and then finally you have the overall function main.

# Syntax:
	data_type func_name(parameter list)
	{
		declarations;
		statements;
	}

# Calling a fuction or Function Definition
	wrt_address(); //int main()

# The return statement flow of control keyword.

# return 0; It means at the end of the int main() signal to OS that normal exit value of main().

 	for e.g.return;
 			return 0;
 			return (a+b);

# When a function is invoked:
	Each express in argument list (parameters) is evaluated.

	Conversion if necessary to type of parameter.

	We call n_local as what used inside execution of function idea n_local = n;
	So, n value is never changed even if local value is change.

	The function body is the executed.

	Return statement when executed exits to where function was called.

	If return expression Then value of return converted to type of function is used in calling environment.

	If no return- as if return; was last statement of ten code block.

#PROGRAM:	20. function.c
			21. storage_class.c


# Recursion - "Function calls itself until the base condition is true."

# NOTE:	double(data_type) on most of the devices gives only 6 significant number so, we don't use double fact(), while calculating the factorial of a number.

# Recursive fibonacci shows one pitfall in using it versus an iterative calculation:
	Fibonacci has an exponential number of calls that can lots of stack space and extra time.

#PROGRAM:	22. factorial.c
			23. fibonacci.c

# Array: Collection of similar data_types.
	data_types id[size_int_const];
	for e.g. int data[100];

	What compiler does for us?


# Array in C starts with 0 index.

# Arrays are useful because they store large amount of data, retrieve & process quickly.

# String are character arrays.
	char str[] = "a b c"; 		//This has 6 elements.
	'\0' -> Sentiel or Null character.

#PROGRAM:	24. simple_array.c

# Pointers in C language is a variable that stores/points the address of another variable.

# Syntax:
	int *ptr = &a; 

# If we print ptr => address(for e.g.5684864)

# If we dereference it and print i.e, *ptr => value.

#PROGRAM:	25. simple_pointer.c

# pointer to int and pointer to double are different and this difference can affect both how much memory is pointed at – for example an int may be in 4 bytes and a double may be in 8 bytes;  and interpretation -namely how the bits are interpreted.

# Passing parameters are call by value but can pass an address (a pointer). We cn use this mechanism to achieve "Call by reference".

# We use call by reference to change values in the calling environment.

# void swap(int i, int j) //call by value
	{
		int temp = i;
		i = j;
		j = temp;
	} //Won't work

# void swap(int *i, int *j) //call by reference
	{
		int temp = *i;
		*i = *j;
		*j = temp;
	} //Works!!

# Steps:
	1. Declare parameters as a pointers.
	2. Use derefernce pointer in body.
	3. Pass in address swap(&a, &b).

# Using a reference declaration in a function header to simulate call-by-reference, it means the referenced variable in the calling environment can be changed.

# When passing in an array into a function foobar() for processing – such as averaging a number of grades
	-You normally That you also pass in the size of the array
	-Unlike many programming languages an array name in C is just a pointer to a base address and there is no way to know its size.

#PROGRAM:	26. array_as_pointer.c


# "Perhaps the most obvious way to sort by exchanges is to compare two keys, interchanging R1 and R2, if 	the keys are out of order and then keep doing this. Repeating it until in effect you have the 			information sorted." 

# bubblesort is O(n*n)  and mergesort is O(n log(n)).

#PROGRAM:	27. bubble_sort.c
			28. merge_sort.c
			29. merge_sort_pow^2.c
