#include <stdio.h>

int main()
{
    int n1, n2, n3, l2;

    printf ("Enter three numbers to find out the second largest number amongst them: ");
    scanf ("%d%d%d", &n1, &n2, &n3);

    if ((n1<=n2 && n1>=n3) || (n1<=n3 && n1>=n2))
    {
        l2 = n1;
    }
    else if ((n2<=n3 && n2>=n1) || (n2<=n1 && n2>=n3))
    {
        l2 = n2;
    }
    else if ((n3<=n1 && n3>=n2) || (n3<=n2 && n3>=n1))
    {
        l2 = n3;
    }

    printf ("The second largest input is: %d", l2);

    return 0;
}