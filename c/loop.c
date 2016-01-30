#include <stdio.h>

// Declaration of functions//
void prime_number(void);
void break_func(void);
void overtime_pay(void);
void factorial(void);
int  factorial_recursion(int);
void get_pow(void);
void asci_ch(void);
void armstrong_num(void);
void prime_num_range(void);
void prime_num(int n);
void count_num (void);
void get_binary(void);
void get_range(void);
void get_max(void);
void get_reverse(void);


void print_seq_recursion(int);

int main (void)
{
    // Calling Function
#if 0
    prime_number();
    break_func();
    overtime_pay();
    factorial();
    get_pow();
    asci_ch();
    armstrong_num();
    prime_num_range();
    count_num();
    get_range();
    get_max();
    get_binary();
    get_reverse();
    print_seq_recursion(3);
#endif
    printf("factorial of %d is %d\n", 5, factorial_recursion(5));

    return 0;
}   

void print_seq_recursion (int n)
{

    if (n == 0) {
        return;
    }

    print_seq_recursion(n-1);

    printf("%d ", n);
}

void get_reverse (void)
{
    int n = 0, i = 0;
    int reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0) {
        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n/10;
    }
    printf("reverse number is %d\n", reverse);
}

//defining get_max
void get_max (void)
{
    int a, b, c, max  = 0;
    printf("Enter a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (0) {
        if (a > b && a > c) 
        {
            max = a ;
        }
        if (b > a && b > c)
        {


            max = b ;
        }
        if (c > a && c > b)
        {
            max = c ;
        }
    }

    if (0) {
        if (a > b) {
            if (a > c) {
                max = a;
            } else {
                max = c;
            }
        } else {
            if (b > c) {
                max = b;
            } else {
                max = c;
            }
        }
    }
    printf ("Max of a b c is %d\n", max);
}

//defining get_range
void get_range (void)
{
    int n, big = 0, small = 100;

    printf("Enter numbers : ");

    while(1){
        scanf("%d", &n);
        if (n == 10){
            break;
        }    

        if (big <  n) {
            big = n;
        }
        if (small > n) { 
            small = n;
        }
    } 
    printf( "Big %d, Small %d, Range is %d \n", big, small, big - small);
}

//defining get_binary
void get_binary (void)
{   
    int arr[100];
    int n = 0, i = 0, j = 0, temp = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;

    printf("Binary of %d is : ", temp);
    while (n > 0) {
        printf("%d",  n % 2);
        arr[i++] = n % 2;
        n = n/2;
    }
    printf("\n");

    printf("Binary of %d is : ", temp);
    for (j = i -1; j >= 0; j--) {
        printf("%d",  arr[j]);
    }
    printf("\n");
}    

//defining count_num

void count_num (void)
{
    int n = 0;
    int pos = 0, zero = 0, neg = 0;

    while (1) {
        printf("Enter the numbers : ");
        scanf("%d", &n);

        if (n == 1000) {
            break;
        }

        if (n > 0) {
            pos++;
        } else if (n == 0) {
            zero++;
        } else {
            neg++;
        }
    }
    printf("positve count : %d\n", pos);
    printf("zero count : %d\n", zero);
    printf("negatve count : %d\n", neg);
}    
    // Calling Function

//defining prime_num//
void prime_num (int n)
{
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            printf("%d is not a prime number\n", n);
            break;
        } else {
            i++;
        } 

        if (i == n) {
            printf("%d is a prime number \n", i);
        }
    }
}

void prime_num_range (void)
{
    int i, n =1;

    while (n <= 300) {
        prime_num(n);
        n++;
    }
}

//defining armstrong_num//
void armstrong_num()
{
    int i = 1, a,b,c;
    while (i<=500)
    {
        a = i%10;
        b = i%100;
        b = (b-a)/10;
        c = i/100;
        if (a*a*a + b*b*b + c*c*c == i)
        {
            printf("%d is a Armstrong Number \n", i);
        } 
        i++;
    }   
}

//defining asci_ch//
void asci_ch ()
{    
    int i = 0;
    while (i<=255)
    {      
        printf("%d, %c ", i, i);
        i++;
    }    
}

//defining get_pow//
void get_pow ()
{
    int x, y, i, getpow =1;

    printf("Enter x, y : ");
    scanf("%d %d", &x, &y);

    for (i = 1; i<= y; i++)
    {
        getpow  = getpow * x;
    }    
    printf("x to the power y is getpow = %d \n", getpow);
}    


//defining factorial//
void factorial ()
{
    int i, num; 
    long int fac =1;

    printf ("Enter a number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fac = fac * i;
    }    
     printf("factorial of num fac = %ld \n", fac);
}    

int
factorial_recursion (int n)
{
    if (n == 1) {
        return 1;
    }

    return n * factorial_recursion(n-1); 
}

// defining overtime pay//
void overtime_pay()
{
    int e, h;
    float r, s;

    for(e =1; e<=10; e++){

        printf("Enter hours worked \n");
        scanf("%d", &h);

        if (h > 40){
            s = (h-40)*12.00;
            printf("Overtime Pay = %f \n", s);    
        } 
    }
}    


//defining break func//
void break_func (void)
{
    int i = 1, j =1;
    while (i++ <=10)
    {
        while (j++ <=20)
        {
            if (j == 15){
                printf("\n");
                break;
            } else {
                printf("%d %d, ", i, j);
            }    
        }    
    }
}

// Definition of function//
void prime_number (void)
{
    int i, num;

    printf("Enter a number :");
    scanf("%d", &num);

    for (i = 2; i <= num-1; i++) {
        printf("%s(%d): num: %d, i: %d, num per i: %d \n", __FUNCTION__, __LINE__, num, i, num % i);

        if (num % i == 0) {
            printf("num %d is not a prime number \n", num);
            break;
        } 
    }

    if ( i == num) {
        printf("num %d is a prime number \n", num);
    }   
}


