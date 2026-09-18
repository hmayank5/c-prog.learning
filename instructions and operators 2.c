#include <stdio.h>
int main() {
    int a=(int)1.999999;
   // so the prog will print 1 because we are type casting the float value to int which will remove the decimal part and only keep the integer part.it does round off.
printf("%d\n", a);
    return 0;
}



// instructions are the statemennts in a program
// types -    1.type declaration,  2.arithemetic,    3.control=1.sequention,2.decision,3.loop,4.case
// 1. eg =int a ,int a,b,c etc
// 2. eg = a+b,c-d etc
// 3. eg = if,else,while,for etc



/*
operators are symbols that perform operations on values and variables.
types - 1.arithmetic, 2.relational, 3.logical, 4.assignment, 5.bitwise,6.ternary
1. eg = +,-,*,/,%,++,--
2. eg = ==,!=,<,>,<=,>=
3. eg = &&,||,!
4. eg = =,+=,-=,*=,/=,%=
5. eg = &,|,^,~,<<,>>
6. eg = ?:
*/