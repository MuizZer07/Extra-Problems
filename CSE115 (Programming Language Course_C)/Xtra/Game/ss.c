#include <stdio.h>
void cave(int a)
{
    if(a==1)
    printf("You've entered the cave. It's a deep dark cave.\n\nOooh!!! You got trapped.\n\nAfter a while, YOU ARE DEAD!!....GAME OVER!!\n\nPoints: 9");
    else if(a==2)
    printf("You are going more north. After a while, You find the highway. You take a bus and reach home safely!!\n\ncongrats!!!\n\nPoints: 10");
    else
    printf("\nYou didn't choose between 1 & 2. Game Over!!!\n\nPoints: 2");
}
void looking(int n)
{
    int a;
    if(n==1)
    {
    printf("\n\nYou are heading towards north.\n\nAfter walking a while. You've found a cave.\n\npress 1- to Enter the cave.\npress 2- to move forward.\n\n");
    scanf("%d",&a);
    cave(a);
    }
    else if(n==2)
    printf("\n\nYou are heading towards south.\n\nAfter a while, a snake bite you. You are DEAD!!...\n\nGAME OVER!!...\n\nPoints: 2");
    else
    printf("\nYou didn't choose between 1 & 2. Game Over!!!\n\nPoints: 2");
}
void direction(int a)
{
    if(a==1)
    printf("You are heading to the north. And after running 3 minutes. You've found the highway. You take the bus and reach home safely!!!\n\nCongrats!\n\nPoints: 10");
    else if(a==1)
    printf("You are heading to the south. And after running 8 minutes. You've found the highway. You take the bus and reach home safely!!!\n\nCongrats!\n\nPoints: 10");
    else
    printf("You are running to the opposite direction. You got lost!!!!\n\n Unlucky!!!\n\nPoints: 2");
    }
void fox(int b)
{
    int a;
    if(b==1)
    {
    printf("\nYou again started running. Choose direction. press 1- to go to North. press 2- to go to South.\n\n");
    scanf("%d",&a);
    direction(a);
    }
    else if(b==2)
    printf("\nYou hit the fox with a stone.It got hurt.");
    else
    printf("\nYou didn't choose between 1 & 2. Game Over!!!\n\nPoints: 2");
}
void second(int a)
{
    if(a==1)
    printf("\n\nYou are taking rest!...OOOoohh!! There is a tiger!!\n Nooo.. You are DEAD..\n\nGAME OVER!!!..");
    else if(a==2)
    printf("\n\nYou keep moving. But not running. You are walking slowly. OOhh!! You got lost!!\n\nGame Over!!..\n\nPoints: 5");
    else
    printf("\nYou didn't choose between 1 & 2. Game Over!!!\n\nPoints: 2");
}
void runner(int n)
{
    int a,b;
    if(n==1)
    {
    printf("\nYou stopped! There are no sound now. But You are still scared!\n\npress 1-to take rest\npress 2-to keep moving:\n");
    scanf("%d",&a);
    second(a);
    }

    else if(n==2)
    {
    printf("\nYou are still running.\n\n Finally you've met a fox.\npress 1-to run\npress 2-to hit the fox with a stone.\n");
    scanf("%d",&b);
    fox(b);
    }
    else
    printf("\nYou didn't choose between 1 & 2. Game Over!!!\n\nPoint: 2");
}




int main()
{
    char name[1000];
    int n;
    printf("User name: ");
    gets(name);

    printf("\n\nHello, %s! You are in a dark forest. Alone. And a bit scared! Suddenly you hear a sound. A sound that is not usual.",name);
    printf("\n\npress 1- to run\npress 2- wait! \n\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("\n\nYou are running through the forest!\n\nPress 1-to stop running\npress 2-to keep running:\n");
        scanf("%d",&n);
        runner(n);
        break;
        case 2:
        printf("\n\nYou hold still. Looking around.\n\npress 1- to go to north.\npress 2-to go to south\n");
        scanf("%d",&n);
        looking(n);
        break;
        default:
        printf("\n\nYou didn't choose between Run & Wait. Game Over!!!\n\nPoint: 0.");
    }

    return 0;
}
