#include<stdio.h>
int main()
{
//     Assignment-10: Level up with loops

// 1. Write a program to find the Nth term of the Fibonacci series.
    int a=-1, b=1, c, i,n;
    printf("Enter nth number ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);

// 2. Write a program to print first N terms of Fibonacci series

    // int n,i,c, a=-1, b=1;
    // printf("Enter nth number ");
    // scanf("%d",&n);

    // for(i=0; i<=n; i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     printf(" %d ",c);
    // }
    

// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

    // int x,i,c, a=-1, b=1;
    // printf("enter a number ");
    // scanf("%d",&x);
    

    // for(i=0;  ; i++){
    //     c=a+b;
    //     if(x==c){
    //         printf("%d is present at %d term in the series",x,i);
    //         break;
    //     }
    //     if(c>x){
    //         printf("%d is not present in in the series",x);
    //         break;
    //     }
    //     a=b;
    //     b=c;

    //     }
        

// 4. Write a program to calculate HCF of two numbers

//     int a, b, h;
//     printf("Enter two number ");
//     scanf("%d%d",&a,&b);

//    for( h = a<b?a:b; h>=1; h--){
//         if(a%h==0 && b%h==0){
//             break;
//         }
//    }
//         printf("The HCF is %d",h);
// 5. Write a program to check whether two given numbers are co-prime numbers or not

    // int a, b, h;
    // printf("Enter two number ");
    // scanf("%d%d",&a,&b);

    // for( h = a<b?a:b; h>=1; h--){
    //     if(a%h==0 && b%h==0){
    //         break;
    //     }
        
    // }
    // if(h==1){
    //     printf("co-prime");
    // }
    // else{
    //     printf("not a co-prime");
    // }
        

// 6. Write a program to print all Prime numbers under 100

    // int l,u,x,i;
    // l=2;
    // u=100;

    // for(x=l; x<=u; x++){
    //     for(i=2; i<x; i++){
    //         if(x%i==0)
    //         {
    //           break;  
    //         }
    //     }
    //     if(i==x){

    //         printf("%d ",x);
    //     }
    // }

// 7. Write a program to print all Prime numbers between two given numbers
    // int a , b,x,i;
    // printf("Enter two number ");
    // scanf("%d%d",&a,&b);

    // for(x=a; x<=b; x++){
    //     for(i=2; i<x; i++){
    //         if(x%i==0){
    //             break;
    //         }
    //     }
    //     if(x==i){
    //         printf("%d ",x);
    //     }
    // }

    
    

// 8. Write a program to find next Prime number of a given number

    // int i,x,n;
    // printf("Enter a number ");
    // scanf("%d", &n);

    // for(x=n+1;  ; x++){
    //     for(i=2; i<x; i++){
    //         if(x%i==0){
    //             break;
    //         }
    //     }
    //     if(x==i){
    //         printf("The next prime number is %d",x);
    //         break;
    //     }
    // }

// 9. Write a program to check whether a given number is an Armstrong number or not

    // int y,x,sum=0,d,i,p,n=0;
    // printf("Enter a number ");
    // scanf("%d",&x);

    // y=x;
    // while(y)
    // {
    //     y=y/10;
    //     n++;
    // }
    // for(y=x;y;y/=10){
    //     d=y%10;
    //     for(p=1,i=1; i<=n; i++){
    //         p=p*d;
    //     }
    //     sum=sum+p;
    // }
    // if(x==sum){
    //     printf("%d is the Armstrong number ",x);
    // }
    // else{
    //     printf("%d is not an Armstrong number ",x);
    // }


// 10. Write a program to print all Armstrong numbers under 1000 

//     int y,x,sum=0,d,i,p,n=0;
//     for(x=1; x<=1000; x++){

    

//         y=x;
//         n=0;
//         while(y)
//         {
//             y=y/10;
//             n++;
//         }
//         for(y=x,sum=0;y;y/=10){
//             d=y%10;
//             for(p=1,i=1; i<=n; i++){
//                 p=p*d;
//             }
//             sum=sum+p;
//         }
//         if(x==sum){
//             printf("%d ",x);
//         }
    
// }

// 11.Menu driven program
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int a,b,c,choose;
//     while(1){
//         printf("Choose the operation:\n");
//         printf("1.Addition\n");
//         printf("2.Substraction\n");
//         printf("3.Multiplication\n");
//         printf("4.Division\n");     
//         printf("5.Exit\n");     
//         printf("choose the operation: ");
//         scanf("%d",&choose);
        
//         switch(choose){
//             case 1:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Addition is: %d\n",a+b);
//                 break;
//             case 2:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Substraction is: %d\n",a-b);
//                 break;
//             case 3:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Multi is: %d\n",a*b);
//                 break;
//             case 4:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Division is: %d\n",a/b);
//                 break;
//             case 5:
//                 printf("Program over!!!!");
//                 exit(0);
//         }
//     }
//     return 0;
// }
// ----------------------------------------------------------------Goto statement--------------------
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     if(1){
//         printf("Hello");
//         goto l1;
//     }
//     else{
//         l1:printf(" World");
        
//     }
//     return 0;
// }





// 13. without loop print table
int i=1, x=5;
l1:printf("%d X %d = %d",x,i,i*x);
i++;
if(i<=10){
    goto l1;
}


return 0;
}