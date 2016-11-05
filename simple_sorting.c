#include <stdio.h>

void main(){
	int temp;
	int data[10] = {20,50,80,10,30,100,90,70,40,60};
	for (int i = 0; i <= 10; i++){

        for (int j = i + 1; j <= 10; j++){

            if (data[i] > data[j]) {
                temp =  data[i];
                data[i] = data[j];
                data[j] = temp;
            }
		}
	}
	int display;
	for (display=1 ; display<=10 ; display++){
		printf("%d\n",data[display]);
	}
}	