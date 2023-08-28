#include <stdio.h>
#include <stdlib.h>

int *listCounter(int arr[], int n, int *resultLength);

int main()
{
    int testList[] = {55, 45, 0, 1000, 200};
    int testLength = sizeof(testList) / sizeof(testList[0]);

    int resultLength;
    int *resultList = listCounter(testList, testLength, &resultLength);

    for (int i = 0; i < resultLength; i++)
    {
        printf("%d\n", resultList[i]);
    }

    free(resultList);
    return 0;
}

int *listCounter(int arr[], int n, int *resultLength)
{
    int *counterList = NULL;
    int counter = 0;
    int currentI = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            counter += arr[i];
        }
        else
        {
            counterList = (int *)realloc(counterList, (currentI + 1) * sizeof(int));
            if (counterList == NULL)
            {
                // Handle memory allocation error
                return NULL;
            }

            counterList[currentI] = counter;
            currentI += 1;
            counter = 0;
        }
    }

    counterList = (int *)realloc(counterList, (currentI + 1) * sizeof(int));
    if (counterList == NULL)
    {
        // Handle memory allocation error
        return NULL;
    }

    counterList[currentI] = counter;
    *resultLength = currentI + 1;

    return counterList;
}
