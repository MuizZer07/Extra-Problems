#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Player{
    char name[30];
    int minimumTurns;
    int accumulatedValue;
    int numTimes;
    int won;
};

int diceThrown()
{
    int r = rand() % 6 + 1;

    return r;
}

void playerTurn(int minimumTurns, int *acValue, int *thr, int count[])
{
        while(*acValue < minimumTurns){
                ++(*thr);
                int a = diceThrown();
                printf("%d ", a);

                count[a]++;

                if(a == 1){
                    *acValue = 0;
                    break;
                }
                else *acValue += a;

        }
}

void playerPrint(int i,  struct Player players[])
{
     printf("Player's name: %s \n", &players[i].name);
}

void refresh(int *numberOfplayers, struct Player players[], int count[])
{
       int j;
       for(j=0; j<numberOfplayers; j++){
                players[j].accumulatedValue = 0;
                players[j].numTimes = 0;
       }
       int k;
        for(k=0; k<7; k++){
            count[k] = 0;
        }
}
void  playGutsy(int *numberOfplayers, int *numberOfGames, struct Player players[], double stats[], int count[], int *totalThrw)
{
       int j;
       bool flag = true;
       while(flag){
            for(j=0; j<numberOfplayers; j++){

                printf("%s's turn: ", players[j].name);
                int acValue = 0, thr = 0;

                playerTurn(players[j].minimumTurns, &acValue, &thr, count);


                players[j].accumulatedValue += acValue;
                *totalThrw += thr;

                printf("=%d. Accumulated total=%d. Throws=%d\n", acValue, players[j].accumulatedValue, thr);

                if(players[j].accumulatedValue >= 101){
                    flag = false;
                    printf("***** Winner: %s *****\n", &players[j].name);
                    players[j].won++;
                    break;
                }
            }
            printf("\n");
       }
}

void FinalTable(struct Player players[],int numberOfplayers)
{
    printf("Final Table\n");
    printf("\tplayer\tRisk Factor\t\tTimes Won\n");
    int i;
    for(i=0; i<numberOfplayers; i++)
        {
        printf("\t%s\t%d\t\t\t%d\n", &players[i].name, players[i].minimumTurns, players[i].won);
    }
}

void FinalStatistics(double totalStat[], int numberOfGames){
    int k;
    printf("Final Statistics for %d Games\n",numberOfGames);
    for(k=1; k<7; k++){
            printf("\tP(%d): %.4f\n", k, totalStat[k]);
    }
}

void stat(int game, int totalThrw,double stats[], int count[]){

    printf("Game %d - Statistics\n", game);

        int k;
        for(k=1; k<7; k++){
                    stats[k] = (double)count[k]/totalThrw;
                    printf("\tP(%d): %.4f\n", k, stats[k]);
        }


}
int main()
{
    int numberOfplayers, numberOfGames;
    double stats[7];
    int count[7];
    printf("Please type in the number of players: ");
    scanf("%d", &numberOfplayers);
    printf("Please type in the number of games: ");
    scanf("%d", &numberOfGames);

    printf("\n");
    struct Player players[numberOfplayers];
    int i;
    for(i=0; i<numberOfplayers; i++){
       printf("Player %d:\n", i+1);
       printf("\tName: ");
       scanf("%s", &players[i].name);
       printf("\tMinimum number to stop in a turn: ");
       scanf("%d", &players[i].minimumTurns);

       players[i].won = 0;
    }

    double totalStat[7];
    int k=0;
    for(k=1; k<7; k++){
            totalStat[k] = 0;
    }

    printf("\n***** GAME STARTING *****\n");

    for(i=0; i<numberOfGames; i++){
        int  totalThrw = 0;
        printf("Game %d\n", i+1);
        refresh(numberOfplayers, players, count);
        printf("\n");
        playGutsy(numberOfplayers, numberOfGames, players, stats, count, &totalThrw);

        printf("\n");
        stat(i+1, totalThrw, stats, count);

             for(k=1; k<7; k++){
                if(i!=0) totalStat[k] = (totalStat[k]+stats[k])/2;
                else totalStat[k] = stats[k];
            }

    }

    printf("\n");
    FinalTable(players, numberOfplayers);
    FinalStatistics(totalStat, numberOfGames);

    return 0;
}
