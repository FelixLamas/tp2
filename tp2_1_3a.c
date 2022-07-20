#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
#define M 7
int main(int argc, char const *argv[])
{
int i,j;
int mt[N][M];
srand(time(NULL));
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            **(mt+i) = rand()%101;
            printf("%4d", **(mt+i));
        }
    printf("\n");
    }

    return 0;
}
