#include <stdio.h>

// QUESTION --> 19
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
void ques19()
{
    int arr1[rc][rc];
    int arr2[rc][rc];
    int arr3[rc][rc] = {0};

    int row1, col1, row2, col2;
    printf("enter row1, col1, row2, col2 : ");
    scanf("%d %d %d %d", &row1, &col1, &row2, &col2);

    inputElement(arr1, row1, col1);
    inputElement(arr2, row2, col2);

    printElement(arr1, row1, col1);
    printElement(arr2, row2, col2);

    if (row2 == col1)
    {
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                int res = 0;
                for (int k = 0; k < row2; k++)
                {
                    res += (arr1[i][k] * arr2[k][j]);
                }
                arr3[i][j] = res;
            }
        }
        printElement(arr3, row2, col1);
    }
    else
    {
        printf("multiplication not possible.");
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
    ques19();
    return 0;
}