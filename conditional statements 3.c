//2types = 1.if esle ,2.switch


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
    
    




    //2.switch
    int day;    // instea of int u can use char also thn m-mon, t=tue ...can give and cases also m,t,w ...
    printf("enter day(1-4):");  //1-mon,2-tue....
    scanf("%d",&day);
    switch(day){
        case 1 :printf("monday\n");
                break;
        case 2 :printf("tuesday\n");
                break;
        case 3 :printf("wednesday\n");
                break;
        case 4 :printf("thursday\n");   //if u dint pur break after evry case prints evrtg .eg if u say 2 from tuesday evrtg prints
                break;
        default : printf("not valid\n");
    }
    




    //nested if else eg
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number>=0){
        printf("positive\n");
        if (number%2==0){
            printf("even\n");
        } else{
            printf("odd\n");
        }
    }else{
        printf("negative\n");  //can add nested if here also
    }

    //eg ques- marks based grades ,error finding,upper case lower case finding done
    
    
    
    
    return 0;
}