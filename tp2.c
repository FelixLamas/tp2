#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20
int main()
{
    
    int i;
    int vt[N];
    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
    vt[i]=rand()%101;
    printf("%d", vt[i]);  
    }
    return 0;
}

