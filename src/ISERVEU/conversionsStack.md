## INFIX To POSTFIX
**((A-(B/C))*((A/K)-L))** ---> **Postfix: ABC/-AK/L-** 

*First check the string is operator or not by function isOperator then define the function for precedence of operators*
*Define function for conversion of infix to postfix*
1. Take a stack to contain operator and a string postfix to contain the result.
2. If the character is an operand (alphanumeric), it is directly appended to the postfix string.
3. Opening parentheses ( are pushed onto the stack.
When encountering a closing parenthesis ), pop operators from the stack until an opening parenthesis is found.
4. Operators are pushed onto the stack, but before doing so, pop and append all operators from the stack that have higher or equal precedence.
5. At the end of the expression, pop all remaining operators from the stack and append them to the postfix string.



## POSTFIX To INFIX
### POSTFIX: ABC/-AK/L-*  -----> "INFIX: ABC/-AK/L-* 

*First check the string is operator or not by function isOperator then define the function for precedence of operators*

1. Take a stack to store ans
2. Iterate through each character in the postfix expression
3. If the character is an operand