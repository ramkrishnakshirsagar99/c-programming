
#include<stdio.h>
int main()
{

// 1. Write a program to check whether a given number is positive or non positive.
    // int a;
    // printf("Enter a number ");
    // scanf("%d",&a);
    // if(a>0)
    //     printf("Positive");
    // else
    //     printf("Non-Positive");    

// 2. Write a program to check whether a given number is divisible by 5 or not

    //  int a;
    //  printf("Enter a number ");
    //  scanf("%d",&a);

    //  if(a%5)
    //     printf("Not divisible by 5");
    //  else
    //     printf("Divisible by 5");   

// 3. Write a program to check whether a given number is an even number or an odd number.

    // int a;
    //  printf("Enter a number ");
    //  scanf("%d",&a);

    //  if(a%2){
    //     printf("Odd number");
    //  }
    //  else{
    //     printf("Even number");
    //  }

// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.

    // int a;
    // printf("Enter a number");
    // scanf("%d",&a);

    // if(a/2*2==a)
    //     printf("Even");
    // else
    //     printf("Odd");

// 5. Write a program to check whether the given number is even or odd using a bitwise operator. 

    int a;
    printf("Enter a number");
    scanf("%d",&a);          //decimal  binary                              decimal  binary
    if((a&1)==0){           //2       |  10                                |3           11
                            //1       |  01                                |1           01
        printf("Even");     //ans 00 i.e this 2 is an even number          |ans 01 i.e this 3 is an odd number
    }
    else{
        printf("odd");
    }

// 6. Write a program to check whether a given number is a three digit number or not.

    // int a;
    // printf("Enter a number");
    // scanf("%d",&a);

    // if(a>=100 && a<=999){
    //     printf("Three digit number");
    // }
    // else{
    //     printf("Not a three digt number");
    // }


// 7. Write a program to print greater between two numbers. Print one number if both are the same.
    // int a;
    // int b;
    // printf("Enter a number");
    // scanf("%d %d",&a,&b);   
    

    // if(a>b){
    //     printf("%d",a);
    // }
    // else{
    //     printf("%d",b);
    // }

// 8. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

    // int a,b,c,result;
    // printf("Enter three number");
    // scanf("%d %d %d",&a,&b,&c);

    // result = (b*b)-4*a*c;

    // if(result > 0){
    //     printf("Real and Distinct");
    // }
    // else if(result == 0){
    //     printf("Real and Same");
    // }
    // else{
    //     printf("Imaginary");
    // }

// 9. Write a program to check whether a given year is a leap year or not.

    // int year;
    // printf("Enter a year");
    // scanf("%d",&year);

    // if(year%100){
    //     if(year%4){
    //         printf("Not a leap year");
    //     }
    //     else{
    //         printf("Leap year");
    //     }
    // }
    // else{
    //     if(year%400){
    //         printf("Not a leap year");
    //     }
    //     else{
    //         printf("leap year");
    //     }
    // }


// 10. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

    // int a, b, c;
    // printf("Enter three number");
    // scanf("%d %d %d",&a,&b,&c);
    // if(a>b){
    //     if(a>c){
    //         printf("%d",a);
    //     }
    //     else{
    //         printf("%d",c);
    //     }
    // }
    // else{
    //     if(b>c){
    //         printf("%d",b);
    //     }
    //     else{
    //         printf("%d",c);
    //     }
            
    // }


return 0;
}