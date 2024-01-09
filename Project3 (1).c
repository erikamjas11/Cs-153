/* CS 153 PROGRAM ASSIGNMENT #3
Sums
Erik Marrero
9/15/2020
*/
#include <stdio.h>
int sumNloop(int N){
    int sum = 0,i;
    for(i=1;i<=N;i++)
    sum+=i;
    return sum;
    }

int sumNformula(int N){
    return (N*(N+1))/2;
    }

int sumSquaresloop(int N){
    int sum = 0,i;
    for(i=1;i<=N;i++)
    sum+=(i*i);
    return sum;
    }

int sumSquaresformula(int N){
    return (N*(N+1)*((2*N)+1))/6;
}

int sumCubesloop(int N){
    int sum = 0,i;
    for(i=1;i<=N;i++)
    sum+=(i*i*i);
    return sum;
    }

int sumCubesformula(int N){
    return ((N*(N+1))/2)*((N*(N+1))/2);
}

int main(void) {
    int N;
    printf("Enter N ---> ");
    scanf("%d",&N);
    printf("\nsum 1 to N");
    printf("\nloop: %d; formula: %d",sumNloop(N),sumNformula(N));
    printf("\nsum 1 to N**2");
    printf("\nloop: %d; formula: %d",sumSquaresloop(N),sumSquaresformula(N));
    printf("\nsum 1 to N**3");
    printf("\nloop: %d; formula: %d",sumCubesloop(N),sumCubesformula(N));
    return 0;
}
