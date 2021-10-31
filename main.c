#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y, f, delta;
    unsigned int N;
    int a, b;

    printf("Enter a variant:");
    scanf("%d", &a);

    if (a==1)
    {
        //F(x)=x*3
         printf("Enter first value:\n");
         scanf("%lf", &x);
         printf("Enter second value:\n");
         scanf("%lf", &y);
         printf("Point:\n");
         scanf("%d", &N);
         int k=1;
          printf("**********************************\n");
          printf("\t| N | X | F(X) |\n");
          printf("**********************************\n");
         for(; k<=N; k++)
         {
             f=x*3;
             printf("\t| %d| %.2lf| %.2lf|\n",k,x,f);
             printf("**********************************\n");
             x++;



         }

    }

    if (a==2)
    {
         printf(":Enter first value\n");
         scanf("%lf", &x);
         printf("Enter second value:\n");
         scanf("%lf", &y);
         printf("Step:\n");
         scanf("%lf", &delta);

         int k=1;
          printf("**********************************\n");
          printf("| N | X | F(X) |\n");
          printf("**********************************\n");
         for(; k<=y; k++)
         {
             N=(y-x)/delta;
             f=x*3;
             printf("| %d| %.2lf| %.2lf|\n",k,x,f);
             printf("**********************************\n");
             x=x*delta;


         }

    }
    return 0;
}
