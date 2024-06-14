#include<stdio.h>
int main()
{
    /* WAP which ask user to enter an even number .computer will give user at most three chnances , if user failed to answer in any of the chances , "Game over" message should displayed on the screen otherwise "you win" message should be displayed and game stops immediately */
    // int x,i;
    // for(i=1; i<=3; i++){
    //     printf("Enter a number");
    //     scanf("%d",&x);
    //     if(x%2==0)
    //         break;
        
    // }
    // if(i==4)
    //     printf("Game over");
    // else
    //     printf("User won");


    // WAP to add number entered by user . user can enter any number at number until he enters 0

    // int x, s=0;
    // printf("Enter a number(should be terminated at last 0)");

    // while(1){
    //     scanf("%d",&x);
    //     if(x==0)
    //         break;

    //     s=s+x;//This is not a else 
    // }
    // printf("The sum is %d",s);

    // half pyramid pattern

    int n,i,j;
    printf("Enter a number");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}