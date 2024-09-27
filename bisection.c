#include <stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) (x*x*x-4*x-2)

void main(){
    float x0,x1,x2;
    float f0,f1,f2;
    printf("enter x0");
    scanf("%f",&x0);
    printf("enter x1");
    scanf("%f",&x1);
int i = 0;
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if (f0*f2<0)
        {
            x1 = x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("no. of iterations %d \n",i);
        printf("root = %f \n",x2);
        printf("value at root = %f \n",f2);
        

    } while (fabs(f2)>e);
  


}