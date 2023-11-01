#include <stdio.h>
#include <stdlib.h>
//--------------------with For Loop --------------
int main()
{   int a,sum=0;
    printf("Enter the No's:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d\n",2*i-1);
        sum+=2*i-1;
        printf("Sum is %d\n",sum);
        }
    }
//-------------------With While Loop----------------
int main()
{   int a,sum=0,i=1;
    printf("Enter the No's:");
    scanf("%d",&a);
    while(i<=a){
        printf("%d\n",2*i-1);
        sum+=2*i-1;
        printf("Sum is %d\n",sum);
        i++;
        }
    }
//--------With Do while loop-----------------
int main() {
    int num, i=1;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    do{
        printf("%d ",i);
        i=i+2;
    }while(i <= 2*num);
    return 0;
}

