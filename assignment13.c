#include<stdio.h>
#include<stdlib.h>
// void get();
// int main(){
//     get();
// }

// //1) WAP which take  a month number as an input and display number of days in that month
// void get(){

//     int month;
//     printf("Enter month number: ");
//     scanf("%d",&month);

//     switch(month)
//     {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             printf("31 Days");
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             printf("30 Days");
//             break;
//         case 2:
//             printf("28 Days");
//             break;
//         default:
//             printf("Invalid month number");
//     }
//     printf("\n");


// }
// --------------------------------------------------------------------------------------------------------------------
// 2)WAP menu driven program with the following options 
    // 1.Addition
    // 2.substraction
    // 3.multiplication
    // 4.division
    // 5.Exit
// int main(){
//     int a,b,c,choice;
//     while(1){
//         printf(" 1.Addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.Exit\n Enter a choice: ");
//         scanf("%d",&choice);
        
//         switch(choice)
//         {
//             case 1:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("%d",a+b);
//                 break;
//             case 2:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("%d",a-b);
//                 break;
//             case 3:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("%d",a*b);
//                 break;
//             case 4:
//                 printf("Enter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("%d",a/b);
//                 break;
//             case 5:
//                 exit(0);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------
// 3) WAP  menu driven program with the following options:
        // 1.check whether  a given set of three numbers are lenght of an isoscales triangle or not.
        // 2.check whether  a given set of three numbers are lenght of side of a right angled triangle or not.
        // 3.check whether  a given set of three numbers are eqiulateral  triangle or not.
        // 4. Exit
// int main()
// {
//     int option,a,b,c;
//     while(1){
//         printf("\n1.check whether  a given set of three numbers are lenght of an isoscales triangle or not.");
//         printf("\n2.check whether  a given set of three numbers are lenght of side of a right angled triangle or not.");
//         printf("\n3.check whether  a given set of three numbers are eqiulateral  triangle or not.");
//         printf("\n4.Exit");
//         printf("\nEnter an option: ");
//         scanf("%d",&option);

//         switch(option)
//         {
//             case 1:
//                 printf("Enter three sides of triangle : ");
//                 scanf("%d%d%d",&a,&b,&c);
//                     if(a+b>c && b+c>a && a+c>b)
//                         if(a==b || b==c || a==c)
//                             printf("Isoscales triangle");
//                         else
//                             printf("Not Isoscales triangle");
//                     else
//                         printf("Not a valid triangle");
//                 break;
//             case 2:
//                 printf("Enter three sides of triangle : ");
//                 scanf("%d%d%d",&a,&b,&c);
//                     if(a+b>c && b+c>a && a+c>b)
//                         if((a*a == b*b + c*c) || (b*b == a*a + c*c) || c*c == a*a + b*b)
//                             printf("Right angeled  triangle");
//                         else
//                             printf("Not Right angeled  triangle");
//                     else
//                         printf("Not a valid triangle");
//                 break;
//             case 3:
//                 printf("Enter three sides of triangle : ");
//                 scanf("%d%d%d",&a,&b,&c);
//                     if(a+b>c && b+c>a && a+c>b)
//                         if(a==b && b==c && a==c)
//                             printf("Equilateral triangle");
//                         else
//                             printf("Not equilateral triangle");
//                     else
//                         printf("Not a valid triangle");
//                 break;
//             case 4:
//                 exit(0);

//         }

//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------
// 5)   convert the if else into switch case 
// if(var==1)
//     printf("Good");
// else if(var==2)
//     printf("better");
// else if(var==3)
//     printf("Best");
// else
//     printf("Invalid");


// ans---->>
// int main(){
//     int var;
//     printf("Enter a choice: ");
//     scanf("%d",&var);

//     switch(var)
//     {
//         case 1:
//             printf("Good");
//             break;
//         case 2:
//             printf("Better");
//             break;
//         case 3:
//             printf("Best");
//             break;
//         default:
//             printf("Invalid");
            
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------

// 6)Program to find and display grade obtained by a student in a test . Grading specification are as follows :
    // - Marks from 90 to 100 : Grade A
    // - Marks from 80 to less than 90 : Grade B
    // - Marks from 70 to less than 80 : Grade c
    // - Marks from 60 to less than 70 : Grade D
    // - Marks from 50 to less than 60 : Grade E
    // - Marks below 50 : Grade F
    // - Marks greater than 100 or less 0 : Invalid marks


// int main(){
//     int var;
//     printf("Enter a marks: ");
//     scanf("%d",&var);

//     switch(var)
//     {
//         case 90 ... 100:
//             printf("Grade A");
//             break;
//         case 80 ... 89:
//             printf("Grade B");
//             break;
//         case 70 ... 79:
//             printf("Grade C");
//             break;
//         case 60 ... 69:
//             printf("Grade D");
//             break;
//         case 50 ... 59:
//             printf("Grade E");
//             break;
//         case 0 ... 49:
//             printf("Grade F");
//             break;
//         default:
//             printf("Invalid Marks");
            
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------
// 7)7. Write a menu driven program with the following options:

    // 1. Factorial of a number

    // 2. Check Even and Odd

    // 3. Area of circle

    // 4. Sum of first N natural numbers

    // 5. Exit

// ans--->

// int main(){
//     int choice;
//     for(int i=1; ; i++){
//         printf("Enter your choice: ");
//         scanf("%d",&choice);

//         switch(choice)
//         {
//             case 1:
//                 int fact=1, n;
//                 printf("Enter a number : ");
//                 scanf("%d",&n);
//                 for(int i=1; i<=n; i++){
//                     fact *= i;
//                 }
//                 printf("Factorial of %d is %d ",n,fact);
//             break;

//             case 2:
//                 int a;
//                 printf("Enter a number : ");
//                 scanf("%d",&a);
//                 if(a%2)
//                     printf("Odd");
//                 else
//                     printf("Even");
//             break;

//             case 3:
//                 int r;
//                 printf("Enter a radius: ");
//                 scanf("%d",&r);
//                 float area;
//                 area = 3.142*r*r;
//                 printf("area of circle is %f",area);
//             break;

//             case 4:
//                 int sum=0, m;
//                 printf("Enter a number: ");
//                 scanf("%d",&m);
//                 for(int i=1; i<=m; i++){
//                     sum += i;
//                 }
//                 printf("Sum is %d",sum);
//             break;

//             case 5:
//                 exit(0);
//             default:
//                 printf("Invalid choice!!!");

//         }
//         printf("\n");
//     }
// }
// --------------------------------------------------------------------------------------------------------------------

// 8) Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other 
 // special character,  using switch case statement.

// int main(){
//         char var;
 
//         printf("Enter character: ");
//         scanf("%c",&var);

//         switch(var)
//         {
//             case 65 ... 90:
//                 printf("Uppercase");
//                 break;
//             case 97 ... 122:
//                 printf("Lowercase");
//                 break;
            
//             default:
//                 printf("Special character");
//         }
//         printf("\n");
//         return 0;


// }
// --------------------------------------------------------------------------------------------------------------------
// 9) Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

 int main(){
        char var;
 
        printf("Enter character: ");
        scanf("%c",&var);

        switch(var)
        {
           case 'A' ... 'z':
            if(var=='A' || var=='E' || var=='I' || var=='O' || var=='U' || var=='a' || var=='e' || var=='i' || var=='o' || var=='u')
                printf("Vowel");
            else
                printf("Consonet");
            break;
            default:
                printf("Special character");
        }
        printf("\n");
        return 0;


}

    