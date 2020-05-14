#include <stdlib.h>
#include <math.h>
                
double distance (double PR[], double PRv[], int db)
{
    float pwr = 0.5;
    double osszeg = 0.0;
    for(int i = 0; i < db; i++)
    {
        osszeg += (PRv[i] - PR[i]) * ( PRv[i] - PR[i] );
    }
    return pow(osszeg, pwr);  //sqrt (osszeg);
}
                
void kiir (double list[], int db)
{
    for(int i = 0; i < db; i++)
    {
        printf("PageRank [%d]: %lf\n", i, list[i]);
    }
}
                
int main(void)
{
    double L[4][4] = 
    {
        {0.0, 0.0, 1.0/3.0, 0.0},
        {1.0, 1.0/2.0, 1.0/3.0, 1.0},
        {0.0, 1.0/2.0, 0.0, 0.0},
        {0.0, 0.0, 1.0/3.0, 0.0}
    };
                
    double PR[4] = {0.0, 0.0, 0.0, 0.0};
    double PRv[4] = {1.0/4.0, 1.0/4.0, 1.0/4.0, 1.0/4.0};
                
    for(;;)
    {
        for(int i = 0; i < 4; i++)
        {
            PR[i] = PRv[i];
        }
        for(int i = 0; i < 4; i++)
        {
            double tmp = 0.0;
            for(int j = 0; j < 4; j++)
            {
                tmp += L[i][j] * PR[j];                
            }
            PRv[i] = tmp;
        }
        if(distance(PR, PRv, 4) < 0.00001)
        {
            break;
        }
    }
    kiir (PR, 4);
    return 0;
}