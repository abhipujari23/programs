#include <stdio.h>
#include <math.h>

int main() 
{
	int test;
	
	printf("Enter the number of tests: ");
	scanf("%d", &test);

	for (int a=0; a < test; a++) {
		int n; 
		int pos[10];
		printf("\n\nTest Number %d:", a+1);
		printf("\nEnter number of people: ");
		scanf("%d", &n);
		
		for (int i=0; i<n; i++)
		{
			printf("\n Enter position of %d: ", i+1);
			scanf("%d", &pos[i]);
		}
		
		int min = n, max = 1, count;

		for (int i=0; i<n; i++) {
			count=1;
			//checks forward
			for (int j=i; j<=n-2; j++) {
				if (abs(pos[j]-pos[j+1]) <=2) 
					count++;			
				else 
					break; 
			}
			//checks backward
			for (int k=i; k>=1; k--) {
				if (abs(pos[k]-pos[k-1]) <=2) 
					count++;
				else 
					break; 
			}
			
			if(count < min)
				min = count;
			if(count > max)
				max = count;
		}
		
		printf("\nMinimum: %d \nMaximum: %d", min, max);
	}
	return 0;
}
