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
	wrt_address(); //in main()

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

#PROGRAM:


# Recursion - "Function calls itself until the base condition is true."

# NOTE:	double(data_type) on most of the devices gives only 6 significant number so, we don't use double fact(), while calculating the factorial of a number.

# Recursive fibonacci shows one pitfall in using it versus an iterative calculation:
	Fibonacci has an exponential number of calls that can lots of stack space and extra time.
