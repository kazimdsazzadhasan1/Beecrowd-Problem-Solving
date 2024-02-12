#include<stdio.h>
int main(){
    int i,j,N;
    int arr[7]={100,50,20,10,5,2,1};
    int br[7];
    scanf("%d",&N);
    printf("%d\n",N);
    for(i=0;i<7;i++){
        br[i]=N/arr[i];
        N=N%arr[i];
    }
    for(j=0;j<7;j++){
        printf("%d nota(s) de R$ %d,00\n",br[j],arr[j]);
    }
return 0;
}

