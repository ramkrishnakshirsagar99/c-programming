#include<stdio.h>
int main()
{
//     Assignment-9: Use any loop

// 1. Write a program to calculate sum of first N natural numbers

    // int i, sum=0, n;
    // printf("Enter a number ");
    // scanf("%d",&n);
    // for(int i=1; i<=n; i++){
    //     sum = sum + i;
    // }
    // printf("The sum is %d",sum);

// 2. Write a program to calculate sum of first N even natural numbers
    // int i, sum=0, n;
    // printf("Enter a number ");
    // scanf("%d",&n);
    // for(int i=2; i<=n*2; i+=2){
    //     sum = sum + i;
    // }
    // printf("The sum of even number is %d",sum);

// OR 
    // int i, sum=0, n;
    //     printf("Enter a number ");
    //     scanf("%d",&n);
    //     for(int i=0; i<=n; i++){
    //         sum = sum + i*2;
    //     }
    //     printf("The sum of even number is %d",sum);

// 3. Write a program to calculate sum of first N odd natural numbers

    // int i, sum=0, n;
    // printf("Enter a number ");
    // scanf("%d",&n);

    // for(int i=1; i<=n; i++){
    //     sum = sum + (2*i)-1;

    // }
    // printf("The sum of %d Number is %d",n,sum);

    // OR 

    // int i, sum=0, n;
    // printf("Enter a number ");
    // scanf("%d",&n);

    // for(int i=1; i<=2*n; i+=2){
    //     sum = sum +i;
    // }
    // printf("The sum of %d odd Number is %d",n,sum);
    
// 4. Write a program to calculate sum of squares of first N natural numbers

        // int i, sum=0, n;
        // printf("Enter a number ");
        // scanf("%d",&n);

        // for(int i=1; i<=n; i++){
        //     sum = sum + i*i;
        // }
        // printf("The sum of square of %d natural number is %d",n,sum);

// 5. Write a program to calculate sum of cubes of first N natural numbers

        // int i, sum=0, n;
        // printf("Enter a number ");
        // scanf("%d",&n);

        // for(int i=1; i<=n; i++){
        //     sum = sum + i*i*i;
        // }
        // printf("The sum of cube of %d natural number is %d",n,sum);
        

// 6. Write a program to calculate factorial of a number
        // int i, fact=1, n;
        // printf("Enter a number ");
        // scanf("%d",&n);

        // for(int i=1; i<=n; i++){
        //     fact = fact * i;
        // }
        // printf("The factorial of %d is %d",n,fact);

        // OR 

        // int  fact=1, n;
        // printf("Enter a number ");
        // scanf("%d",&n);

        // while(n){
        //     fact = fact * n;
        //     n--;
        // }
        // printf("The factorial of %d is %d",n,fact);

        // Or 
        int  fact=1, n;
        printf("Enter a number ");
        scanf("%d",&n);

        for(int i=1; n; n--,i++){
            fact=fact*i;
        }
           printf("%d",fact); 

        
        
// 7. Write a program to count digits in a given number.
        // int i, count=0, x;
        // printf("Enter a number ");
        // scanf("%d",&x);
        

        // for(count=0; x; x/=10){
        //     count++;
        // }
        //     printf("Digits = %d",count);


        // int i, count=0, x;
        // printf("Enter a number ");
        // scanf("%d",&x);

        // while(x){
        //     x = x/10;
        //     count++;
            
        // }
        // printf("digits = %d",count);


// 8. Write a program to check whether a given number is a Prime number or not
// int N,flag=1,i;
//     printf("Enter a number");
//     scanf("%d",&N);
//     for(int i=2; i<=N/2; i++){
//         if(N%i==0){
//             flag=0;
//             break;
//         }
//     }
//     if(flag){
//         printf("Prime number");
//     }
//     else{
//         printf("Not prime number");
//     }

// 9. Write a program to calculate LCM of two numbers
// int a,b,max;
//     printf("enter first number :");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     max = (a>b) ? a:b;
//     while(1){
//         if(max%a==0 && max%b==0){
//             break;
//         }
//         max+=1;
//     }
//     printf("%d",max);

// 10. Write a program to reverse a given number
int num,digit,i;
printf("Enter a number: ");
scanf("%d",&num);
for(int i=1; ;i++){
    digit = num%10;
    printf("%d",digit);
    num/=10;
    if(num==0){
        break;
    }
}

return 0;
}