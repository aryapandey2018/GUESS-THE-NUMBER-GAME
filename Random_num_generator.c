#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,guess,nguess=1;
    srand(time(0));//for every zero second no changes due to srand
    n=rand()%100+1;//rand() is used fr no gener
    //atation //we are using rand(%100+1 so that n will be between 1 to 100)
   // printf("the number :%d\n",n);
    do{
        printf("guess the no between 1 to 100\n ");
        scanf("%d",&guess);
        if(guess>n)
        {
            printf("Lower the number please!\n");
        }
        else if(guess<n)
        {
            printf("Higher the number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguess);
        }
        nguess++;

    }while (guess!=n);
    return 0;
}