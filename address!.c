#include<stdio.h>
main()
{
	int a[5] = {10,20,30,40,50};
	int i;
	for(i=0;i<5;i++){
		printf("%d\n",&a[i]);
	}
	
	printf("%d\n",&a[0]);		//Print the address of first element
	printf("%d\n",a[0]);	//Print the first element
	printf("%d\n",a);	//Print the address of first element
	printf("%d\n",&a);  //Print the address of first element
}