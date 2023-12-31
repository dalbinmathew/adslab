#include<stdio.h>
#define V 5
int G[V][V]={
    {0,2,0,6,0},
    {2,0,3,8,5},
    {0,3,0,0,7},
    {6,8,0,0,9},
    {0,5,7,9,0}
};
int main(){
    int i,j,x,y,sum=0,count=0,min;
    int select[V]={0,0,0,0,0};
    select[0]=1;
    while(count<V-1){
        x=0,y=0,min=999;
        for(i=0;i<V;i++){
            if(select[i]==1){
                for(j=0;j<V;j++){
                    if(!select[j] && G[i][j]!=0){
                        if(min>G[i][j]){
                            min=G[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        printf("edge : weight  ");
        printf("%d - %d : %d\n",x,y,G[x][y]);
        select[y]=1;
        sum=sum+G[x][y];
        count++;
    }
    printf("\nMinimum Sum = %d", sum);
    return 0;
}