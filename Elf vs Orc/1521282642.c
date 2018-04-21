#include <stdio.h>

struct node
{
    int value;
    int predecessor;
    int color;
    struct node *NodePointer;
}*front,*Rear,*Temporary,*dummyFront;

int length = 0;

void createQueue();
void Enqueue(int value);
void Dequeue();
int Front();
int isEmpty();

int main(){

    int n, edges;
    scanf("%d%d", &n, &edges);

    int adjacencyMatrix[n+1][n+1];
    int elfOrc[n+1];

    int i, j;

    for(i=0; i<=n; i++) elfOrc[i] = 0;

    for(i=0; i<=n; i++)
        for(j=0;j<=n;j++)
            adjacencyMatrix[i][j] = 0;

    for(i=0; i<edges; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        adjacencyMatrix[x][y] = 1;
        adjacencyMatrix[y][x] = 1;
    }

    struct node AllNodes[n];
    for(i=0; i<=n; i++){
        struct node NewNode;
        NewNode.color = -1;
        NewNode.value = i;
        NewNode.predecessor = -1;
        AllNodes[i] = NewNode;
    }

    int SourceNode;
    createQueue();

    for(i=1;i<=n; i++){
        while(AllNodes[i].color != 1){
            SourceNode = i;
            AllNodes[i].predecessor = -1;
            AllNodes[i].color = 0;

            Enqueue(SourceNode);

            while(isEmpty()!=1){
                int f = Front();
                Dequeue();

                if(elfOrc[f]==0){
                    if(AllNodes[f].predecessor == -1) elfOrc[f] = -1;
                    if(elfOrc[AllNodes[f].predecessor]==-1) elfOrc[f] = 1;
                    else if (elfOrc[AllNodes[f].predecessor]== 1) elfOrc[f] = -1;
                }
                int k;
                for(k=1; k<=n; k++){
                if(adjacencyMatrix[f][k]==1){
                            if(AllNodes[k].color==-1){
                                AllNodes[k].color=0;
                                AllNodes[k].predecessor= f;
                                Enqueue(k);
                                if(elfOrc[k]==0){
                                    if(elfOrc[f]==-1) elfOrc[k] = 1;
                                    else if (elfOrc[f]== 1) elfOrc[k] = -1;
                                }
                            }
                        }
                    }
                AllNodes[f].color = 1;
            }
        }
    }


    int elf=0, orc=0;

    for(i=1;i<=n; i++){
        if(elfOrc[i]==1) elf++;
        else if(elfOrc[i]==-1) orc++;
    }

    int Elf[elf], Orc[orc];
    int w=0, q=0;

    for(i=1;i<=n; i++){
        if(elfOrc[i]==1){
            Elf[w] = i;
            w++;
        }
        else if(elfOrc[i] == -1){
            Orc[q] = i;
            q++;
        }
    }

    int b = 0, bb = 0;
    for(i=0;i<elf; i++){
        for(j=0; j<elf;j++){
            if(i!=j){
                if(adjacencyMatrix[Elf[i]][Elf[j]]==1){
                    printf("No\n");
                    b = 1;
                    break;
                }
            }
        }
        if(b==1) break;
    }

    if(b == 0){
        for(i=0; i<orc; i++){
            for(j=0; j<orc; j++){
                if(i!=j){
                    if(adjacencyMatrix[Orc[i]][Orc[j]] == 1){
                        printf("No\n");
                        bb = 1;
                        break;
                    }
                }
            }
        if(bb==1) break;
        }
    }


   if(b != 1 && bb != 1)
        printf("Yes\n");

    return 0;
}

void createQueue()
{
    front = Rear = NULL;
}

void Enqueue(int value)
{
    if (Rear == NULL)
    {
        Rear = (struct node *)malloc(1*sizeof(struct node));
        Rear->NodePointer = NULL;
        Rear->value = value;
        front = Rear;
    }
    else
    {
        Temporary=(struct node *)malloc(1*sizeof(struct node));
        Rear->NodePointer = Temporary;
        Temporary->value = value;
        Temporary->NodePointer = NULL;

        Rear = Temporary;
    }
    length++;
}

void Dequeue()
{
    dummyFront = front;

    if (dummyFront == NULL)
    {
        return;
    }
    else
        if (dummyFront->NodePointer != NULL)
        {
            dummyFront = dummyFront->NodePointer;
            free(front);
            front = dummyFront;
        }
        else
        {
            free(front);
            front = NULL;
            Rear = NULL;
        }
        length--;
}

int Front()
{
    if ((front != NULL) && (Rear != NULL))
        return(front->value);
    else
        return -1;
}

int isEmpty()
{
     if ((front == NULL) && (Rear == NULL))
        return 1;
    else
       return -1;
}
