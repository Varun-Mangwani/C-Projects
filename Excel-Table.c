#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int b,b1=0,c;
    printf("\nSet Other Value To 0 In Case Of Same \nLike: 3 0(3X3)");
    printf("\nEnter The Dimension Of Table:");
    scanf("%d %d", &b, &b1);
    if (b1 == 0) {
    b1 = b;
}
    int tbl[b][b1];
    system("clear");
    printf("\n\tArrays Dimension's Recieved...");
    getchar();
    printf("\nEnter Values As The Index");
    if(b==b1){
    for(int i=0;i<b;i++){
    for(int j=0;j<b;j++){
    printf("\nEnter Value On Row %d Column %d: ",i,j);
    scanf("%d",&tbl[i][j]);
    }
    
    }
    for(int i=0;i<b;i++){
    for(int j=0;j<b;j++){
    printf("\t %d",tbl[i][j]);
    }
    printf("\n");
    }
    
    }else{
    
    for(int i=0;i<b;i++){
    for(int j=0;j<b1;j++){
    printf("\nEnter Value On Row %d Column %d: ",i,j);
    scanf("%d",&tbl[i][j]);
    }
    
    }
   for(int i=0;i<b;i++){
    for(int j=0;j<b1;j++){
    printf("\t %d",tbl[i][j]);
    }
    printf("\n");
    }
    }
    
    
    
    
    
    
    return 0;
    
}