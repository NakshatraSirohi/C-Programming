#include <stdio.h>
#include <stdlib.h>

// QUESTION --> 19
#define RC 100
void inputElement(int arr[RC][RC], int row, int col)
{
    if (row < RC && col < RC)
    {
        printf("Enter %d elements:\n", (row * col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (scanf("%d", &arr[i][j]) != 1)
                {
                    printf("Invalid input. Please enter integers only.\n");
                    exit(1);
                }
            }
        }
    }
    else
    {
        printf("Size overflow\n");
        exit(1);
    }
}
void printElement(int arr[RC][RC], int row, int col)
{
    printf("Printing elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void ques19()
{
    int arr1[RC][RC];
    int arr2[RC][RC];
    int arr3[RC][RC] = {0};

    int row1, col1, row2, col2;
    printf("Enter row1, col1, row2, col2: ");
    if (scanf("%d %d %d %d", &row1, &col1, &row2, &col2) != 4)
    {
        printf("Invalid input. Please enter four integers.\n");
        exit(1);
    }

    inputElement(arr1, row1, col1);
    inputElement(arr2, row2, col2);

    printElement(arr1, row1, col1);
    printElement(arr2, row2, col2);

    if (col1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int res = 0;
                for (int k = 0; k < col1; k++)
                {
                    res += (arr1[i][k] * arr2[k][j]);
                }
                arr3[i][j] = res;
            }
        }
        printElement(arr3, row1, col2);
    }
    else
    {
        printf("Multiplication not possible\n");
    }
}

// QUESTION --> 20
void ques20()
{
    int r = 6;
    int c = r + (r - 1);

    for (int i = r; i > 0; i--)
    {
        for (int j = i; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = r - i + 1; j > 0; j--)
        {
            printf("*");
        }
        for (int j = r - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

// QUESTION --> 21
long long int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
void ques21()
{
    int n = 10;
    long long int res = fact(n);

    long long int sum = 0;
    for (int i = n; i > 0; i--)
    {
        sum += res;
        res /= i;
    }
    printf("%lld\n", sum);
}

// QUESTION --> 22
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (fibo(n - 1) + fibo(n - 2));
}
void ques22()
{
    int n = 10;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += fibo(i);
    }
    printf("%d", sum);
}

// QUESTION --> 24
void ques24()
{
    int n = 10;
    int i = 1;
    for (int r = 0; i <= n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            printf("%d ", i++);
        }
        printf("\n");
    }
}

// QUESTION --> 25
void ques25()
{
    int num = 153, digits = 0, armstrong = 0;

    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        int base = temp % 10;
        int pow = digits, res = 1;
        while (pow > 0)
        {
            res *= base;
            pow--;
        }
        armstrong += res;
        temp /= 10;
    }

    int check = (num == armstrong) ? 1 : 0;
    if (check)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}

// QUESTION --> 27
void ques27()
{
    int num = 121;
    int temp = num, rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }

    int check = (rev == num) ? 1 : 0;
    if (check)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}

// QUESTION --> 28
void ques28()
{
    int num = 1243, rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    printf("%d\n", rev);
}

// QUESTION --> 29
void ques29()
{
    int n = 11;
    int i = 1;
    for (int r = 0; i < n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            printf("%d ", (n - i));
            i++;
        }
        printf("\n");
    }
}

// QUESTION --> 30
void ques30()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    return 0;
}