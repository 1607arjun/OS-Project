#include<pthread.h>
#include<stdio.h>
void *th_function1();
void *th_function2();
int shared=0; // shared variable
int main()
{
pthread_t thread1, thread2;
pthread_create(&thread1, NULL, th_function1, NULL);
pthread_create(&thread2, NULL, th_function2, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2,NULL);
printf("Final value of shared is %d\n",shared); //prints the last updated value of shared variable
}

void *th_function2()
{
int x;
     printf("Please enter a number:\n");
    scanf("%d",&x);
x=shared;    
shared=x ;
     sleep(10);  //thread one is preempted by thread 2
 
}

void *th_function1()
{
//using shared make fib series
    printf("Fibonacci Series:  ");
int i;
int t1=0;
int t2=1;
int nextTerm;

    for (i = 1; i <= shared; ++i)
    {
        printf("ertyui");
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
printf("aaaaaaaaaaaaa");
}
