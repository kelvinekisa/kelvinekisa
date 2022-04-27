#include <stdio.h>

/*int main(int argc, char** argv)
{
	int i;
	int arr[5] ={0,6,8,9,4};
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("\n%d", arr[i]);
	}
	return 0;
}*/
int main()
{
	int a[10]; 
	int i; 
for(i=0; i<10; i++)
{
		printf("Enter Number: ");
	scanf("%d", &a[i]);
}
printf("Output list of values\n");
i=0;
while(i<10)
{
	printf("%d\t",a[i]);
	i=i+1;
	
}
//printf("\n");

	return 0;
}
