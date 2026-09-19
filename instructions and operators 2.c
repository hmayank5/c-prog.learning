#include <stdio.h>
int main() {
    int a=(int)1.999999;
   // so the prog will print 1 because we are type casting the float value to int which will remove the decimal part and only keep the integer part.it does round off.
printf("%d\n", a);





printf("%d\n", !(3>4 && 4>3)); // so the prog will print true because 3 is not greater than 4 and 4 is greater than 3.so the condition is false and ! operator will make it true.






int b=5;
int c=10;
b += c;
printf("%d\n", b); // so the prog will print 15 because we are adding the value of c to b and storing the result in b.






// to check divisiblity by 2 or to check evn or odd
int x;
printf("Enter a number: ");
scanf("%d", &x);
printf("%d\n", x % 2 == 0);

char stars = '**';
// so it gives error cux only one character can be stored in "",u cant keep two **



// to check if it is sunday and snowing
int issunday = 1;
int issnowing = 1;
printf("which day:%d\n", issunday && issnowing); // so the prog will print 1 because both the conditions are true and && operator will return true if both the conditions are true.




// to check if it is monday or raining
int ismonday = 0;
int israining = 1;
printf("whether it is monday or raining:%d\n", ismonday || israining); // so the prog will print 1 because one of the conditions is true and || operator will return true if any one


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
2. eg = ==(equal to),!=(not equal to),<,>,<=,>=
3. eg = &&(and),||(or),!(not)
4. eg = =,+=,-=,*=,/=,%=
5. eg = &,|,^,~,<<,>>
6. eg = ?:
*/