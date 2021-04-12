#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrix,row,col,r;
	int a[3][3],b[3][3],ans[3][3];
    for(row=0;row<=2;row++)
    {
            for(col=0;col<=2;col++)
            {
            printf("\n Enter Elements for Matrix %d,%d\n",row,col);
            scanf("%d",&a[row][col]);
			}
    }

    for(row=0;row<=2;row++)
    {
			for(col=0;col<=2;col++)
			{
            printf("\n Enter Elements for Matrix %d,%d\n",row,col);
            scanf("%d",&b[row][col]);
            printf("\t\t");
			}
    }
    for(row=0;row<=2;row++)
    {
            printf("\t\t\t\n");
			for(col=0;col<=2;col++)
            {
            ans[row][col]=a[row][col]+b[row][col];
            printf("%d\t",ans[row][col]);
            }
            printf("\t\t\t\n");
    }

    for(row=0;row<=2;row++)
    {
            printf("\n***************************");
			for(col=0;col<=2;col++)
            {
             ans[row][col]=0;
             for(r=0;r<=2;r++)
            {
             ans[row][col]+=a[row][r]*b[r][col];
            }
            }
    }
    for(row=0;row<=2;row++)
    {
            printf("\t\t\t\n");
			for(col=0;col<=2;col++)
            {
             printf("%d\t", ans[row][col]);
            }
            printf("\t\t\t\n");
    }
		     return 0;
}
