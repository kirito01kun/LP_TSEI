/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will take 3 values as input            *
 *		      and return the greater one		 	  *
 * ************************************************************************/
int Ex7(){
	int n1, n2, n3, max;
	printf("Please enter 3 values :\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	if(n1 > n2){
		max = n1;
		if(n1 > n3){max = n1;}
		else{max = n3;}
	}
	else{
		max = n2;
		if(n2 > n3){max = n2;}
		else{max = n3;}
	}
	printf("The maximum value is :\n%d\n", max);
}
