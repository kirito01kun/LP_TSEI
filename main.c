#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include "Exercise1Serie1.h"
#include "Exercise2Serie1.h"
#include "Exercise3Serie1.h"
#include "Exercise4Serie1.h"
#include "Exercise5Serie1.h"
#include "Exercise6Serie1.h"
#include "Exercise7Serie1.h"
#include "Exercise8Serie1.h"
#include "Exercise1Serie2.h"
#include "Exercise2Serie2.h"
#include "Exercise3Serie2.h"
#include "Exercise4Serie2.h"
#include "Exercise5Serie2.h"
#include "Exercise6Serie2.h"
#include "Exercise7Serie2.h"
#include "Exercise8Serie2.h"
#include "Exercise9Serie2.h"

void	main(){
	int ex, serie;
	printf("Hi sir !\nWhich program do u want to review ?\n");
	printf("Enter the number of exercise then the number of serie as follows\n");
	printf("Example :\n2\n1\n(Means Exercice 2 serie 1)...\n");
	while(1){
	printf("****************************************************************\n");
	printf("Please choose specific exercise now...\n");
	scanf("%d%d", &ex, &serie);
	printf("***** Your choice is : Exercise %d in Serie %d : *****\n", ex, serie);
	if(serie == 1){
		if(ex == 1)Ex1();
		else if(ex == 2)Ex2();
		else if(ex == 3)Ex3();
		else if(ex == 4)Ex4();
		else if(ex == 5)Ex5();
		else if(ex == 6)Ex6();
		else if(ex == 7)Ex7();
		else if(ex == 8)Ex8();
		else continue;
	}
	else if(serie == 2){
		if(ex == 1)Ex1S2();
                else if(ex == 2)Ex2S2();
                else if(ex == 3)Ex3S2();
                else if(ex == 4)Ex4S2();
                else if(ex == 5)Ex5S2();
                else if(ex == 6)Ex6S2();
                else if(ex == 7)Ex7S2();
                else if(ex == 8)Ex8S2();
		else if(ex == 9)Ex9S2();
                else continue;
	}
	}
}
