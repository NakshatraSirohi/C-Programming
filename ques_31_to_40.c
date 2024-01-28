#include <stdio.h>
#include <math.h>

void ques31(int n)
{
    if (n > 0)
    {
        printf("sum = %d", ((n * (n + 1)) / 2));
    }
    else
    {
        printf("wrong num entered");
    }
}

void ques32(int n)
{
    if (n >= 2)
    {
        int j = 2, temp = 1;
        while (j <= n)
        {
            for (int i = 2; i < (j / 2); i++)
            {
                if (j % i == 0)
                {
                    temp = 0;
                    break;
                }
            }
            if (temp)
            {
                printf("%d  ", j);
            }
            j++;
        }
    }
    else if (n < 2)
    {
        printf("Not defined");
    }
}

void ques33(int n)
{
    int temp1 = n, digits = 0;
    while (temp1 > 0)
    {
        digits++;
        temp1 /= 10;
    }

    int temp2 = n, sum = 0;
    while (temp2 > 0)
    {
        int pow = 1, x = temp2 % 10;
        for (int i = 0; i < digits; i++)
        {
            pow *= x;
        }
        sum += pow;
        temp2 /= 10;
    }

    if (sum - n)
    {
        printf("Not a armstrong");
    }
    else
    {
        printf("armstrong");
    }
}

void ques34(int n)
{
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev - n)
    {
        printf("not palindrome");
    }
    else
    {
        printf("palindrome");
    }
}

void ques35(int n)
{
    int s = 1, e = n / 2;
    int tempSol = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        long long int square = mid * mid;
        if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            tempSol = mid;
            s = mid + 1;
        }
    }

    double ans = tempSol;
    double fraction = 1;
    for (int i = 0; i < 5; i++)
    {
        fraction /= 10;
        double temp = ans;
        while ((temp * temp) < n)
        {
            ans = temp;
            temp += fraction;
        }
    }

    printf("%f", ans);
}

void ques36()
{
    int l, b;
    printf("enter length and breadth : ");
    scanf("%d %d", &l, &b);
    printf("area : %d", (l * b));
}

void ques37(int n)
{
    float a = 0, b = 0, c = 0, i = 3;
    int x, y, z;
    while (c <= n)
    {
        int x = (int)i;
        if ((x % 2) == 0)
        {
            a = i;
            b = ((i * i) / 4) - 1;
            c = ((i * i) / 4) + 1;
            x = a * a;
            y = b * b;
            z = c * c;
            if ((x + y == z) && (c <= n) && (a < b))
            {
                printf("\n%d %d %d", (int)a, (int)b, (int)c);
            }
        }
        else
        {
            a = i;
            b = ((i * i) / 2) - 0.5;
            c = ((i * i) / 2) + 0.5;
            x = a * a;
            y = b * b;
            z = c * c;
            if ((x + y == z) && (c <= n) && (a < b))
            {
                printf("\n%d %d %d", (int)a, (int)b, (int)c);
            }
        }
        i++;
    }
}

// QUES = 38
int gcd(int a, int b)
{
    int gcd = 0;
    for (int i = 1; (i <= a) && (i <= b); i++)
    {
        if (((a % i) == 0) && ((b % i) == 0))
        {
            gcd = i;
        }
    }
    return gcd;
}
int lcm(int a, int b)
{
    int lcm = (a * b) / gcd(a, b);
    return lcm;
}
void ques38()
{
    int arr[6] = {12, 14, 16, 18, 20, 22};
    int size = 6;
    int ans1 = gcd(arr[0], arr[1]);
    int ans2 = lcm(arr[0], arr[1]);
    for (int i = 2; i < size; i++)
    {
        ans1 = gcd(ans1, arr[i]);
        ans2 = lcm(ans2, arr[i]);
    }
    printf("final gcd = %d", ans1);
    printf("\nfinal lcm = %d", ans2);
}

void ques39()
{
    float c, f;
    printf("enter Celsius & Fahrehheit : ");
    scanf("%f %f", &c, &f);
    printf("C to F : %0.3f", ((c * (9.0 / 5.0)) + 32));
    printf("\nF to C : %0.3f", ((f - 32) * (5.0 / 9.0)));
}

void ques40(int n)
{
    long long int ans = 1;
    while (n > 1)
    {
        ans *= n;
        n--;
    }
    printf("factorial = %lld", ans);
}

int main()
{
    return 0;
}