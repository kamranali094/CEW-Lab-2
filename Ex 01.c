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
