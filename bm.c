#include<stdio.h>
#include<math.h>

#define f(x) 3*x+sin(x)-exp(x);

int main(){
    float a,b,c;
    int count=1;
    up:
    printf("Enter the 2 roots of a function\n");
    scanf("%f%f",&a,&b);
    float f1=f(a);
    float f2=f(b);
    float err,f3;
    scanf("%f",&err);
    printf("%f\t%f",f1,f2);
    
    if(f1*f2 > 0.0){
        printf("Invalid condition\n");
        goto up;
    }
    printf("\nSteps\t\ta\t\tb\t\tc\t\tf(x)\n\n");
    do{
        c=(a+b)/2;
        f3=f(c);
        printf("%d\t%f\t%f\t%f\t%f\n",count,a,b,c,f3);
        if(f1*f3 < 0)     b=c;
        else    a=c;
        count+=1;
    }while (fabs(f3) > err);
    printf("root->%f",c);
    return 0;
    
}
