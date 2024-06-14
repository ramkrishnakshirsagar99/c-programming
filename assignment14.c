
// 1. Write a function to calculate the area of a circle. (TSRS) 

// 2. Write a function to calculate simple interest. (TSRS)

// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

// 4. Write a function to print first N natural numbers (TSRN)

// 5. Write a function to print first N odd natural numbers. (TSRN) 

// 6. Write a function to calculate the factorial of a number. (TSRS)

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS) 

// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)



#include<stdio.h>
// float area(int);
// int main(){

// // 1. Write a function to calculate the area of a circle. (TSRS)

//     float x;
//     x= area(5);
//     printf("area is :%f",x);
//     return 0;

// }
// float area(int r){
//     float result;
//     result = 3.142*r*r;
//     return result;
// }

// ---------------------------------------------------------------------------------------------------------------------------
// float interest(int , int, int);
// int main(){
//     // 2. Write a function to calculate simple interest. (TSRS)

//     int p,r,t;
//     float x;
//     printf("Enter Principle , Rate , Time :");
//     scanf("%d%d%d",&p,&r,&t);
//     x = interest(p,r,t);
//     printf("The interest is: %f",x);
//     return 0;



// }
// float interest(int p, int r, int t){
//     int result;
//     result = (p*r*t)/100.0;
//     return result;
// }


// ---------------------------------------------------------------------------------------------------------------------------
// int evenOdd(int);
// int main(){
//     // 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
//     int a,x;
//     printf("enter a number: ");
//     scanf("%d",&a);
//     x= evenOdd(a);
//     printf("%d",x);
//     return 0;
// }
// int evenOdd(int a){

//     if(a%2)
//         return 0;
//     else
//         return 1;
// }


// ---------------------------------------------------------------------------------------------------------------------------
// void natural(int);
// int main(){
//     // 4. Write a function to print first N natural numbers (TSRN)

//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }

// void natural(int n){
//     for(int i=1; i<=n; i++){
//         printf("%d ",i);
//     }
// }

// ---------------------------------------------------------------------------------------------------------------------------
// void odd(int);
// int main(){
//     // 5. Write a function to print first N odd natural numbers. (TSRN) 

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     odd(n);
//     return 0;
// }
// void odd(int n){
//     for(int i=1; i<=2*n; i++){
//         if(i%2){
//             printf("%d ",i);
//         }
//     }
// }

// ---------------------------------------------------------------------------------------------------------------------------
// int factorial(int);
// int main(){
//     // 6. Write a function to calculate the factorial of a number. (TSRS)

//     int n,f;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     f = factorial(n);
//     printf("factorial is %d",f);
//     return 0;

// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// ---------------------------------------------------------------------------------------------------------------------------
// int factorial(int n);
// int combi(int n, int r);
// int permu(int n, int r);
// int main(){
//     // 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
//     int n;
//     printf("Enter number of items: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter number of relationships");
//     scanf("%d",&r);
//     printf("%d is the combination\n",combi(n,r));
//     printf("%d is the permutation\n",permu(n,r));
//     return 0;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }
// int combi(int n, int r){
    
//     return factorial(n)/factorial(n-r);
// }
// // 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS) 
// int permu(int n, int r){
    
//     return factorial(n)/factorial(n-r)*factorial(r);
// }


// ---------------------------------------------------------------------------------------------------------------------------
// int main(){
// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
//     int is_number_contain_digit(int n, int a);
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if(is_number_contain_digit(n,2)){
//         printf("2 is present in %d",n);
//     }
//     else{
//         printf("2 is not present in %d",n);
//     }
//     return 0;
    
// }
// int is_number_contain_digit(int n, int a){
//     int digit;
//     while(n){
//         digit = n%10;
//         n/=10;
//         if(digit==a){
//             return 1;
//         }

//     }
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------
void prime_factor(int);
int main(){
    // 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime_factor(n);
}
void prime_factor(int n){
    int i=2;
    while(n>1){    
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
        i++;
    }
}