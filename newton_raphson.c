#include<stdio.h>
#include<math.h>

#define f(x) (pow(x,3)-4*x-2)
#define df(x) (3*x*x-4)
#define e 0.001

int main(){
    float x0,x1,f0,f1,df0;
    printf("enter value of x0");
    scanf("%f",&x0);
    int i =0;
    do
    {
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0-(f0/df0);
        f1 = f(x1);
        x0=x1;
        i++;
        printf("no. of iterations is %d\n",i);
        printf("root = %f\n",x1);
        printf("value at root is %f\n",f1);
    } while(fabs(f1)>e);
    return 0;
    
}