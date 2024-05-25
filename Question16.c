// ANURAG YADAV
// 2303510100024
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the start year: ");
    scanf("%d",&a);
    printf("Enter the end year: ");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        if(i%4==0){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
    return 0;
}
