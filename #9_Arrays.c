#include "stdio.h"

int main() {

    // int list[4];

    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    // list[3] = 4;
    
    // for (int i = 0; i < 5; i++)
    // {
    //     list[i] = i+1;
    // }
    

    // int list[] = {1,2,3,4,5};
    
    // for (int i = 0; i < 4; i++){
    //     printf("%d ",list[i]);
    // }

    int list[4][4] = {{1,2,3,4},{5,6,7,8},{0,0,0,0},{2,4,6,8}};

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; i < 4; j++)
    //     {
    //         printf("Enter here : ");
    //         scanf("%d",&list[i][j]);

    //     }
        
    // }
    

	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("%d", list[i][j]);
		}
		printf("\n");
	}

    return 0;
}  