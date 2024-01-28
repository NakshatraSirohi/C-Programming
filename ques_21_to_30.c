#include <stdio.h>

void ques21()
{
     int a = 55, count = 0;
     while (a != 0)
     {
          if (a & 1)
          {
               count++;
          }
          a = a >> 1;
     }
     printf("set bits count : %d", count);
}

void ques22()
{
     int n = 555;
     int k = 3;
     int m = n >> (k - 1);

     int x = 1;
     while (k > 1)
     {
          x *= 2;
          k--;
     }

     if (m & 1)
     {
          printf("answer : %d", (n + x));
     }
     else
     {
          printf("answer : %d", (n - x));
     }
}

void ques23()
{
     int a = 555, count = 0;
     while (a != 0 && count <= 2)
     {
          if (a & 1)
          {
               count++;
          }
          a = a >> 1;
     }
     if (count != 1)
     {
          printf("Not a power of 2");
     }
     else
     {
          printf("Power of 2");
     }
}

void ques24a(int a, int b)
{
     // using temp variable
     printf("a, b : %d %d", a, b);
     int temp = a;
     a = b;
     b = temp;
     printf("   A, B : %d %d", a, b);
}

void ques24b(int a, int b)
{
     // without temp variable
     printf("a, b : %d %d", a, b);
     a = a + b;
     b = a - b;
     a = a - b;
     printf("   A, B : %d %d", a, b);
}

void ques25(int p, int c, int m)
{
     int percent = (p + c + m) / 3;
     if (percent >= 90)
     {
          printf("A+");
     }
     else if ((percent < 90) && (percent >= 80))
     {
          printf("A");
     }
     else
     {
          printf("average");
     }
}

void ques26(int num, int pow)
{
     int res = 1;
     if (pow > 0)
     {
          while (pow > 0)
          {
               res *= num;
               pow--;
          }
          printf("result = %d", res);
     }
     else
     {
          while (pow < 0)
          {
               res *= num;
               pow++;
          }
          double res2 = 1.0 / res;
          printf("result = 1/%d", res);
          printf("   result = %0.10f", res2);
     }
}

void ques27(int a)
{
     if (a >= 3)
     {
          int temp = 1;
          for (int i = 2; i <= (a / 2); i++)
          {
               if (a % i == 0)
               {
                    temp = 0;
                    break;
               }
          }
          if (temp)
          {
               printf("prime num");
          }
          else
          {
               printf("not a prime num");
          }
     }
     else if (a == 2)
     {
          printf("prime num");
     }
     else if (a == 1 || a == 0)
     {
          printf("not defined");
     }
     else
     {
          printf("Negative number is entered");
     }
}

void ques28()
{
     char str[20] = "NitiN";
     char str2[20];

     int j = 5;
     int s = 0, e = j - 1;
     while (s <= e)
     {
          if (str[s] == str[e])
          {
               s++;
               e--;
          }
          else
          {
               printf("not a palindrome");
               break;
          }
     }
     if (s >= e)
     {
          printf("palindrome");
     }
}

void ques29a()
{
     // method 1
     char str1[20] = "Nakshatra";
     char str2[24] = "SirohiSirohiSirohiSirohi";
     int len2 = 24, size1 = 20;
     if (size1 >= len2)
     {
          for (int i = 0; i < len2; i++)
          {
               str1[i] = str2[i];
          }
          str1[len2] = '\0';
          printf("%s", str1);
     }
     else
     {
          printf("Overflow");
     }
}

void ques29b()
{
     // method 2
     char str1[20] = "Nakshatra";
     char str2[24] = "SirohiSirohiSirohiSirohi";
     int size1 = sizeof(str1) / sizeof(str1[0]);
     int i = 0;
     while ((str2[i] != '\0') && (i < size1 - 1))
     {
          str1[i] = str2[i];
          i++;
     }
     str1[i] = '\0';

     printf("%s", str1);
}

void ques30(int a)
{
     if (a > 0)
     {
          if (a & 1)
          {
               printf("odd");
          }
          else
          {
               printf("even");
          }
     }
     else if (a == 0)
     {
          printf("zero not defined");
     }
     else
     {
          printf("negative num entered");
     }
}

int main()
{
     return 0;
}