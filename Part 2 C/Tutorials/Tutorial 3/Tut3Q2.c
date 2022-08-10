#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void histogram(int freq[], int N);
void freq_distribution(int numbers[], int freq[], int N);


int main()
{
    // to prevent sequence repition between runs
    srand(time(NULL));
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int numbers[N], freq[10], i, j;
    for (i=0;i<N;i++)
    {
       numbers[i] = rand() % 100; // equivalent to numbers[i] = 0 + rand() % 100, where 0 is the initial value of the range
       printf("%d ", numbers[i]);
    }
    for (j=0;j<10;j++)
    {
        freq[j] = 0;
    }
    freq_distribution(numbers, freq, N);
    histogram(freq, N);
    return 0;
}
void freq_distribution(int numbers[], int freq[], int N)
{
    
    int index, k;
    for (k=0;k<N;k++)
    {
        index = numbers[k] / 10;
        freq[index]++;
    }

}
void histogram(int freq[], int N)
{
    int i, j, k;
    for (i=0;i<=9;i++)
    {
        printf("\n%2d-%2d  |", i*10, i*10 + 9);
        for (k=0;k<freq[i];k++)
        {
            printf("*");
        }
    }
}