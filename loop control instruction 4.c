// 3 types of loop = 1.for 2.while 3.do while


// for loop syntax - for(initialization;condition;updation){}

#include <stdio.h>
int main(){
    for (int i=1;i<=5;i=i+1){ // dont forget brackets here  
         
  // u can use floar and char also  for(float =1.0....).      for(char ch="a";ch<="z"..)

    printf("hello world\n");
}


/* i=i+1
   i+=1
   i++.  can also use this as shortcut 
   */

//to print numbers
    for (int i=1;i<=10;i=i+1){ // if u wanna reverse it just number like int i=10 ;i>=1 ;i=i-1
    printf("%d\n",i);
}




/* pre increment(++i)     post increment(i++).  */
int i=1;
printf("%d\n",i++);  //use thn increase i.e ot is 1 but internally its 2 as its ++
printf("%d\n",i);    //ot is 2


printf("%d\n",++i); // u comment above two printf statemnts n thn execite thn 2 will come or else 3
printf("%d\n",i);







// pre decrement(--i)  post(i--)
// same as above but change sign ot=1,0. 0,0



// for(1=0; ;i++);   if u do like this this is called infinite loop where it prints whtver is said in printf statemtns continously .u shouldnt do this is it creates problems







    return 0;
}