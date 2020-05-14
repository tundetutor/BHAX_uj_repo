#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    srand(time(NULL));
    int r = rand() % 3;
    printf("%d", r);
    int a;
    int b;
    int seged;
    printf("Minden futattasaskor egy random kivalasztott modeszert hasznalok.\nIrj be 2 megcserelendo valtozot!\n");
    scanf("%d%d", &a, &b);
    if( r == 0)
    {
        printf("a = %d es b = % d\nA valotozokat segedvaltozo hasznalataval cserelem meg.", a, b);
        seged = a;
        a = b;
        b = seged;
        printf("\nEkkor a valtozocsere utan: a = %d es b = %d.\n", a, b);
    }
    else if( r == 1)
    {
        printf("a = %d es b = % d\nA valotozokat az osszeadasos modszerrel cserelem meg.", a, b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("\nEkkor a valtozocsere utan: a = %d es b = %d.\n", a, b);
    }
    else
    {
        printf("a = %d es b = % d\nA valotozokat az kivonasos modszerrel cserelem meg.", a, b);
        a = a - b;
        b = a + b;
        a = b - a;
        printf("\nEkkor a valtozocsere utan: a = %d es b = %d.\n", a, b);
    }
    return 0;
}