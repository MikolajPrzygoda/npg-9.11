#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }
	
	//zmiana 4 master

    printf("Sum = %d",sum);

	//zmiana 4
    return 0;
}
