#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void th_function1();
void th_function2();
int shared=0; // shared variable
int main()
{
int x;
printf("Enter the number of elememts -> ");
scanf("%d",&x);
pthread_t thread1, thread2;
pthread_create(&thread1, NULL, th_function1, NULL);
pthread_create(&thread2, NULL, th_function2, x);
pthread_join(thread1, NULL);
pthread_join(thread2,NULL);
printf("\nFinal value of shared variable is %d = number of elements in series.\n",shared); //prints the last updated value of shared variable
}

void th_function2(int x)
{
//x=shared;
     printf("Please enter a number:\n");
//x=shared;    
shared=x ;
 
}

void th_function1()
{
//using shared make fib series
    printf("Fibonacci Series:  ");
int i;
int t1=0;
int t2=1;
int nextTerm;
int n=shared;
printf("%d -> ",t1);
printf("%d -> ",t2);
    for (i = 1; i <=n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
printf("%d -> ",nextTerm);
    }
}
