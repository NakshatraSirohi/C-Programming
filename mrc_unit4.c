#include <stdio.h>
#include <stdlib.h>

// QUESTION --> 31
#define rc 100
void inputElement(int arr[rc][rc], int row, int col)
{
    if (row < rc && col < rc)
    {
        printf("enter %d elements\n", (row * col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
    else
    {
        printf("size overflow");
        exit(0);
    }
}
void printElement(int arr[rc][rc], int row, int col)
{
    printf("printing elements\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void ques31()
{
    int arr[rc][rc];
    int ans[rc][rc];

    int row, col;
    printf("enter row & col :");
    scanf("%d %d", &row, &col);

    inputElement(arr, row, col);
    printElement(arr, row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }

    printElement(ans, row, col);
}

// QUESTION --> 32
void ques32()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int row = 10;

    int evenSum = 0, oddSum = 0;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < row; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
            evenSum += arr[i];
        }
        else
        {
            oddCount++;
            oddSum += arr[i];
        }
    }

    printf("evenSum = %d\noddSum = %d\n", evenSum, oddSum);
    printf("evenCount = %d\noddCount = %d\n", evenCount, oddCount);
}

// QUESTION --> 33

int main()
{
    ques32();
    return 0;
}