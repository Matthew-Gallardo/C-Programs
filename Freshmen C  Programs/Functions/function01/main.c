#include <stdio.h>
#include <stdlib.h>
/*
unary operator
++
--
-
+
!

binary operator
+
> <
||

ternary operator
?: (condition ? action1 :action2
*/
int findlargest(int v1,int v2,int v3);

int main()
{
    int v1, v2, v3;

    printf("Input three numbers:");
    scanf ("%d%d%d", &v1, &v2, &v3);

    printf ("The largest value is %d.\n",findlargest(v1,v2,v3));


}
int findlargest(int v1,int v2,int v3)
{
    if (v1 >v2 && v1 > v3)
        return v1;
    else if (v2 > v3)
        return v2;
    else
        return v3;

}



