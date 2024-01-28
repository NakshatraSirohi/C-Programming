#include <stdio.h>

void ques11()
{
     int arr[5] = {1, 2, 3, 4, 5};
     int sum = 0;
     for (int i = 0; i < 5; i++)
     {
          sum += arr[i];
     }
     printf("sum and avg of arr : %d %d", sum, (sum / 5));
}

void ques12()
{
     int arr[2][3] = {{1, 2, 3},
                      {4, 5, 6}};

     // sum of rows
     for (int i = 0; i < 2; i++)
     {
          int sum = 0;
          for (int j = 0; j < 3; j++)
          {
               sum += arr[i][j];
          }
          printf("\nsum of row%d : %d", i, sum);
     }

     // sum of columns
     for (int j = 0; j < 3; j++)
     {
          int sum = 0;
          for (int i = 0; i < 2; i++)
          {
               sum += arr[i][j];
          }
          printf("\nsum of column%d : %d", j, sum);
     }
}

void ques13()
{
     int key = 10, arr[5] = {1, 2, 10, 11, 12};
     int index = 0;
     for (int i = 0; i < 5; i++)
     {
          if (arr[i] == key)
          {
               index = i;
               break;
          }
     }
     if (index)
     {
          printf("found at index : %d", index);
     }
     else
     {
          printf("nto found");
     }
}

void ques14()
{
     char arr[10] = "Nakshatra";
     printf("%s", arr);
}

void ques15()
{
     char str[10] = "Nakshatra";
     int len = 0;
     while (str[len] != '\0')
     {
          len++;
     }
     printf("length is : %d", len);
}

void ques16()
{
     char str1[20] = "Nakshatra", str2[15] = "Sirohi";

     // assuming length & size is given
     int len1 = 9, len2 = 6, size1 = 20;

     // concatenating str2 into str1
     if ((size1 - len1) >= len2)
     {
          int j = 0;
          while (str2[j] != '\0')
          {
               str1[len1 + j] = str2[j];
               j++;
          }
          str1[len1 + j] = '\0';
     }
     else
     {
          printf("concatenation not possible");
     }

     printf("str1 : %s", str1);
}

void ques17()
{
     char str1[10] = "Nakshatra", str2[10] = "Sirohi";
     // assuming length is given
     int len1 = 9, len2 = 6;
     int n1 = 0, n2 = 0;

     int j = len1 - 1;
     while (j >= 0)
     {
          n1 += str1[j];
          n2 += str2[j];
          j--;
     }

     if (n1 == n2)
     {
          printf("strings are equal");
     }
     else
     {
          printf("strings are not equal");
     }
}

void ques18()
{
     char str[10] = "Nakshatra";
     int s = 0, e = 8;
     while (s <= e)
     {
          char temp = str[s];
          str[s] = str[e];
          str[e] = temp;
          s++;
          e--;
     }
     printf("%s", str);
}

void ques19()
{
     int a = 10, b = 20;
     printf("AND, XOR, OR : %d %d %d", (a & b), (a ^ b), (a | b));
}

void ques20()
{
     int a = 10;
     printf("Result = %d", (~a));
}

int main()
{
     return 0;
}