#include<stdio.h>
#include<math.h>
void main()
{
    int dayScore[7];
    int N = 7;
    int i;
    int wonMatches[7] = { 0, 0, 0, 0, 0, 0, 0 };
    int temp;
    double wonSum = 0.0;
    double average;
    double sumOfDifference = 0.0;
    double deviation;

    for( i = 0; i < N; i++ )
    {
        scanf("%d", &dayScore[i]);
        temp = dayScore[i];
        while(temp != 0)
        {
            if( temp % 10 == 1 )
                wonMatches[i]++;
            temp = temp / 10;
        }
        wonSum = wonSum + wonMatches[i];
    }

    average = wonSum / N;

    for( i = 0; i < N; i++ )
        sumOfDifference = sumOfDifference + pow((wonMatches[i] - average),2);
        /* sum of square of their differences */


    deviation = sqrt( sumOfDifference/N );
    /* Standard deviation = square root of variance, and variance = average of sum of square root of their difference */
    printf("%f", deviation);

}
