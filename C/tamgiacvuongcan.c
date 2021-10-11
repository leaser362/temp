#include <stdio.h>

void tg90duoitrai(int h, int i, int j)
{
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}
/*void tg90trentrai(int h, int i, int j)
{
    j=0;
    for (i = 1; i <= h; i++)
    {
        j=h-j+1;
      do
        {
            printf("X");
            j = j - 1;
        }
        while(j!=1);
        j=0;
        printf("\n");
    }
}*/
int main()
{
    int h;
    int i, j;
    printf("Add Height:");
    scanf("%d", &h);
    tg90duoitrai(h, i, j);
    printf("\n");
    //tg90trentrai(h, i, j);
    return 0;
}
