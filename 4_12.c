#include <stdio.h>
int main()
{
    for(int j=1;j<=100;j++){
        int flag = 0;
        if(j==0||j==1){
            continue;
        }
        else{

            for (int i = 2; i <= j / 2; i++)
            
            {   
                if (j % i == 0)
                {
                    flag += 1;
                }
                else
                {
                    flag = flag;
                }
            }
            if (flag == 0)
            {
                printf("\n%d ", j);
            }
        }
    }
        
    return 0;
    }
