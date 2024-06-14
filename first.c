#include<stdio.h>
int add(int , int);
int main(){
    int x=10, y=20,k;
    k=add(x,y);
    printf("%d ",k); 
    return 0;
}
int add(int a, int b){
    int c;
    c=a+b;
    return c;
}