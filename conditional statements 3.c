//2types = if esle ,switch


#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){   //without curly braces also u can run program ,only if u one statement below it or else u would need braces    
        printf("You are eligible to vote.\n");
    }
    else if (age>=13 && age<18){
        printf("ur a teenager\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }
    printf("thank you\n");





    //ternary operator
    age>=60 ? printf("adult\n") :printf("not applicable\n");
    //this is the syntax or procedure to write this.this way only u should write so tht instead or if else u can use this 
    
    
    
    
    
    
    
    
    
    return 0;
}