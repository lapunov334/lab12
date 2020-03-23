#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int HashFunk(int, int, int);    
    
int main () 
{	
	const int maxSize=50;
    int a[maxSize],n,i,b[maxSize];;
    srand(time(0));
    printf("Vvedite kol-vo keys[1..50]: \n");
    scanf("%d",&n);
    while(n<1 || n>50)
	{
		printf("Ne correctni vvod dannix");
		scanf("%d",&n);
	}
	for(i=0; i<n; i++)
	{
		a[i]=rand()%101-50;
	}
	printf("\n");	
	for(i=0; i<n; i++)
	{
		b[i]=HashFunk(a[i], i, n);
	}
	
	for(i=0; i<n; i++)
	{
		printf("Hash function(%d): %d\n",a[i],b[i]);
	}
	int max=b[0],min=b[0];
	for(i=1; i<n; i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	printf("Minimalnoe znachenie key: %d",min);
    return 0;
}

int HashFunk(int key, int i, int n)
{
	int res;
    return (res=(key*i)/n); 
}
 
