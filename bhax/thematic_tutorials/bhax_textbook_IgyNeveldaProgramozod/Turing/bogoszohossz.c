#include <stdio.h>

int main()
{
    int szohossz = 0, szo = 1;
    
    do
    {
        
        szohossz++;
        
    } while(szo <<= 1);
    
    printf("A szó %d bites\n", szohossz);
    
    return 0;
}