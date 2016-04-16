/*************************************************************************
	> File Name: guscc.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月16日 星期六 15时37分36秒
 m***********************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
# define MAX_NUMBER 1000

void guess();
int get_number();

int magic;

int main()
{
    char command;
    extern int magic;

    printf("This is a guessing game:\n\n");
    srand(time(NULL));
    do
    {
        magic = get_number();
        guess();
        printf("Play agagin(y or n)?\n");
        scanf("%1s",&command);
    }while(command == 'y' || command == 'Y');
    return 0;
}

void guess()
{
    int guess,counter = 0;
    extern int magic;
    for(;;)
    {
        printf("guess it:");
        scanf("%d",&guess);
        counter++;
        if(guess == magic)
        {
            printf("You have guessed the right number by %d times!!\n",counter);
            return;
        }
        else if(guess > magic)
        {
            printf("It's too high and please try again");
        }
        else
        {
            printf("It's too low and please try again");
        }
    }
}

int get_number()
{
    int x;
    printf("A magic number have been creared that is between 1 and %d.\n",MAX_NUMBER);
    x = rand();
    x = x % MAX_NUMBER +1;
    printf("x = %d",x);
    return x;
}
