#include <stdio.h>

int main()
{
    double pv, tp, disc;
    int a;

    printf ("Enter your Purchase Value: ");
    scanf ("%lf", &pv);

    a=pv/1000;
    if(a<1)
    {
        a = 0;
    }
    else if ((a>=1)&&(a<5))
    {
        a = 1;
    }
    else if ((a>=5)&&(a<10))
    {
        a = 2;
    }
    else if (a>=10)
    {
        a = 3;
    }

    switch (a)
    {
        case 0:
            disc = (0.0)*pv;
            tp = pv - disc;
            printf ("Your discount is: %lf and your total value is: %lf", disc, tp);
            break;

        
        case 1:
            disc = (0.1)*pv;
            tp = pv - disc;
            printf ("Your discount is: %lf and your total value is: %lf", disc, tp);
            break;

        case 2:
            disc = (0.2)*pv;
            tp = pv - disc;
             printf ("Your discount is: %lf and your total value is: %lf", disc, tp);
            break;
        
        case 3:
            disc = (0.3)*pv;
            tp = pv - disc;
            printf ("Your discount is: %lf and your total value is: %lf", disc, tp);
            break;

        default:
            printf (":( Error");
    }
    
    return 0;
}
