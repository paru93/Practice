#include <iostream>
#include <math.h>
void fibo(unsigned int n);
void printresult(unsigned int n);
bool isPrime(int n);
int main()
{
    int n;
    do{
        std::cout << "Please enter a number:";
        std::cin >> n;
        if(n<0)
            std::cout << "Please enter positive integer"<<std::endl;
    }
    while(n<0);
    fibo(n);
    return 0;
}
void fibo(unsigned int n)
{
    unsigned int fib1,fib2,fib;
    fib1=0,fib2=1,fib=0;
    if(n==1)
    {
        printresult(fib1);
    }
    if(n==2)
    {
        printresult(fib1);
        printresult(fib2);
    }
    if(n>2)
    {
        printresult(fib1);
        printresult(fib2);
        while(n>2)
        {
            fib=fib1+fib2;
            printresult(fib);
            fib1=fib2;
            fib2=fib;
            n--;
        }
    }
}
void printresult(unsigned int n)
{
    bool divisible_by_3,divisible_by_5;
    divisible_by_3=((n%3)==0);
    divisible_by_5=((n%5)==0);
    if(isPrime(n))//When it is prime including 3 and 5
    {
        std::cout<<"BuzzFizz ";
    }
    else if(divisible_by_3 && divisible_by_5)
    {
        std::cout<<"FizzBuzz ";
    }
    else if(divisible_by_3)
    {
        std::cout<<"Buzz ";
    }
    else if(divisible_by_5)
    {
        std::cout<<"Fizz ";
    }
    else
    {
        std::cout<<n<<" ";
    }
}

bool isPrime(int n)
{
    int divider,dividelimit,totaldivisions;
    dividelimit=int(sqrt(n));
    totaldivisions=0;
    for(divider=1;divider<=dividelimit;divider++)
    {
        if((n%divider)==0)
            totaldivisions++;
    }
    if((totaldivisions==1) && (n!=1))
        return true;
    else
        return false;
}
