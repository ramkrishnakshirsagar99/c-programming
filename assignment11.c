#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
void f10();
int main(){


    f10();
    return 0;
}

// 1)
// *     
// * *
// * * *
// * * * *
// * * * * *
void f1(){
    int i,j;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j<=i){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

// -------------------------------------------------------------------------------------------------------------------------------
// 2)
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
void f2(){
    int i,j;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j<=6-i){
                printf(" *");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

// -------------------------------------------------------------------------------------------------------------------------------
// 3)
// *****
//  ****
//   ***
//    **
//     *

void f3(){
    int i,j;
    for(int i=1; i<=1; i++){
        for(int j=1; j<=5; j++){
                if(j>=i){
                    printf("*");
                }
                else{
                    printf("-");
                }
        }
        printf("\n");
    }
}

// -------------------------------------------------------------------------------------------------------------------------
// 4)
//     *
//    **
//   ***
//  ****
// *****
void f4(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j>=6-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

// ===============================================================================================
// 5)
// 1
// 12
// 123
// 1234
// 12345

void f5(){
    int i,j;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j<=i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}   
// ----------------------------------------------------------------------------------------------
// 6)
// 1   
// 21
// 321
// 4321

void f6(){
        int i,j,k;
        for(int i=1; i<=4; i++){
            k=i;
            for(int j=1; j<=4; j++){
                if(j<=i){
                    printf("%d",k);
                    k--;
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    // --------------------------------------------------------------------------------
    // 7)
    // ABCDE
    //  ABCD
    //   ABC
    //    AB
    //     A

void f7(){
            int i,j,k;
            for(int i=1; i<=5; i++){
                char k='A';
                for(int j=1; j<=5; j++){
                    if(j>=i){
                        printf("%c",k);
                        k++;
                    }
                    else{
                        printf(" ");
                        
                    }
                }
                printf("\n");
            }
        }

        // ------------------------------------------------------------------------------------------------------------
// 8)
// 1    
// 2 3
// 4 5 6
// 7 8 9 10  
    void f8(){
        int i,j,k=1;
        for(int i=1; i<=4; i++){
            
            for(int j=1; j<=4; j++){
                if(j<=i){
                    printf("%d ",k);
                    k++;
                }
                else{
                    printf(" ");
                    
                }
            }
            printf("\n");
        }
    }
    // ------------------------------------------------------------------------------------------------
// 9)
// ABCDE
//  BCDE
//   CDE
//    DE
//     E

void f9(){
            int i,j;
            for(int i=1; i<=5; i++){
                char k=64;
                for(int j=1; j<=5; j++){
                    if(j>=i){
                        printf("%c",k+j);
                        
                    }
                    else{
                        printf(" ");
                        
                    }
                }
                printf("\n");
            }
        }

// ------------------------------------------------------------------------------------------------------------
// 10)
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

void f10(){
    int i,j;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==1 || i==5 || j==1 || j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
