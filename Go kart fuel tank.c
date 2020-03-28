/*A cylinder is to be made whose volume is entered by the user. Also the maximum values of radius and height are entered by
the user. Write a program to find out those values of height anf radius for which the entered volume can be attained. Also,
calculate how much extra is the volume than the entered volume.*/


#include<stdio.h>
int main()
{
	int rm,hm,r,h;
	float ev,vol,v; //ev=extra volume,vol=volume to be entered, hm=max height, rm=max radius
	
	printf("Enter the required volume: ");
	scanf("%f", &vol);
	
	printf("Enter the maximum radius: ");
	scanf("%d", &rm);
	
	printf("Enter the maximum height: ");
	scanf("%d", &hm);
	
	
	for(r=1;r<=rm;r++)
	{
		for(h=1;h<=hm;h++)
		{
			v=(22*r*r*h)/7;
			if(vol-1<=v<=vol+1)
			{
				printf("\n\nr= %d and h= %d",r,h);
				printf("\nvolume: %f",v);
				ev=vol-v;
				printf("\nExtra volume= %f",ev);
			}
		}
	}
return 0;
}	