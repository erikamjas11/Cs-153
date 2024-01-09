#include <stdio.h>
int tau(int n){
   int count=0,i;
    for(i=1;i<=n;i++)
        {
         if(n%i==0)
            count++;
        }
    return count;
}

int gcd(int x,int y)
    {
        if(y==0)
            return x;
        else
            return gcd(y,x%y);
    }

int phi(int n)
    {
        int i,count=0;
        for(i=1;i<=n;i++)
            {
               // printf("gcd(%d,%d) %d\n",n,i,gcd(n,i));
                if(gcd(n,i)==1)
                    count++;
            }
        return count;
    }

int sigma(int n){
   int sum=0,i;
    for(i=1;i<=n;i++)
        {
         if(n%i==0)
            sum=sum+i;
        }
    return sum;
}

void prime(int n)
    {
        int count=0,i;
        if(n==1)
            printf("\n%d is neither prime nor composite\n",n);
         else if(tau(n)==2) //prime has only two divisors
            printf("\n%d is prime\n",n);
        else
            printf("\n%d is composite\n",n);
    }


int main() {
    // Write C++ code here

    int n,x,y;
    printf("Enter n:");
    scanf("%d",&n);
    printf("tau:%d; ",tau(n));
    printf("phi:%d; ",phi(n));
    printf("sigma:%d; ",sigma(n));
    prime(n);
    printf("Enter x and y value to calculate gcd:");
    scanf("%d%d",&x,&y);
    printf("gcd of %d and %d is:%d\n",x,y,gcd(x,y));
    return 0;
}
