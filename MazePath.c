#include<stdio.h>
int maze(int cr,int cc, int er,int ec){     //cr=currentrow cc=currentcolumn er=endingrow ec=endingcolumn


    int rightWays=0;
    int downWays=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){   //only right no down acc to grid
        rightWays+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){  //only down no right 
        downWays+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays+=maze(cr,cc+1,er,ec);
         downWays+=maze(cr+1,cc,er,ec);
    }
    int totalWays=rightWays + downWays;
    return totalWays;
}  
int main(){
int n;
printf("enter no of rows of the maze :");
scanf("%d",&n);
int m;
printf("enter no of columns of maze :");
scanf("%d",&m);
int noOfWays=maze(1,1,n,m);       //1,1 is starting place
printf("%d",noOfWays);
    return 0;
}