#include<stdio.h>
int main()
{
//     Assignment-6: More on Decision Control Statements

// 1. Write a program to check whether a given number is a three digit number or not.


// 2. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

    // int sp, cp;
    // float profit, loss;
    // printf("Enter cost price and seeling price ");
    // scanf("%d %d",&cp,&sp);
    // if(sp - cp>=0){
    //         printf("%0.2f", profit=(sp-cp)/cp*100);
    // }
    // else{
    //     printf("%f",loss=(cp-sp)/cp*100);
    // }

// 3. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
    // int m1,m2,m3,m4,m5;
    // printf("Enter marrks ");
    // scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    // if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33  ){
    //     printf("result : PASS");
    // }
    // else{
    //     printf("result: FAIL");
    // }

// 4. Write a program to check whether a given alphabet is in uppercase or lowercase.

    // char ch;
    // printf("Enter an alphabet");
    // scanf("%c",&ch);

    // if(ch>='a' && ch<='z'){
    //     printf("Lowercase");
    // }
    // else if(ch>='A' && ch<='Z'){
    //     printf("Uppercase");
    // }
    // else{
    //     printf("Not an alphabet");
    // }

// 5. Write a program to check whether a given number is divisible by 3 and divisible by 2.

    // int a;
    // printf("Enter a number");
    // scanf("%d",&a);

    // if(a%2==0 && a%3==0)
    //     printf("Divisible by 2 and 3");
    // else
    //     printf("Not divisible by 2 and 3"); 

    // OR 

    // int a;
    // printf("Enter a number");
    // scanf("%d",&a);
    // if(a%3)
    //     if(a%2)
    //         printf("Not divisible by 2 and 3");
    //     else
    //         printf("Divisible by 2 but not 3");
    // else
    //     if(a%2)
    //         printf("Divisible by 3 but not 2");
    //     else
    //         printf("Divisible by both 2 and 3"); 
       

// 6. Write a program to check whether a given number is divisible by 7 or divisible by 3.


// 7. Write a program to check whether a given number is positive, negative or zero.

    // int a;
    // printf("Enter a number");
    // scanf("%d",&a);
    
    // if(a>0)
    //     printf("Positive");
    // else if(a<0)
    //     printf("Negative");
    // else
    //     printf("Zero");

// 8. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character. I
    // char ch;
    // printf("Enter a character");
    // scanf("%c",&ch);

    // if(ch>='a' && ch<='z')
    //     printf("Lowercase");
    // else if(ch>='A' && ch<='Z')
    //     printf("Uppercase");
    // else if(ch>='0' && ch<='9')
    //     printf("Digits");
    // else
    //     printf("Special character");
        


// 9. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

    // int a,b,c;
    // printf("Enter a number");
    // scanf("%d%d%d",&a,&b,&c);

    // if(a+b>c && a+c>b && b+c>a)
    //     printf("Valid triangle");
    // else
    //     printf("Invalid triangle");

// 10. Write a program which takes the month number as an input and display number of days in that month.

    int m;
    printf("Enter a month number");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("31 Days");
    else if(m==4 || m==6 || m==9 || m==11 )
        printf("30 Days");
    else
        printf("28 or 29 Days");
return 0;
}