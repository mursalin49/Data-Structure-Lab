#include<stdio.h>

int main(){
    int x,S=0;
    scanf("%d",&x);


    for(int i=1;i<=x;i++){
        int r=1;
        if(i==1){
            r=2;
        }
        if(i>10){
            S+=2*(i-1);
        }
        else(S+=i-1);
        for(int j=r;j<=2;j++){
            printf("\n");
             for(int s=1;s<=S;s++){

                printf(" ");
            }
            for(int k=1;k<=i;k++){
                printf("%d",i);
            }

        }
    }
    return 0;
}
