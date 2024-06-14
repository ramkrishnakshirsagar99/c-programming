#include<stdio.h>
int main()
{
    // 1) Write a program to calculate sizeof a character constant
    
    // printf("size is %d",sizeof('A'));



    // 2) WAP to calculate the size of real constant
    // printf("the size is %d",sizeof(2.4));


    // 3) WAP with one char type variable . Assign 'A' in the variable . Now change  of the variable from 'A' 
        // to 'B' using increment operator

        // char ch='A';
        // ch++;
        // printf("%c",ch);
        // return 0;

        // 4) WAP to print unit digit of a given number 

        // int a = 223;
        // printf("The unit digit is %d",a%10);


        // 5) WAP to print a given number without its last digit

        // int a = 223;
        // printf("the number without last digit is %d",a/10);

        // 6) WAP to swap values of two int variable

        // int a = 10;
        // int b = 20;
        // int c;

        // c = a;
        // a = b;
        // b = c;
        // printf("a=%d b=%d",a,b);


        // 7) WAP to swap values of two int variables without using third variable  

        
            // int a = 10;
            // int b = 20;

            // a = a+b; //a=30
            // b = a-b; //b=10
            // a = a-b; //a=20
            // printf("a=%d b=%d",a,b);

        // 8) WAP to swap values of two int variables without using third variable and without using '+', '-' operator    

            int a = 10;
            int b = 20;
            a = a*b;
            b = a/b;
            a = a/b;
            printf("a=%d b=%d",a,b);
// 

}