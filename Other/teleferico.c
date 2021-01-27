#include <stdio.h>

int main()
{
    int n,k,x;
    scanf("%d %d",&n,&k);
    
    
    
    
    if(k%(n-1)==0){
        x = k/(n-1);
        
    }else{
        x = k/(n-1)+1;
    }
    printf("%d \n",x);
    return 0;
}
