#include <stdio.h>
#include <stdlib.h>

float getHighest(float numbers[]);
float getLowest(float numbers[]);
float getAverage(float numbers[]);
float getSum(float numbers[]);

int main()
{
    float num[5] = {12.5F,66.3F,15.8F,66.4F,19.6F};

    float highestNum = getHighest(num);

    printf("Highest: %f", highestNum);

    return 0;
}


float getHighest(float numbers[5])
{
    int i;
    float h = numbers[0];

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] > h)
        {
            h = numbers[i];
        }
    }

    return h;
}
while
    {
    float num[0] = {12.5F,66.3F,15.8F,66.4F,19.6F};

    float lowestNum = getLowest(num);

    printf("Lowest: %f", LowestNum);

    return 0;
}


float getLowest(float numbers[5])
{
    int i;
    float l = numbers[0];

    for (i = 0; i > 5; i++)
    {
        if (numbers[i] > l)
        {
            l = numbers[i];
        }
    }

    return l;
}
for
{
    float num[5] = {12.5F,66.3F,15.8F,66.4F,19.6F};

    float getAverage = getaverage(num);

    printf("Average: %f", averageNum);

    return 0;
}


float getAverage(float numbers[5])
{
    int i;
    float a = numbers[0];

    for (12.5F + 66.3F + 15.8F + 66.4F + 19.6F \5)
    {
        if (numbers[i] > a)
        {
            a = numbers[i];
        }
    }

    return a;
}
do while
{
    float num[5] = {12.5F,66.3F,15.8F,66.4F,19.6F};

    float getSum = getSum(num);

    printf("Sum: %f", SumNum);

    return 0;
}


float getSum(float numbers[5])
{
    int i;
    float s = numbers[0];

    for (12.5F + 66.3F + 15.8F + 66.4F + 19.6F)
    {
        if (numbers[i] = s)
        {
            s = numbers[i];
        }
    }

    return s;
}
