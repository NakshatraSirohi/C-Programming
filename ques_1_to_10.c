#include <stdio.h>

void ques1()
{
     int a = (float)5;
     printf("int to float : %f", a);
}

void ques2()
{
     char b;
     printf("enter the char : ");
     scanf("%c", &b);
     printf("ASCII Value : %d   Character : %c", b, b);
}

void ques3()
{
     int a = 6;
     if (a % 2)
     {
          printf("number is odd");
     }
     else
     {
          printf("number is even");
     }
}

void ques4()
{
     int yr = 1900;
     int condition = ((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0);
     if (condition)
     {
          printf("leap year");
     }
     else
     {
          printf("not a leap year");
     }
}

void ques5a()
{
     // using if-else ladder
     int a, b;
     char c;
     printf("enter n1 & n2 & (+ - * /) : ");
     scanf("%d %d %c", &a, &b, &c);

     if (c == '+')
     {
          printf("addition = %d", (a + b));
     }
     else if (c == '-')
     {
          printf("subtraction = %d", (a - b));
     }
     else if (c == '*')
     {
          printf("multiplication = %d", (a * b));
     }
     else if (c == '/')
     {
          if (b != 0)
          {
               printf("division = %d", (a / b));
          }
          else
          {
               printf("division by zero is not possible");
          }
     }
     else
     {
          printf("wrong operator entered");
     }
}

void ques5b()
{
     // using switch case
     int a, b;
     char c;
     printf("enter n1 & n2 & (+ - * /) : ");
     scanf("%d %d %c", &a, &b, &c);

     switch (c)
     {
     case '+':
          printf("addition : %d", (a + b));
          break;
     case '-':
          printf("subtraction : %d", (a - b));
          break;
     case '*':
          printf("multiplication : %d", (a * b));
          break;
     case '/':
          if (b != 0)
          {
               printf("division : %d", (a / b));
          }
          else
          {
               printf("division by zero is not possible");
          }
          break;
     default:
          printf("wrong operator entered");
     }
}

void ques6()
{
     int num, sum = 0;
     do
     {
          printf("enter num : ");
          scanf("%d", &num);
          sum += num;
     } while (num != -1);

     printf("sum = %d", sum);
}

void ques7(int a, int b)
{
     printf("sum = %d", (a + b));
}

void ques8(int a, int b)
{
     int max = (a > b) ? a : b;
     printf("maximum of 2 nums : %d", max);
}

void ques9(int a, int b, int c)
{
     printf("average of 3 nums : %d", ((a + b + c) / 3));
}

void ques10()
{
     int arr[10] = {0};
     printf("elements of arr : ");
     for (int i = 0; i < 10; i++)
     {
          printf("%d ", arr[i]);
     }
}

int main()
{
     return 0;
}