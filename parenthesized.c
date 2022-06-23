#include<stdio.h>
#include<stdlib.h>
int top = -1;
char stack[100];

void push(char a)
{
      stack[top] = a;
      top++;
}

void pop()
{
      if (top == -1)
      {
            printf("expression is invalid\n");
            exit(0);
      }
      else
      {
            top--;
      }
}
int main()
{
      int i,choose;
      char a[100];
      printf("[1] Check if expression is correctly parenthesized or not \n[2] Exit\n");
      while (1)
      {
            printf("Choose operation : ");
            scanf("%d", &choose);
            switch (choose)
            {
                  case 1:
                        printf("\nEnter the expression you want to check : \n");
                        scanf("%s",a);
                        for (i = 0; a[i] != '\0';i++)
                        {
                              if (a[i] == '(')
                              {
                                    push(a[i]);
                              }
                              else if (a[i] == ')')
                              {
                                    pop();
                              }
                        }
                        if (top == -1)
                              printf("Expression is valid. Well done. \n\n");
                        else
                              printf("Expression is incorrectly parenthesized. Try again. \n\n");
                        break;
                  case 2:
                        exit(0);
                  default: printf("Invalid operation. Type 1 to pick the first option, or type 2 to exit the program.\n");
            }
      }
      return 0;
}