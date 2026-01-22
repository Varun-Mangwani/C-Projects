#include <stdio.h>

void table(int);
int power(int , int);
int prime(int);
void palindrome(int);
int fact(int);
void perfect(int);
void sumofdgt(int);
void HCF(int,int);
void fibbo(int,int,int);
void arm(int);

int main()
{
    while(1)
    {
        int s;
        printf("\n\n\t\tLOOP OPERATIONS\n");
        printf("\n Enter 1 for Table");
        printf("\n Enter 2 for Power");
        printf("\n Enter 3 to check Prime");
        printf("\n Enter 4 for Palindrome");
        printf("\n Enter 5 for Factorial");
        printf("\n Enter 6 to check Perfect number");
        printf("\n Enter 7 for Sum of Digits");
        printf("\n Enter 8 for HCF");
        printf("\n Enter 9 for Fibonacci");
        printf("\n Enter 10 for Armstrong");
        printf("\n Enter 11 to Exit");
        printf("\n Enter Your Choice: ");
        scanf("%d", &s);

        switch(s)
        {
            case 1:
            {
                int n;
                printf("\n Enter a number: ");
                scanf("%d", &n);
                table(n);
                break;
            }

            case 2:
            {
                int b, n2, ans;
                printf("\n Enter Base: ");
                scanf("%d", &b);
                printf("\n Enter Exponent: ");
                scanf("%d", &n2);
                ans = power(b, n2);
                printf("\n Power = %d", ans);
                break;
            }

            case 3:
            {
                int n3;
                printf("\n Enter a number: ");
                scanf("%d", &n3);
                if(prime(n3))
                    printf("\n It is Prime");
                else
                    printf("\n It is Not Prime");
                break;
            }

            case 4:
            {
                int n4;
                printf("\n Enter a number: ");
                scanf("%d", &n4);
                palindrome(n4);
                break;
            }

            case 5:
            {
                int n5, ans;
                printf("\n Enter a number: ");
                scanf("%d", &n5);
                ans = fact(n5);
                printf("\n Factorial = %d", ans);
                break;
            }

            case 6:
            {
                int n6;
                printf("\n Enter a number: ");
                scanf("%d", &n6);
                perfect(n6);
                break;
            }

            case 7:
            {
                int n7;
                printf("\n Enter a number: ");
                scanf("%d", &n7);
                sumofdgt(n7);
                break;
            }

            case 8:
            {
                int a, b;
                printf("\n Enter two numbers: ");
                scanf("%d%d", &a, &b);
                HCF(a, b);
                break;
            }

            case 9:
            {
                int a, b, lmt;
                printf("\n Enter first number: ");
                scanf("%d", &a);
                printf("\n Enter second number: ");
                scanf("%d", &b);
                printf("\n Enter limit: ");
                scanf("%d", &lmt);
                fibbo(a, b, lmt);
                break;
            }

            case 10:
            {
                int n8;
                printf("\n Enter a number: ");
                scanf("%d", &n8);
                arm(n8);
                break;
            }

            case 11:
                return 0;

            default:
                printf("\n Invalid Choice");
        }
    }
}

/* FUNCTIONS */

void table(int n)
{
    int i;
    for(i = 1; i <= 10; i++)
        printf("\n %d x %d = %d", n, i, n * i);
}

int power(int b, int m)
{
    int i, ans = 1;
    for(i = 1; i <= m; i++)
        ans = ans * b;
    return ans;
}

int prime(int n)
{
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void palindrome(int n)
{
    int rev = 0, temp = n, dgt;
    while(n != 0)
    {
        dgt = n % 10;
        rev = rev * 10 + dgt;
        n = n / 10;
    }

    if(rev == temp)
        printf("\n It is Palindrome");
    else
        printf("\n It is Not Palindrome");
}

int fact(int n)
{
    int i, ans = 1;
    for(i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}

void perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("\n It is Perfect Number");
    else
        printf("\n It is Not Perfect Number");
}

void sumofdgt(int n)
{
    int sum = 0, dgt;
    while(n != 0)
    {
        dgt = n % 10;
        sum += dgt;
        n = n / 10;
    }
    printf("\n Sum of digits = %d", sum);
}

void HCF(int a, int b)
{
    int i, hcf = 1;
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("\n HCF = %d", hcf);
}

void fibbo(int a, int b, int lmt)
{
    int c;
    printf("\n %d\t%d", a, b);
    c = a + b;
    while(c <= lmt)
    {
        printf("\t%d", c);
        a = b;
        b = c;
        c = a + b;
    }
}

void arm(int n)
{
    int temp = n, sum = 0, dgt, c = 0, n1, i, mult;

    n1 = n;
    while(n1 != 0)
    {
        c++;
        n1 = n1 / 10;
    }

    n1 = n;
    while(n1 != 0)
    {
        dgt = n1 % 10;
        mult = 1;
        for(i = 1; i <= c; i++)
            mult = mult * dgt;

        sum = sum + mult;
        n1 = n1 / 10;
    }

    if(sum == temp)
        printf("\n It is Armstrong");
    else
        printf("\n It is Not Armstrong");
}