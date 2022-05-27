#include<stdio.h>
int n,graph[20][20],x[20],m;
int false = 0;


void nextvalue(int k)
{
    int j;
    do{
        x[k]=(x[k]+1)%(m+1);
        if(x[k]==0)
        {
            return;
        }
        for(j=1;j<=k-1;j++)
        {
            if (graph[k][j]==1 && x[j]==x[k])
            break;
        }
        if(j==k)
        {
            return;
        }
    } while (!false);
}
void mcolour(int k)
{
   do{ 
            int i,j;
            nextvalue(k);
            if(x[k]==0)
            {
                return;
            }
            if(k==n)
            {
                
                for(i=1;i<=n;i++)
                {
                    printf(" %d ",x[i]);
                }
                printf("\n\n");
            }
            else
            {
                mcolour(k+1);
            }
        }while(!false);
}
int main()
{
    int i,j;
    FILE *fp;
    printf("\nEnter the Value of m : \n");
    scanf("%d",&m);
    fp=fopen("graph.txt","r");
    if(fp==NULL)
    {
        printf("\n error to open the file");
    } 
   fscanf(fp,"%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           fscanf(fp,"%d",&graph[i][j]);
       }
   }
   fclose(fp);
    printf("\nThe graph is :\n");
    for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           printf(" %d ",graph[i][j]);
       }
       printf("\n");
   }
   int l=1;
   printf("\n No. of Possible color combination is : \n");
   mcolour(l);
   


   return 0; 
}
