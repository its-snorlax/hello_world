#include <stdio.h>
#include <time.h> 
#include <string.h>

struct farmer{
	int F_id;
	char F_name[20];
	float Land_area;
	char DOB[10];
}; 
struct farmer farmer1;
void main(){
	farmer1.F_id = 1000;
	strcpy (farmer1.F_name,"ABCD");
	farmer1.Land_area = 1.0;
	strcpy(farmer1.DOB,"01-01-2000");
	printf ("%d \n",farmer1.F_id);
	printf ("%s \n",farmer1.F_name);
	printf ("%d \n",farmer1.Land_area);
	printf ("%s \n",farmer1.DOB); 
}