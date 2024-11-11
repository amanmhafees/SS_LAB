#include<stdio.h>

struct process{
    int pid;
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
}p[20];

void main(){
    int i,j,n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
            printf("\nEnter process id,at,bt: ");
            scanf("%d%d%d",&p[i].pid,&p[i].at,&p[i].bt);
    }
    for(i=0;i<n;i++){
        for(j=0;)
    }
}
